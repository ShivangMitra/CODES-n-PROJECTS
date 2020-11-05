let fetchBtn = document.getElementById("fetchBtn")
fetchBtn.addEventListener("click", buttonClickHandler)

function buttonClickHandler(){
    const xhr = new XMLHttpRequest()

    // xhr.open("GET", "https://jsonplaceholder.typicode.com/todos/1", true)

    xhr.open("POST", "http://dummy.restapiexample.com/api/v1/create", true)
    // xhr.getResponseHeader("Content-type", "application/x-www-form-urlencoded")
    xhr.getResponseHeader("Content-type", "application/json")

    xhr.onprogress = function(){
        console.log("On progress")
    }

    // xhr.onreadystatechange = function(){
    //     console.log("ready state is ", xhr.readyState)
    // }

    xhr.onload = function(){
        if(this.status === 200){
            console.log(this.responseText)
        }
        else{
            console.error("Some error occured")
        }
    }

    // xhr.send()

    // params = "name=test&salary=123&age=23"
    params = `{"name":"test","salary":"123","age":"23"}`
    xhr.send(params)
}


let popBtn = document.getElementById("popBtn")
popBtn.addEventListener("click", popHandler)

function popHandler(){
    const xhr = new XMLHttpRequest()

    xhr.open("GET", "http://dummy.restapiexample.com/api/v1/employees", true)
    
    xhr.onload = function(){
        if(this.status === 200){
            let obj = JSON.parse(this.responseText)
            console.log(obj)

            let list = document.getElementById("list")
            str = ""
            for(key in obj.data)
            {
                str += `<li>${obj.data[key].employee_name}</li>`
            }

            list.innerHTML = str
        }
        else{
            console.error("Some error occured")
        }
    }

    xhr.send()
}