// let country='India';
// let population=1.40;
// let island= false;
// let language
// let null_variable=null;
// let bigInt_variable=654
// let object_variable={
//     fisrtName : "Kuldeep",
//     lastName : "Singh",
// };
// const myName="Kuldeep singh";
// myName="Aditya singh";
// console.log(myName);
// console.log(country);
// console.log(population);
// console.log(island);
// console.log(language);
// console.log(null_variable);
// console.log(bigInt_variable);
// console.log(object_variable);
// console.log( typeof country);
// console.log( typeof population);
// console.log( typeof island);
// console.log( typeof language);
// console.log( typeof null_variable);
// console.log( typeof bigInt_variable);
// console.log( typeof object_variable);



// var myName="Kuldeep";
// console.log(myName);
// myName="Kuldeep singh";
// console.log(myName);

// let num=3;
// if (num > 2)
// {
//     let flag="Say Hello"
//     console.log(flag);
// }
// console.log(flag);//Show RefrenceError

// let Mark_mass1=78;
// let Mark_hieght1=1.69;
// let Mark_mass2=95;
// let Mark_hieght2=1.88;
// let John_mass1=92;
// let John_hieght1=1.95;
// let John_mass2=85;
// let John_hieght2=1.76;
// Mark_BMI1=Mark_mass1/(Mark_hieght1**2);
// Mark_BMI2=Mark_mass2/(Mark_hieght2**2);
// John_BMI1=John_mass1/(John_hieght1**2);
// John_BMI2= John_mass2/(John_hieght2**2);
// console.log("Mark_BMI1 = ", Mark_BMI1);
// console.log("Mark_BMI2 = ", Mark_BMI2);
// console.log("John_BMI1 = ", John_BMI1);
// console.log("John_BMI2 = ", John_BMI2);

//==========================================
//  Ques 2

let country1={
    countryName : "India",
    popu :  140,
    lan : "Hindi",
    isLand :true,
};
let country2={
    countryName : "Finland",
    popu :  50,
    lan : "English",
    isLand : false,
};
let country3={
    countryName : "Portugal",
    popu :  50,
    lan : "Portuguese",
    isLand : true,
};
if (country1.popu < 50 && country1.lan==="English" && !country1.isLand){
    console.log(country1.countryName, " is the Perfect Country");
}
else{
    console.log(country1.countryName, "is not the Perfect Country");
}

if (country2.popu <= 50 && country2.lan==="English" && !country2.isLand){
    console.log(country2.countryName, " is the Perfect Country");
}
else{
    console.log(country2.countryName, " is not the Perfect Country");
}

if (country3.popu < 50 && country3.lan==="English" && !country3.isLand){
    console.log(country3.countryName, "is the Perfect Country");
}
else{
    console.log(country3.countryName, " is not the Perfect Country");
}


//================================================
//   Ques 1

let a=7;
let b=9;
let c=4;
if (a>b){
    if (a>c){
        console.log(a," A Is Largest");
    }
    else{
        console.log(c, "C is Largest");
    }
}
else{
    if (b>c){
        console.log(b,"B is Largest");
    }
    else{
        console.log(c,"C is Largest");
    }
}


//=====================================
//  Ques 2


let range={
    highest: 500,
    lowest:100,
};
let num=250;
if (range.lowest < num < range.highest){
    console.log("Number is Present in range");
}
else{
    console.log("Number is not present in range");
}

// Turnary Operator Or Conditional Operator 

(range.lowest < num < range.highest ) ? console.log("Number is lying in Range") : console.log("Not in Range");

//====================================
//   Ques 3

let num1=67;
if (num1%2==0){
    console.log("Number is Even");
}
else{
    console.log("Number is Odd");
}

// Turnary Operator

num1%2===0 ? console.log("Number is Even") : console.log("Number is Odd"); 


// Use of Backtics sign

let myName=`My name is "Kuldeep Singh".`;

let para1=`heyy!
I am Kuldeep
singh.`;

console.log(myName);
console.log(para1);


// String interpolation  


let myFirstName=`Kuldeep`;
let myLastName=`Singh`;

let fullName=`Heyy! I am ${myFirstName} ${myLastName}`;//string interpolation

console.log(fullName);

// Switch case

let myNum=4;
switch(myNum){
    case 1:
        console.log("Number is 1");
        break;
    case 2:
        console.log("Number is 2");
        break;
    case 5:
        console.log("number is 5");
        break;
    default:
        console.log("The number in not here ");
}

// Assignment

let dayName=`Saturday`;

switch(dayName){
    case `Monday`:
        console.log(`today is Monday`);
        break;
    case `Tuesday`:
        console.log(`today is Tuesday`);
        break;
    case `Wednesday`:
        console.log(`today is Wednesday`);
        break;
    case `Thursday`:
        console.log(`today is Thursday`);
        break;
    case `Friday`:
        console.log(`today is Friday`);
        break;
    case `Saturday`:
        console.log(`today is Saturday`);
        break;
    case `Sunday`:
        console.log(`today is Sunday`);
        break;
}

// Assignment 2

let language=`chinese`;

switch(language){
    case `chinese`:
        console.log(`Most number of native speakers!`);
        break;
    case `spanish`:
        console.log(`2nd place in number of native speakers`);
        break;
    case `english`:
        console.log(`3rd place`);
        break;
    case `hindi`:
        console.log(`4th place`);
        break;
    case `arabic`:
        console.log(`5th most spoken language`);
        break;
    default:
        console.log(`All language to`);
}






// FUNCTION  =======================

//   functionName(parameter1,parameter2,.....){
//   block of code
//   }


//Ques 1 - Addition, a and b

function totalSum(a,b){
    console.log(a+b);
}
totalSum(10,30);

// OR

function totalSum(a,b){
    return (a+b);
}
console.log("Sum = ",totalSum(20,40));

// Ques 2 - Find Grade

function findGrade(per){
    if (per >= 90){
        console.log("Grade A");
    }
    else if(90 < per >= 80){
        console.log("Grade B");
    }
    else if(80 < per >= 70){
        console.log("Grade C");
    }
    else if(70 < per >= 60){
        console.log("Grade D");
    }
    else if(60 < per >= 40){
        console.log("Grade E");
    }
    else if(per < 40){
        console.log("Grade F");
    }

}
function findTotal(phy,che,bio,hin,com){
    return (phy+che+bio+hin+com);
}
function findPercentage(total){
    return (total/5);
}
let phy=98 , che=90, bio=78, hin=87, com=99;
sum1=findTotal(phy,che,bio,hin,com);
console.log("Total Marks = ",sum1);
per=findPercentage(sum1);
console.log("Percentage = ",per);
findGrade(per);

// Ques 2 - Largest Number

function findLargest(a,b,c){
    if (a>b){
        if (a>c){
            console.log(a," A Is Largest");
        }
        else{
            console.log(c, "C is Largest");
        }
    }
    else{
        if (b>c){
            console.log(b,"B is Largest");
        }
        else{
            console.log(c,"C is Largest");
        }
    }
}
findLargest(10,15,78);

// Function Expression =================================


// Ques 1 Convert celsius to fahrenheit

let fahren = function(cels){
    f = cels * (9/5) + 32;
    console.log(cels,"celcius =  ",f,"fahrenhit");
}
fahren(37);

// Ques 2 Area of rectangle

let area1 = function(l,w){
    return l*w;
};
console.log("Area of Rectangle",area1(7,9));

// Ques 3 Area and parameter of circle

let areaOfCircle = function(r){
    a=Math.PI*r*r;
    console.log("Area of Circle",a);
    p=2*Math.PI*r;
    console.log("Parameter of Circle",p);
};

areaOfCircle(5.4);


// Arrow Function ============================

// Ques 1 Present in given range or not

let findInRange = (num)=>{
    highest = 500,
    lowest = 100;

    if (range.lowest < num < range.highest){
    console.log("Number is Present in range");
    }
    else{
    console.log("Number is not present in range");
    }
};
findInRange(234);


// Ques 2 Find Largest With Arrow Function

let findLargestArrow = (a,b,c)=>{
    if (a>b){
        if (a>c){
            console.log(a," A Is Largest");
        }
        else{
            console.log(c, "C is Largest");
        }
    }
    else{
        if (b>c){
            console.log(b,"B is Largest");
        }
        else{
            console.log(c,"C is Largest");
        }
    }
}
findLargestArrow(45,67,99);

// Ques 3 Odd Or Even

let oddEven =(num)=>{
    if (num%2==0){
        console.log("Number is Even");
    }
    else{
        console.log("Number is Odd");
    }
};
oddEven(25);

// Ques 4 Square of number

let findSquare= (num)=>{
    sq = num ** 2;
    console.log("Square of Number",sq);
};
findSquare(5);

// Ques 5 Check winner

let calAverage = (score1,score2,score3)=>{
    let avg = (score1+score2+score3)/3; 
    return avg;
};
let checkWinner = (avDol,avKoa)=>{
    if (avDol>= 2*avKoa){
        console.log("Winner is Dolphins Team");
    }
    else if ( avKoa >= 2*avDol){
        console.log("Winner is Koalas Team");
    }
    else{
        console.log("No one Winner");
    }
}
let avgDolphin = calAverage(85,54,41);
let avgKoalas = calAverage(23,34,27);

console.log("Average of Dolphins Team",avgDolphin);
console.log("Average of Koalas Team",avgKoalas);

checkWinner(avgDolphin,avgKoalas);


// Ques 6

let greet = (name) =>{
    console.log(`Hyy! I am `,name);
}
greet(`Kuldeep`);

// Ques 7  Solve with Function Expression

let counterFun = function(counter){
    if (counter > 100){
        counter = 0;
    }
    else{
        counter++;
    }
    return counter;
}

console.log(counterFun(200));

// Above Ques Solve with Arrow Function

let counterFun1 = (counter) => {
    if (counter > 100){
        counter = 0;
    }
    else{
        counter++;
    }
    return counter;
}
console.log(counterFun1(78));

// Ques 8 greet with fullName

let greetByFullName = (firstName,lastName) => console.log(`Hyy I am ${firstName} ${lastName}`);
greetByFullName(`KULDEEP`,`SINGH`);


// Ques 9 

let kgTolbs = (weight) =>{
    let lbs = 2.2 * weight;
    console.log(lbs);
    if (lbs > 150){
        return `obese`;
    }
    else if( (lbs >= 100) && (lbs <= 150) ){
        return `You are Ok`;
    }
    else{
        return `Underweight`;
    }
}
console.log(kgTolbs(46));

// Ques 10  IsEven 

let isEven = (num) => (num%2==0);
console.log(isEven(20));

