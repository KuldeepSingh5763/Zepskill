myInterval = setInterval(table, 5000);
let x = 5; 
let count=0
function table() {
    count+=1;
    if(x>=5){
        for(let i=1;i<=10;i++){
            console.log(x*i);
        }
        x+=1;
    }
    if(count == 10){
        clearInterval(myInterval);
    }
}