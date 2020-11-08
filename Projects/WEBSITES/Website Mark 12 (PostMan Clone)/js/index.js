let parametersBox = document.getElementById("parametersBox")
let requestJsonBox = document.getElementById("requestJsonBox")

parametersBox.style.display = "none"

let paramsRadio = document.getElementById("paramsRadio")

paramsRadio.addEventListener("click", ()=>{
    requestJsonBox.style.display = "none"
    parametersBox.style.display = "block"
})

let jsonRadio = document.getElementById("jsonRadio")

jsonRadio.addEventListener("click", ()=>{
    requestJsonBox.style.display = "block"
    parametersBox.style.display = "none"
})

let addParam = document.getElementById("addParam")
let num = 1
addParam.addEventListener("click", ()=>{
    num++
    let params = document.getElementById("params")
    params.innerHTML += `<div class="form-row my-2">
    <label for="url" class="col-sm-2 col-form-label">Parameter ${num}</label>
    <div class="col-md-4">
        <input type="text" class="form-control keys" id="parameterKey${num}" placeholder="Enter Parameter ${num} Key">
    </div>
    <div class="col-md-4">
        <input type="text" class="form-control values" id="parameterValue${num}" placeholder="Enter Parameter ${num} Value">
    </div>
    <button class="btn btn-primary deleteParam">-</button>
</div>`

    let deleteParam = document.getElementsByClassName("deleteParam")
    for(item of deleteParam)
    {
        item.addEventListener("click", (e)=>{
            e.target.parentElement.remove()
        })
    }

})

let submit = document.getElementById("submit")

submit.addEventListener("click", ()=>{
    document.getElementById("responsePrism").innerHTML = "Chotto matte senpai"

    let url = document.getElementById("urlField").value
    let requestType = document.querySelector("input[name='requestType']:checked").value
    let contentType = document.querySelector("input[name='contentType']:checked").value

    if(contentType == "params"){
        data = {}
        let keys = document.getElementsByClassName("keys")
        let values = document.getElementsByClassName("values")
        for(let k=0; k<keys.length;k++)
        {
            data[keys[k].value] = values[k].value
        }
        data = JSON.stringify(data)
    }
    else
    {
        data = document.getElementById("requestJsonText").value
    }

    if(requestType == "GET")
    {
        fetch(url,{
            method:"get"
        })
        .then(response=>response.text())
        .then(text=>{
            document.getElementById("responsePrism").innerHTML = text
            Prism.highlightAll();
        })
    }
    else{
        fetch(url, {
            method: 'POST', 
            body: data,
            headers: {
                "Content-type": "application/json; charset=UTF-8"
              }  
        })
        .then(response=> response.text())
        .then((text) =>{
            // document.getElementById('responseJsonText').value = text;
            document.getElementById('responsePrism').innerHTML = text;
            Prism.highlightAll();
        });
    }
})