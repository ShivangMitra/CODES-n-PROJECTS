import React, {useEffect, useState} from 'react'

function HookCounterOne() {

    const [count, setCount] = useState(0)
    const [name, setName] = useState("")

    useEffect(() => {
        console.log("useEffect - Updating document title")
        document.title = `You Clicked ${count} Times`
    }, [count])

    return (
        <div>
            <input type="text" value={name} onChange={e => setName(e.target.value)}></input>
            <button onClick={() => setCount(count + 1)}>Click {count}</button>
        </div>
    )
}

export default HookCounterOne
