let Open = document.querySelector(".btn");
console.log(Open);
let Content = document.querySelector(".content");
let Close = document.querySelector(".close");

Open.addEventListener("click", () =>{
    console.log("btn is clicked");
    Content.style.display = "flex";
});

Close.addEventListener("click" , () =>{
    Content.style.display ="none";
})