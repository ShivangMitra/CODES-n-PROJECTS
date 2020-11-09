const imgBox = document.querySelector(".imgBox")
const whiteBoxes = document.getElementsByClassName("whiteBox")

imgBox.addEventListener("dragstart", (e)=>{
    e.target.className += " hold"
    setTimeout(()=>{
        e.target.className = "hide"
    }, 0) //timeout zero means that run this method after everything is executed
})

imgBox.addEventListener("dragend", (e)=>{
    e.target.className = "imgBox"
})

for(whiteBox of whiteBoxes){
    whiteBox.addEventListener("dragover", (e)=>{
        e.preventDefault() //by default you cannot drop elements
    })
    whiteBox.addEventListener("dragleave", (e)=>{
        e.target.className = "whiteBox"
    })
    whiteBox.addEventListener("dragenter", (e)=>{
        e.target.className += " drop_area"
    })
    whiteBox.addEventListener("drop", (e)=>{
        e.target.append(imgBox)
        e.target.className = "whiteBox"
    })
}