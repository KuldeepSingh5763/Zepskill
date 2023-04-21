let  getData = () =>{
    return new Promise((resolve, reject) =>{
        setTimeout(()=>{
            resolve ([
                {fname : `Kuldeep` , age:22},
                {fname :`Pradeep` , age: 17},
            ])
        },1000);
    });
}

function display(data){
    console.log(data);
}

let promise = getData();
console.log(promise);
promise.then(display);

// finally()

let func = () =>{
    console.log(`You have to call me , wheather your promise is resolved or rejected`);
}
let  getdata = (a,b) =>{
    return new Promise((resolve, reject) =>{
        setTimeout(()=>{
            if(a === undefined && b === undefined){
                reject("Please provide required parameters");
            }
            else{
                resolve (a+b); 
            }
        },1000);
    });
}

let promise1 = getdata(45,78);
console.log(promise1);
// .then()
promise1.then(val => console.log(val))
.catch((error) => console.log(error))   // catch()
.finally(() =>{  // .finally()
    func();
});


// or
//promise1.catch((error) =>{
//    console.log(error);
//})



// all()

const promise3 = new Promise((resolve,reject) =>{
    setTimeout(() =>{
        resolve(3);
    },3000);
}); 

const promise4 = new Promise((resolve,reject) =>{
    setTimeout(() =>{
        resolve(6);
    },3000);
});

Promise.all([promise3, promise4]).then((res) =>{ 
    console.log(res);
    console.log(res[0]);
    console.log(res[1]);
})