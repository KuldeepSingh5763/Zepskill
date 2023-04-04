let input = document.getElementById("input-text");
console.log(input);

let submitbtn = document.querySelector(".submit");
console.log(submitbtn);


let list = [{}];
let msg = document.querySelector(".msg");

console.log(msg);

submitbtn.addEventListener("click",(e) => {
    console.log("Button is clicked");
    if(input.value === ""){
        msg.innerHTML="Task can't be blank ";
    }
    else{
        console.log("Success");
        addTask();
    }
});

let addTask = () => {
    list.push({
        text:input.value,
    });
    console.log(list);
}