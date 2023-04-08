let arr = [1,-4,3,-9,-1,2,-6,10];

let newArr = arr.filter(ele => ele>0);

function sum(acc,curVal){
    return acc+curVal;
}
let ans = newArr.reduce(sum);
console.log(ans);