function GeneralCar(givenName, givenSpeed){
    this.name = givenName
    this.topSpeed = givenSpeed
    this.run = function(){
        console.log(`${this.name} is running at ${this.topSpeed}`)
    }
}

car1 = new GeneralCar("Nissan", 200)
console.log(car1.name)
console.log(car1.topSpeed)
car1.run()


const proto = {
    slogan: function(){
        return `This company is the best`
    },
    changeName: function(newName){
        this.name = newName
    }
}

// const harry = Object.create(proto)
// harry.name = "Harry"
// harry.role = "Programmer"
// harry.changeName("Harry2")


const harry = Object.create(proto, {
    name: {value: "harry", writable: true},
    role: {value: "Programmer"}
})
harry.changeName("Harry2")

console.log(harry)



function Employee(name, salary, experience){
    this.name = name
    this.salary = salary
    this.experience = experience
}

Employee.prototype.slogan = function(){
    return `Ye hai apna slogan ${this.name}`
}

let zeph = new Employee("Zephyrus", 69696969, 20)

console.log(zeph)
console.log(zeph.slogan())

function Programmer(name, salary, experience, language){
    Employee.call(this, name, salary, experience)
    this.language = language
}

Programmer.prototype = Object.create(Employee.prototype)

Programmer.prototype.constructor = Programmer

let rohan = new Programmer("Rohan", 69, 1, "JavaScript")
console.log(rohan)
console.log(rohan.language)
console.log(rohan.slogan())