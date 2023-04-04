let history = document.getElementById('history');
let vision = document.getElementById('vision');
let goal = document.getElementById('goal');

let historyContent = document.querySelector('.history-content');
let visionContent = document.querySelector('.vision-content');
let goalContent = document.querySelector('.goal-content');

history.addEventListener('click', () =>{
    historyContent.style.display = "flex";
    visionContent.style.display = "none";
    goalContent.style.display = "none";
})

vision.addEventListener('click', () =>{
    historyContent.style.display = "none";
    visionContent.style.display = "flex";
    goalContent.style.display = "none";
})

goal.addEventListener('click', () =>{
    historyContent.style.display = "none";
    visionContent.style.display = "none";
    goalContent.style.display = "flex";
})