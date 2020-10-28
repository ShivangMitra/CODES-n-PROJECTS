// // mouseover
// document.getElementById("heading").addEventListener("click", function(e){ //e->event object
//     let variable
//     console.log("You have clicked the heading")
//     variable = e.target
//     variable = Array.from(e.target.classList)
//     variable = e.offsetX
//     variable = e.offsetY
//     variable = e.clientX
//     variable = e.clientY
//     console.log(variable)
//     // location.href = "https://youtube.com"
// })

// let btn = document.getElementById("btn")

// btn.addEventListener("click", func1) //dblclick, mousedown

// function func1(e){
//     console.log("Thanks", e)
//     e.preventDefault()
// }

// document.querySelector(".no").addEventListener("mouseenter", function(){ // mouseleave, mousemove
//     console.log("You entered no")
// })

document.querySelector(".container").addEventListener("mousemove", function(e){
    document.body.style.backgroundColor = `rgb(${e.offsetX}, ${e.offsetY}, 154)`
})