console.log("this is an attached script");

function greet(name,greetText="greetings my friend")
{
    console.log(greetText+" "+name);
    console.log(name+" chintu hai");
}
let geeting="ohaio gozaimus"
let name1="qwrg";
let name2="qewgeth";
let name3="wegawrgwrg";
greet(name1,geeting);
greet(name2);
greet(name3,geeting);

function sum(a,b,c)
{
    let s=a+b+c;
    return s;
}

let a=45,b=78,c=90;
let add=sum(a,b,c);
console.log(add);