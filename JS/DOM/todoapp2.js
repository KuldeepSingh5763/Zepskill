let form = document.getElementById("form");
let input = document.getElementById("input-data");
let todo = document.querySelector(".todo");

form.addEventListener("submit",(e) => {
    e.preventDefault();

    let task = input.value;
    console.log(task);

    if(task === ''){
        return;
    }

    let todoDiv = document.createElement('div');
    todoDiv.classList.add('todoDiv');
    todo.appendChild(todoDiv);

    let todoContent = document.createElement('div');
    todoContent.classList.add('content');
    todoDiv.appendChild(todoContent);

    let inputList = document.createElement('input');
    inputList.type ="text";
    inputList.value = task ;
    inputList.setAttribute('readonly','readonly');
    inputList.classList.add('inputList');
    todoContent.appendChild(inputList);

    let todoAction = document.createElement('div')
    todoAction.classList.add('action');
    todoDiv.appendChild(todoAction);

    let edit = document.createElement('button');
    edit.classList.add('edit');
    edit.innerHTML = `<i class="fa-solid fa-pen-to-square"></i>`;
    

    let remove = document.createElement('button');
    remove.classList.add('remove');
    remove.innerHTML = `<i class="fa-solid fa-delete-left"></i>`;

    todoAction.appendChild(edit);
    todoAction.appendChild(remove);

    remove.addEventListener('click',() => {
        todo.removeChild(todoDiv);
    });

    edit.addEventListener('click', ()=> {
        if(edit.innerHTML == `<i class="fa-solid fa-pen-to-square"></i>`){
            inputList.removeAttribute('readonly');
            edit.innerHTML = `<i class="fa-sharp fa-solid fa-pen-to-square"></i>`;
        }
        else{

            inputList.setAttribute('readonly','readonly');
            edit.innerHTML = `<i class="fa-solid fa-pen-to-square"></i>`;
        }
    })

    input.value="";




})