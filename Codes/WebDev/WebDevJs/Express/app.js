// Set-ExecutionPolicy RemoteSigned
// Set-ExecutionPolicy Restricted

const express = require("express")
const path = require("path")

const app = express();
const port = 80;

// EXPRESS SPECIFIC STUFF
app.use("/static", express.static("static")) // For serving static files

// PUG SPECIFIC STUFF
app.set("view engine", "pug") // Set the template engine as pug
app.set("views", path.join(__dirname, "views")) // Set the views directory

// ENDPOINTS
app.get("/", (req, res)=>{
    const con = "Just fill in the form below"
    const params = {
        "title": 'CSGO is the best game',
        "content": con
    }
    res.status(200).render("index.pug", params)
})


app.listen(port, ()=>{
    console.log(`The application started successfully on the port ${port}`)
})