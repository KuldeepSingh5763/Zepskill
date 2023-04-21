const canvas = document.querySelector("canvas"),
toolbtns = document.querySelectorAll(".tool"),
fillcolor = document.querySelector("#fill-color"),
sizeSlider = document.querySelector("#size-slider"),
colorBtns = document.querySelectorAll(".colors .option"),
colorPicker = document.querySelector("#color-picker"),
clearCanvas = document.querySelector(".clear-canvas"),
saveImg = document.querySelector(".save-img"),
ctx = canvas.getContext("2d");

 // Global variable with default Value
let prevMouseX , prevMouseY, snapshot,
isdrawing = false,
selectedTool = "brush",
brushWidth = 5,
selectedColor = "#000";

const setCanvasBackground = () => {
    ctx.fillStyle = "#fff";
    ctx.fillRect(0, 0, canvas.width , canvas.height);
    ctx.fillStyle = selectedColor;
}

window.addEventListener("load", ()=>{
    // setting canvas width/Height..
    // offsetwidth/height returns viewable width/height of an element 
    canvas.width = canvas.offsetWidth;
    canvas.height = canvas.offsetHeight;
    setCanvasBackground();
});

const drawRect = (e) =>{
    // if fillcolor not checked draw a rect border else draw rect with background
    if(!fillcolor.checked){
        // creating circle according to the mouse pointer
       return ctx.strokeRect(e.offsetX , e.offsetY , prevMouseX - e.offsetX, prevMouseY - e.offsetY); 
    }
    ctx.fillRect(e.offsetX , e.offsetY , prevMouseX - e.offsetX, prevMouseY - e.offsetY);
};

const drawCircle = (e) => {
    ctx.beginPath(); // creating new path to draw circle
    // getting Radius for circle according to the mouse pointer
    let radius = Math.sqrt(Math.pow((prevMouseX - e.offsetX),2) + Math.pow((prevMouseY - e.offsetY),2));
    ctx.arc(prevMouseX , prevMouseY , radius , 0 , 2 * Math.PI);
    fillcolor.checked ? ctx.fill() : ctx.stroke();
};

const drawTriangle = (e) => {
    ctx.beginPath(); // creating new path to draw Triangle
    ctx.moveTo(prevMouseX, prevMouseY); // moving triangle to the mouse pointer
    ctx.lineTo(e.offsetX , e.offsetY); // creating first line to the mouse pointer
    ctx.lineTo(prevMouseX * 2 - e.offsetX , e.offsetY); // creating Bottom line of triangle
    ctx.closePath(); // closing path of a triangle so the third line draw automatically
    fillcolor.checked ? ctx.fill() : ctx.stroke(); // if fillcolor is checked fill triangle else draw border
}

const startDraw = (e) =>{
    isdrawing = true;
    prevMouseX = e.offsetX; // passing current mouseX position as prevMouseX value
    prevMouseY = e.offsetY; // passing current mouseY position as prevMouseY value
    ctx.beginPath(); // Creating new path to Draw
    ctx.lineWidth = brushWidth; // passing brush size as line width
    ctx.strokeStyle = selectedColor;// passing selectedColor as stroke Style
    ctx.fillStyle = selectedColor; // passing selectedColor as fill style
    snapshot =ctx.getImageData(0,0,canvas.width,canvas.height);
}

const drawing = (e)=>{
    if(!isdrawing) return; // if isdrawing is false return from here
    ctx.putImageData(snapshot , 0 ,0); //adding copied canvas data on to this canvas

    if(selectedTool === "brush" || selectedTool === "eraser"){
        ctx.strokeStyle = selectedTool ==="eraser" ? "#fff" : selectedColor;

        ctx.lineTo(e.offsetX, e.offsetY); // creating line according to the mouse pointer
        ctx.stroke(); // drawing/ filling line with color
    }
    else if(selectedTool === "rectangle"){
        drawRect(e);
    }   
    else if(selectedTool === "circle"){
        drawCircle(e);
    } 
    else{
        drawTriangle(e);
    }  
}

toolbtns.forEach(btn => {
    btn.addEventListener("click" , () =>{  // adding click event to all tool option
        // removing active class from the previous option and adiing on current clicked option
        document.querySelector(".options .active").classList.remove("active");
        btn.classList.add("active");
        selectedTool = btn.id;
        console.log(selectedTool);
    })    
});

sizeSlider .addEventListener("change" , () => brushWidth = sizeSlider.value);//passing slider value as brushSize

colorBtns.forEach(btn =>{
    btn.addEventListener("click", () => {
        // removing active class from the previous option and adiing on current clicked option
        document.querySelector(".options .selected").classList.remove("selected");
        btn.classList.add("selected");
        selectedColor = window.getComputedStyle(btn).getPropertyValue("background-color");
    });

});
colorPicker.addEventListener("change", () => {
    colorPicker.parentElement.style.background = colorPicker.value;
    colorPicker.parentElement.click();
});

clearCanvas.addEventListener("click", () => {
    ctx.clearRect(0, 0, canvas.width, canvas.height); // clearing whole canvas
});

saveImg.addEventListener("click", () => {
    const link =  document.createElement("a"); // creating <a> Element
    link.download = `${Date.now()}.jpg`; // passing current data as link downlod value
    link.href = canvas.toDataURL(); // passing canvas data as link href value
    link.click(); // Clicking link to download now
});
canvas.addEventListener("mousedown" , startDraw);
canvas.addEventListener("mousemove" , drawing);
canvas.addEventListener("mouseup" , ()=> isdrawing = false);