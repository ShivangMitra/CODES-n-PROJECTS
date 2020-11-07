const username = document.getElementById("name")
const email = document.getElementById("email")
const mobile_num = document.getElementById("mobile_num")

let validEmail = false
let validUsername = false
let validMobile = false
let alert_msg = document.getElementById("alert")

$("#alert").hide()

username.addEventListener("blur", ()=>{
    let regex = /^[a-zA-Z]([0-9a-zA-Z]){1,9}$/
    if(regex.test(username.value))
    {
        username.className = "form-control is-valid"
        validUsername = true
    }
    else
    {
        username.className = "form-control is-invalid"
        validUsername = false
    }
})

email.addEventListener("blur", ()=>{
    let regex = /^([a-zA-Z0-9_\-\.]+)@([a-zA-Z0-9_\-\.]+)\.([a-zA-Z]){2,7}$/
    if(regex.test(email.value))
    {
        email.className = "form-control is-valid"
        validEmail = true
    }
    else
    {
        email.className = "form-control is-invalid"
        validEmail = false
    }
})

mobile_num.addEventListener("blur", ()=>{
    let regex = /^(91)?([0-9]){10}$/
    if(regex.test(mobile_num.value))
    {
        mobile_num.className = "form-control is-valid"
        validMobile = true
    }
    else
    {
        mobile_num.className = "form-control is-invalid"
        validMobile = false
    }
})

let submit = document.getElementById("submit")

submit.addEventListener("click", (e)=>{
    e.preventDefault()
    if(validEmail && validMobile && validUsername){
        alert_msg.classList.remove("alert-danger")
        alert_msg.innerHTML = `<strong>Holy guacamole!</strong> Your travel request has been successfully submitted
        <button type="button" class="close" data-dismiss="alert" aria-label="Close">
            <span aria-hidden="true">&times;</span>
        </button>`
        alert_msg.classList.add("alert-success")
        alert_msg.classList.add("show")
        $("#alert").show()
    }
    else{
        alert_msg.classList.remove("alert-success")
        alert_msg.innerHTML = `<strong>ERROR!</strong> Please enter valid details
        <button type="button" class="close" data-dismiss="alert" aria-label="Close">
            <span aria-hidden="true">&times;</span>
        </button>`
        alert_msg.classList.add("alert-danger")
        alert_msg.classList.add("show")
        $("#alert").show()
    }
})