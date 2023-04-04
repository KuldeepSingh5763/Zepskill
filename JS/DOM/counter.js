let increment = document.getElementById('increment');
let decrement = document.getElementById('decrement');
let reset = document.getElementById('reset');
let data = document.getElementById('data');

let counter = 0;
increment.addEventListener('click',()=>{
    counter++;
    data.innerHTML = counter;
});

decrement.addEventListener('click',()=>{
    counter--;
    data.innerHTML = counter;
});

reset.addEventListener('click',()=>{
    counter = 0;
    data.innerHTML = counter;
})