function shuffle(){
    let img = document.getElementById('img1');
    let randomNumber = Math.floor(Math.random() * 6) + 1 ;
    img.setAttribute("src",`${randomNumber}.jpeg`);
}
function animation(){
    setTimeout(shuffle , 500);
    let img = document.getElementById('img1');
    img.setAttribute("src","roll.gif");
}