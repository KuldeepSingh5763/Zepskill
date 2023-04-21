let btn1= document.querySelector("#btn1");
let text1= document.querySelector(".text1");
btn1.innerHTML = `<i class="fa-solid fa-plus"></i>`;

let btn2= document.querySelector("#btn2");
let text2= document.querySelector(".text2");
btn2.innerHTML = `<i class="fa-solid fa-plus"></i>`;

let btn3= document.querySelector("#btn3");
let text3= document.querySelector(".text3");
btn3.innerHTML = `<i class="fa-solid fa-plus"></i>`;

let btn4= document.querySelector("#btn4");
let text4= document.querySelector(".text4");
btn4.innerHTML = `<i class="fa-solid fa-plus"></i>`;

btn1.addEventListener('click', ()=>{
    if(btn1.innerHTML == `<i class="fa-solid fa-plus"></i>`){
        text1.style.display = 'flex';
        btn1.innerHTML = `<i class="fa-solid fa-xmark"></i>`; 
    }
    else{
        text1.style.display = 'none';
        btn1.innerHTML = `<i class="fa-solid fa-plus"></i>`;
    }
});

btn2.addEventListener('click', ()=>{
    if(btn2.innerHTML == `<i class="fa-solid fa-plus"></i>`){
        text2.style.display = 'flex';
        btn2.innerHTML = `<i class="fa-solid fa-xmark"></i>`; 
    }
    else{
        text2.style.display = 'none';
        btn2.innerHTML = `<i class="fa-solid fa-plus"></i>`;
    }
});

btn3.addEventListener('click', ()=>{
    if(btn3.innerHTML == `<i class="fa-solid fa-plus"></i>`){
        text3.style.display = 'flex';
        btn3.innerHTML = `<i class="fa-solid fa-xmark"></i>`; 
    }
    else{
        text3.style.display = 'none';
        btn3.innerHTML = `<i class="fa-solid fa-plus"></i>`;
    }
});

btn4.addEventListener('click', ()=>{
    if(btn4.innerHTML == `<i class="fa-solid fa-plus"></i>`){
        text4.style.display = 'flex';
        btn4.innerHTML = `<i class="fa-solid fa-xmark"></i>`; 
    }
    else{
        text4.style.display = 'none';
        btn4.innerHTML = `<i class="fa-solid fa-plus"></i>`;
    }
});
