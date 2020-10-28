localStorage.setItem("name", "zeph")
localStorage.setItem("name2", "Chintu")

let impArray = ["adrak", "pyaz", "bhindi"]

localStorage.setItem("sabzi", JSON.stringify(impArray))

// localStorage.clear()

// localStorage.removeItem("name")

let name =  localStorage.getItem("name")
name =  JSON.parse(localStorage.getItem("sabzi"))
console.log(name)

sessionStorage.setItem("session_name", "zeph_session")
sessionStorage.setItem("session_name2", "Chintu_session")
sessionStorage.setItem("session_sabzi", JSON.stringify(impArray))