let divElm = document.createElement("div")
if(localStorage.getItem("key") != null)
{
    divElm.innerText = localStorage.getItem("key")
}
else
{
    divElm.innerText = "This is my element click to edit"
}
divElm.setAttribute("id", "elm")
divElm.setAttribute("class", "elm")
divElm.setAttribute("style", "border: 2px solid black; margin: 25px; padding: 20px; display: inline-block; border-radius: 5px;")

let container = document.querySelector(".container")
let first = document.getElementById("mychild1")

container.insertBefore(divElm, first)

divElm.addEventListener("click", function(e){
    divElm.contentEditable = "true"
})

divElm.addEventListener("blur", function(){
    localStorage.setItem("key", divElm.innerText)
})