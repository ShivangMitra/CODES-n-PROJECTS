// Node server which will hanlde socket io connections
const io = require("socket.io")(8000)

const user = {}

// io.on is an instance of socket.io which will listen to various socket connections
io.on("connection", socket =>{
    // socket.on will decide what will happen to a perticular connection when a connection happens
    // socket.on is accepting a event(here if we get a user joined event then we will set name inside users)
    socket.on("new-user-joined", name =>{
        user[socket.id] = name
        // leaving the out person who joined this will emit the event to all the rest to the people
        socket.broadcast.emit("user-joined", name)
    })

    socket.on("send", message =>{
        socket.broadcast.emit("receive", {message: message, name: user[socket.id]})
    })

    socket.on("disconnect", message =>{
        socket.broadcast.emit("left", user[socket.id])
        delete user[socket.id]
    })
})