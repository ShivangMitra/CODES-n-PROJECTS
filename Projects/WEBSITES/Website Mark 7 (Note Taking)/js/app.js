let addBtn = document.getElementById("addBtn")

let notes = localStorage.getItem("notes")
if (notes == null) {
    notesObj = []
}
else {
    notesObj = JSON.parse(notes)
}
showNotes()

addBtn.addEventListener("click", function (e) {
    let addTxt = document.getElementById("addTxt")
    notesObj.push(addTxt.value)
    localStorage.setItem("notes", JSON.stringify(notesObj))
    addTxt.value = ""
    showNotes()
})

function showNotes() {
    let html = ""
    notesObj.forEach(function (element, index) {
        html += `
        <div class="noteCard my-2 mx-4 card" style="width: 18rem;">
            <div class="card-body">
                <h5 class="card-title">Note ${index + 1}</h5>
                    <p class="card-text">${element}</p>
                    <button id="${index}" onclick="deleteNote(this.id)" class="btn btn-primary">Delete Note</button>
                </div>
            </div>
        </div>
        `
    });

    let notesElm = document.getElementById("notes")
    if (notesObj.length != 0) {
        notesElm.innerHTML = html
    }
    else{
        notesElm.innerText = "No Notes to Show"
    }
}

function deleteNote(index){
    notesObj.splice(index, 1)
    localStorage.setItem("notes", JSON.stringify(notesObj))
    showNotes()
}



let search = document.getElementById("searchTxt")
search.addEventListener("input", function(){
    let noteCards = document.getElementsByClassName("noteCard")
    Array.from(noteCards).forEach(function(element){
        if(element.getElementsByTagName("p")[0].innerText.toLowerCase().includes(search.value.toLowerCase()))
        {
            element.style.display = "block"
        }
        else{
            element.style.display = "none"
        }
    })
})
