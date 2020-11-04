function Book(name, author, type){
    this.name = name
    this.author = author
    this.type = type
}

function Display(){

}

Display.prototype.add = function(book){
    tableBody = document.getElementById("tableBody")
    let uiString = `<tr>
                        <td>${book.name}</td>
                        <td>${book.author}</td>
                        <td>${book.type}</td>
                    </tr>
  `
  tableBody.innerHTML += uiString
}

Display.prototype.clear = function(){
    let libraryForm = document.getElementById("libraryForm")
    libraryForm.reset()
}

Display.prototype.validate = function(book){
    if (book.name.length<2 || book.author.length<2)
    {
        return false
    }
    else{
        return true
    }
}

Display.prototype.show = function(type){
    let message = document.getElementById("message")
    let mes 
    if(type == "SUCCESS"){
        mes = "Your book has been added"
        cls = "alert-success"
    }
    else{
        mes = "Invalid input, try entering a longer name"
        cls = "alert-danger"
    }
    message.innerHTML = `<div class="alert ${cls} alert-dismissible fade show" role="alert">
                            <strong>${type}</strong> ${mes}
                            <button type="button" class="close" data-dismiss="alert" aria-label="Close">
                            <span aria-hidden="true">&times;</span>
                            </button>
                        </div>`

    setTimeout(() => {
        message.innerHTML = ``
    }, 5000);
}

let libraryForm = document.getElementById("libraryForm")
libraryForm.addEventListener("submit", libraryFormSubmit)

function libraryFormSubmit(e){
    e.preventDefault()
    let name = document.getElementById("bookName").value
    let author = document.getElementById("author").value

    let fiction = document.getElementById("fiction")
    let programming = document.getElementById("programming")
    let cooking = document.getElementById("cooking")

    let type

    if (fiction.checked){
        type = fiction.value
    }
    else if (programming.checked){
        type = programming.value
    }
    else if (cooking.checked){
        type = cooking.value
    }

    let book = new Book(name, author, type)
    let display = new Display()

    if(display.validate(book))
    {
        display.add(book)
        display.clear()
        display.show("SUCCESS")
    }
    else{
        display.show("ERROR")
    }

    // console.log(book)
}