let myBtn = document.getElementById("myBtn")
let postBtn = document.getElementById("postBtn")
let content = document.getElementById("content")

function getData(){
    url = "https://api.github.com/users"
    //fetch api is asynchronous so it will run in background
    fetch(url).then((response)=>{
        // console.log(response.text)
        // return response.text()
        return response.json()
    }).then((data)=>{
        console.log(data)
    })
}

function postData(){
    url = "https://reqres.in/api/users"
    data = {
        "name": "morpheus",
        "job": "leader"
    }

    params = {
        method: "post",
        headers: {
            "Content-type": "application/json"
        },
        body: JSON.stringify(data)
    }

    fetch(url, params).then(response => response.json()).then(data => console.log(data))
}

myBtn.addEventListener("click", getData)
postBtn.addEventListener("click", postData)