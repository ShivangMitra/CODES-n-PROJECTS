import React, {useContext} from 'react'
import ComponentF from './ComponentF'
import {UserContext, ChannelContext} from '../App'

function ComponentE() {

    const user = useContext(UserContext)
    const channel = useContext(ChannelContext)

    return (
        <div>
            <ComponentF></ComponentF>
            <div>Hook user context vals - {user} {channel}</div>
        </div>
    )
}

export default ComponentE
