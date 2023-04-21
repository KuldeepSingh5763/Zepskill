(function(fname){
    console.log(`Heyy I am ${fname}`);
})(`Kuldeep singh`);


let a=9;
let b=10;
let sum = (function(a , b){
    return a+b;
})(a,b);

console.log(sum);

(() => {
    console.log(`Heyy I am IIFE , Arraow Function`);
})();

