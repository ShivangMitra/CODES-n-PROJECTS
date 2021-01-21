import React from 'react'

// with JSX
// JSX translates into the React.createElement property to convert JSX, so we have import react event if we "dont actually use it(it gets used anyway)"  

// JSX differences
// Class -> className
// for -> htmlFor
// camelCase property naming convention
// onclick -> onClick
// tabindex -> tabIndex



// const Hello = () => {
//     return(
//         <div>
//             <h1>Hello Zephyrus</h1>
//         </div>
//     )
// }

//without JSX
const Hello = () => {
    return React.createElement(
        'div',
        {
            id: 'hello',
            className: 'chintu'
        },
        React.createElement(
            'h1',
            null,
            "Hello Zephyrus"
        )
    )
}

export default Hello