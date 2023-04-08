let arr = [1,2,3,4,5,6,7];

// Polyfill For Map 

function double(x){
    return 2*x;
}

Array.prototype.Mymap = function(callback){
    let newArr =[];
    for(let i=0; i< arr.length ; i++){
        newArr.push(callback(arr[i]));
    }
    return newArr;
}
let newArr = arr.Mymap(double);
console.log(newArr);


// Polyfill For Filter 

function isOdd(x){
    return x%2 != 0;
}

Array.prototype.Myfilter = function(cb){
    let ans = [];
    for(let i=0;i<arr.length; i++){
        if(cb(arr[i])){
            ans.push(arr[i]);
        }
    }
    return ans;
}

console.log(arr.Myfilter(isOdd));
