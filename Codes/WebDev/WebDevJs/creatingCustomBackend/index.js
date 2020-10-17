const http = require("http");
const fs = require("fs");

const hostname = '127.0.0.1';
const port = 3000;

const home = fs.readFileSync("./index.html")
const about = fs.readFileSync("./about.html")
const contacts = fs.readFileSync("./contacts.html")
const services = fs.readFileSync("./services.html")

const server = http.createServer((req, res)=>{
    let url = req.url;

    res.statusCode = 200;
    res.setHeader('Content-Type', 'text/html');
    if(url == "/")
    res.end(home);
    else if(url == "/about")
    res.end(about);
    else if(url == "/contacts")
    res.end(contacts);
    else if(url == "/services")
    res.end(services);
    else
    res.statusCode = 404;
    res.end("<h1>404 NOT FOUND</h1>");
})

server.listen(port, hostname, () => {
    console.log(`Server running at http://${hostname}:${port}/`);
  });