let element = document.createElement("li")

element.className = "childul"
element.id = "createdLi"
element.setAttribute("title", "myTitle")
element.innerText = "I am inserted element"

let ul = document.querySelector(".this")
ul.appendChild(element)

console.log(ul)
console.log(element)

let element2 = document.createElement("h3")
element2.id = "element2"
element2.className = "element2"
element2.appendChild(document.createTextNode("This is a heading inserted through JS"))

element.replaceWith(element2)

let myul = document.getElementById("myul")
myul.replaceChild(element, document.getElementById("mui"))

myul.removeChild(document.getElementById("rmv"))

console.log(element2.getAttribute("id"))
console.log(element2.hasAttribute("class"))
console.log(element2.hasAttribute("href"))

element2.removeAttribute("id")
console.log(element2.hasAttribute("id"))