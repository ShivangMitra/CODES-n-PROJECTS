import React from 'react'
import useCounter from '../hooks/useCounter'

function CustomCounterTwo() {

    const [count, increment, decrement, reset] = useCounter(7, 3)

    return (
        <div>
            <h2>Count - {count}</h2>
            <button onClick={increment}>Increment</button>
            <button onClick={reset}>Reset</button>
            <button onClick={decrement}>Decrement</button>
        </div>
    )
}

export default CustomCounterTwo
