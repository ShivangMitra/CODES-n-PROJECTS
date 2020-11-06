async function chintu(){
    console.log("inside chintu func")
    const response = await fetch("https://api.github.com/users")
    console.log("before response")
    const users = await response.json()
    console.log("users resolved")
    return users
    // return "Chintu"
}

console.log("before calling chintu function")
let a = chintu()
console.log("after calling chintu function")
console.log(a)
a.then(data => console.log(data))
console.log("last line of js file")