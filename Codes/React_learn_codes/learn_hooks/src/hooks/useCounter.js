import {useState} from 'react'

function useCounter(initialCount = 0, incrementVal = 1) {
    const [count, setCount] = useState(initialCount)

    const increment = () => {
        setCount(prevCount => prevCount + incrementVal)
    }

    const decrement = () => {
        setCount(prevCount => prevCount - incrementVal)
    }

    const reset = () => {
        setCount(initialCount)
    }

    return [count, increment, decrement, reset]
}

export default useCounter
