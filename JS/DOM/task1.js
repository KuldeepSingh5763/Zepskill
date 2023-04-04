//Task1

let paragraph1= document.getElementById("para1");
console.log(paragraph1);
let btn = document.getElementById("click");
console.log(btn);
let initialvalue = paragraph1.textContent;
btn.addEventListener("click", () => {
    console.log("Button is clicked");
    btn.innerHTML = "Clicked";
    paragraph1.innerHTML = `${initialvalue} singh`;
});

// Task 2

let val=document.getElementsByClassName("div2");
console.log(val);

let task2btn = document.getElementById("task2btn");


task2btn.addEventListener("click",() => {
    val[2].innerHTML = "Item changed";
    console.log(val); 
});

// Task3


let list2 = [];
let taskInput = document.getElementById("task-input");
console.log(taskInput);

let btn3 = document.getElementById("addTask");
console.log(btn3);

let divItem = document.getElementsByClassName("list3");
console.log(divItem);

btn3.addEventListener("click", () =>{
    console.log("Button is clicked");
    list2.push({
        text: taskInput.value,
    })
    taskInput.value="";
    console.log(list2);

    for(let i=0;i<list2.length;i++){
        divItem[i].innerHTML = list2[i].text;
    }
});

//  Task 4

let div4 = document.querySelector(".div4");
console.log(div4);
let isSquare = true;

div4.addEventListener("click", () => {
    if(isSquare){
        div4.style.borderRadius = "100px";
        isSquare= false;
    }
    else{
        div4.style.borderRadius = "0px";
        isSquare = true;
    }
});

let fruits = ["apple","mango","banana","orange","Guava"];
let fruitlist = document.getElementById("fruitlist");

fruits.forEach(Ele => {
    let itemEle = document.createElement("li");
    itemEle.textContent = Ele;
    fruitlist.appendChild(itemEle);    
});


// Task 5

let books = [
    {
        title : `The Design of EveryDay Things`,
        author: `Don Norman`,
        alreadyRead : false
    },
    {
        title : `The most Human Human`,
        author: `Brian Christian`,
        alreadyRead : true 
    }
];

let p = document.getElementById("para5");

books.forEach(Ele => {
    let itemEle = document.createElement("p");
    itemEle.textContent = Ele;
    para5.appendC(itemEle);    
});


