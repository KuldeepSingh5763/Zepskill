// Call()
const person1 = {
    fname : `Kuldeep`,
    age : 22
}
const person2 = {
    fname : `Pradeep`,
    age : 17
}

function show(city,state){
    console.log(` first Name is ${this.fname}  and Age is =  ${this.age}  ${city}  ${state}`);
}

show.call(person1, `Fatehpur` ,`UP`);


// Apply()


const person3 = {
    fname : `Kuldeep`,
    age : 22
}
const person4 = {
    fname : `Pradeep`,
    age : 17
}

function show(city,state){
    console.log(` first Name is ${this.fname}  and Age is =  ${this.age}  ${city}  ${state}`);
}

show.call(person4, ["Jaunpur" , "MP"]);