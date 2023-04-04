// Ques 1 write your name

let i=1;
for(i;i<=5;i++){
    console.log(`Kuldeep Singh`);
}

// Ques 2 Write table 5 & 7

console.log(`Table of 5`);
num=5;
for(let i1=1;i1<=10;i1++){
    console.log(num,"*",i1,"=",num*i1);
}

console.log(`Table of 7`);
num2=7;
for(let i2=1;i2<=10;i2++){
    console.log(num2,"*",i2,"=",num2*i2);
}

// Ques 3 Display number between 11 to 20

console.log(`number between 11 to 20`);
for(let j=11;j<=20;j++){
    console.log(j);
}

// Ques 4 display natural number first 50

console.log(`First 50 Natural number`);
let sum=0;
for(let n=1; n<=50; n++){
    sum=sum+n;
}
console.log(`Sum of first 50 natural number= ${sum}`);

// Ques 5 display Factorial of any number

// let num3 = prompt("Enter any number");
// fact=1;
// for (i=1;i<=num3;i++){
//     fact = fact*i;

// }
// console.log(fact);

//Ques 6 

let bills=[22,295,176,440,37,105,10,1100,86,52];
let tips=[];
let totals=[];

let calctip=(bill)=>{
    let tip = (50<=bill<=300) ? bill*(15/100) : bill*(20/100);
    return tip;
}
let len = bills.length;
for (let a=0;a<len;a++){
    tips.push(calctip(bills[a]));
    totals.push(bills[a]+calctip(bills[a]));
}
console.log( "Tip = ",tips);
console.log("Total Bill = ",totals);