// String Array

const words=[`Hello`,`I`,`am`,`Kuldeep`];
console.log(words);

// Number Array

const numbers=[1,3,4.6,7,54,4,4,3,];
console.log(numbers);

// Mixed Array

const mixedArray=[`kuldeep`,23,`fatehpur`];
console.log(mixedArray);

// Array is treated like an object

const myArray =[
    { 'Name2' :`Kuldeep`},
    [1,4,7,2,6,9],
    function data(){
        console.log(`Hello world`);
    }

]
console.log(myArray);
myArray[2]();

let Arr=[6,7,8,9,0,6,`Kuldeep`,`Hello`,5];
// Accessing Element with index number
console.log(Arr[8]);
console.log(Arr[3]);
console.log(Arr[12]);
console.log(Arr[13]);

// add element in array from last
Arr.push(`Hyy`);
console.log(Arr);

// add element in array from first
Arr.unshift(`good morning`);
console.log(Arr);


// remove element from last in array
Arr.pop();
console.log(Arr);

// Remove first element in an array 
Arr.shift();
console.log(Arr);

let a1=[7,9,7,0,9,3];
let a2=[1,2,3,1.2,3];
let a3=['kuldeep','hello'];
let a4=a1.concat(a2,a3);
console.log(a4);
