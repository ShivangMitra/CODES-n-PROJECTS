const students = [
    {name: "harry", subject: "JavaScript"},
    {name: "rohan", subject: "Machine Learning"}
]

function enrollStudents(student, callback){
    setTimeout(() => {
        students.push(student)
        callback();
    }, 3000);
}

function getStudent(){
    setTimeout(() => {
        let str = ""
        students.forEach(function(student){
            str += `<li>${student.name}</li>`
        })
        document.getElementById("students").innerHTML = str
    }, 1000);
}

let newStudent = {name: "Sunny", subject:"Python"}
enrollStudents(newStudent, getStudent)
// getStudent()