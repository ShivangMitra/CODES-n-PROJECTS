import React, {useContext} from 'react'
import {CountContext} from '../App'

function ComponentS() {

    const countContext = useContext(CountContext)

    return (
        <div>
            Component S - {countContext.countState}
            <button onClick={() => countContext.countDispatch('increment')}>Increment</button>
            <button onClick={() => countContext.countDispatch('reset')}>Reset</button>
            <button onClick={() => countContext.countDispatch('decrement')}>Decrement</button>
        </div>
    )
}

export default ComponentS
