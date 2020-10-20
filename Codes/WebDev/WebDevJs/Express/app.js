// Set-ExecutionPolicy RemoteSigned
// Set-ExecutionPolicy Restricted

const express = require("express")
const path = require("path")
const fs = require("fs")

const app = express();
const port = 80;

// EXPRESS SPECIFIC STUFF
app.use("/static", express.static("static")) // For serving static files
app.use(express.urlencoded())

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

app.post("/", (req,res)=>{
    form = req.body

    let outputToWrite = `The Weapon is ${form.weapon}, the skin name is ${form.skin}, the required float is ${form.float}, client's favorite player is ${form.favplayer}, more about the client: ${form.more}\n`
    fs.appendFileSync("output.txt", outputToWrite)

    const params = {
        "message": "Your form has been submitted successfully"
    }
    res.status(200).render("index.pug", params)
})


app.listen(port, ()=>{
    console.log(`The application started successfully on the port ${port}`)
})