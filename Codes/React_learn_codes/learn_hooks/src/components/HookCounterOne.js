import React, {useEffect, useState} from 'react'

function HookCounterOne() {

    const [count, setCount] = useState(0)

    useEffect(() => {
        document.title = `You Clicked ${count} Times`
    })

    return (
        <div>
            <button onClick={() => setCount(count + 1)}>Click {count}</button>
        </div>
    )
}

export default HookCounterOne
