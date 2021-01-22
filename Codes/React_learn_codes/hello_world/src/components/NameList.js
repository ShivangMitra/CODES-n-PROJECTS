import React from 'react'
// import Person from './Person'

function NameList() {

    const names = ['Kotli', "Potli", "Chotli", "Kotli"]

    // const persons = [
    //     {
    //         id:1,
    //         name: "Chintu",
    //         age: 20,
    //         skill: "Java"
    //     },
    //     {
    //         id:2,
    //         name: "Pintu",
    //         age: 21,
    //         skill: "JS"
    //     },
    //     {
    //         id:3,
    //         name: "Kintu",
    //         age: 22,
    //         skill: "Python"
    //     },
    //     {
    //         id:4,
    //         name: "Hintu",
    //         age: 23,
    //         skill: "C++"
    //     }
    // ]
    // const personsList = persons.map(person => <Person key={person.id} person={person}></Person>)
    const nameList = names.map( (name, index) => <h2 key={index} >{index}-{name}</h2>)

    return (
        <div>
            {/* <h2>{names[0]}</h2>
            <h2>{names[1]}</h2>
            <h2>{names[2]}</h2>
            <h2>{names[3]}</h2> */}
            {/* {
                personsList
            } */}
            {
                nameList
            }
        </div>
    )
}

export default NameList
