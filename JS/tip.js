// Bill Calculator

let bill=275;
((50 < bill)&&(bill<300)) ?
console.log(`"Tip 15% of Bill,  Total bill" = ${bill + bill*(15/100)}`) : 
console.log(`"Tip 20% of Bill,  Total bill" = ${bill + bill*(20/100)}`) ;


// Ques 2 using function 

function calcTip(bill){
    let tip= 50<=bill<=300 ? bill*(20/100) : bill*(15/100);
    return tip;
}
let bills=125;
let tip = calcTip(bills);
console.log(`Total Bill (Bil + Tip) = ${bills+tip}`);
