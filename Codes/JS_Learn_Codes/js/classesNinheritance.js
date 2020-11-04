class Employee{
    constructor(name, experience, division){
    this.name = name
    this.experience = experience
    this.division =  division
    }

    slogan(){
        return `I am ${this.name} and this company is the best`
    }

    static add(a ,b){
        return a + b
    }
}

// harry = new Employee("harry", 65, "division")
// console.log(harry)

console.log(Employee.add(34, 5))

class Programmer extends Employee{
    constructor(name, experience, division, language){
        super(name, experience, division)
        this.language = language
    }

    favoriteLanguage(){
        if(this.language == "python"){
            return "Python"
        }
        else{
            return "JavaScript"
        }
    }

    static multiply(a, b){
        return a * b
    }
}

chintu = new Programmer("Chintu", 24, "programmer", "Python")

console.log(chintu)
console.log(chintu.favoriteLanguage())
console.log(Programmer.multiply(3, 4))