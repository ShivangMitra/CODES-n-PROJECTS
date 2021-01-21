import React from 'react'

// function Greet() { 
//     return <h1>Hello Shivang</h1>
// }

// This is a named export so we have to import it using the exact name of the function within { Greet }
// export const Greet = () => {
//     return <h1>Hello Shivang</h1>
// }

// const Greet = props => {
//     console.log(props)
//     return (
//     <div>
//         <h1>Hello {props.name}</h1>
//         <p>Job: {props.job}</p>
//         {props.children}
//         </div>
//     )
// }


// DESTRUCTURING
// const Greet = ({name, job}) => {
//     // console.log(props)
//     return (
//     <div>
//         <h1>Hello {name}</h1>
//         <p>Job: {job}</p>
//         </div>
//     )
// }
const Greet = props => {
    // console.log(props)
    const {name, job} = props
    return (
    <div>
        <h1>Hello {name}</h1>
        <p>Job: {job}</p>
        {props.children}
    </div>
    )
}

export default Greet