let element = document.getElementById("mychild1")
console.log(element)
console.log(element.className)
console.log(element.childNodes)
console.log(element.parentNode)

element.style.color = "red"
element.innerText = "laal"
element.innerHTML = "<b>laal</b>"


let sel = document.querySelector("#mychild1");
sel = document.querySelector(".child");
sel = document.querySelector("h1");
sel = document.querySelector("div");
sel.style.color = "green"
// console.log(sel)




let elems = document.getElementsByClassName("child")
elems = document.getElementsByTagName("div")
console.log(elems)