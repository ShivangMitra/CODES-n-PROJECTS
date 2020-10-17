// Synchronous or blocking
// - line by line execution

// ASynchronous or non-blocking
// - line by line execution not guarenteed
// - callbacks will fire 

const fs = require("fs");
fs.readFile("dele.txt", "utf-8", (err, data)=>{
    console.log(data);
});
// this is a callback function...this function will only fire when the execution is complete [in this case reading a file]....thats why the statement below is getting executed first as the reading of file is taking so much time that it gives the statement below it time to execute

console.log("The Content of the file is");