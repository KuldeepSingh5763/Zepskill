function mTocm(unit){
    return unit*100;
}

function KgToGr(unit){
    return unit*1000;
}

function convert(fn,unit){
    return fn(unit);
}
let grams = convert(KgToGr , 2);
let cm = convert(mTocm , 4);

console.log("Grams =" , grams);
console.log("CM = ", cm);




// Filter Odd Number in Array using Synchronous Call Back Function


function isOdd(number){
    return number%2 != 0;
}

function filter(arr,fn){
    let ans = [];
    for(let i=0; i<arr.length; i++){
        if(isOdd(arr[i])){
            ans.push(arr[i]);
        }
    }
    return ans;
}
let arr = [1,5,4,8,75,6,9,5,2,3,5,4,2,2,3];
console.log(filter(arr,isOdd));


// function Anonymous

function filter2(arr,callback){
    let ans = [];
    for(let i=0; i<arr.length; i++){
        if(callback(arr[i])){
            ans.push(arr[i]);
        }
    }
    return ans;
}
let arr2 = [1,5,4,8,75,6,9,5,2,3,5,4,2,2,3];

let oddNumber = filter2(arr2 , function(number){
    return number%2 !=0;
});

console.log(oddNumber);
