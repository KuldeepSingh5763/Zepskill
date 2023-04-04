let input = document.getElementById("input-data");
let alert1 = document.getElementById('alert');
let addbtn = document.getElementById("btn1");
let task = document.querySelector(".display");

addbtn.addEventListener('click', () => {
    if(input.value.trim() != 0){
        let newItem = document.createElement('div');
        newItem.classList.add('data');
        newItem.innerHTML = `
        <p> ${input.value} </p>
        <div class="databtn">
            <i class="fa-solid fa-delete-left"></i>
        </div>
        `
        task.appendChild(newItem);
        input.value = "";
        alert1.value = '';
    }
    else{
        alert1.value = 'Please Enter A task';
    }
});

task.addEventListener('click', (e) =>{
    if(e.target.classList.contains('fa-delete-left')){
        e.target.parentElement.parentElement.remove();
    }
})