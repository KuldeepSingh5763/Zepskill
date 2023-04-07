myInterval = setInterval(table, 5000);
let x = 5; 
function table() {
    if(x==5 || x<=7){
        for(let i=1;i<=10;i++){
            console.log(x*i);
        }
        x+=1;
    }
}