let arr = [1,2,3,4,5,6,7,8,9,10,11,12];

// map Function

let newArr = arr.map(item => item * 2);  // (function , condition)
console.log(newArr);
 
// Filter Function

let filterArr = arr.filter(ele => ele%2==0); // (function , condition)
console.log(filterArr);


// Reduce Function  Using Arrow Function

let reduceArr = arr.reduce((accumulator , currentvalue) => accumulator+currentvalue);
console.log(reduceArr);

// Reduce Function Using normal Function
function sum(acc , curVal){
    return acc+curVal;
}

let redArr = arr.reduce(sum);
console.log(redArr);