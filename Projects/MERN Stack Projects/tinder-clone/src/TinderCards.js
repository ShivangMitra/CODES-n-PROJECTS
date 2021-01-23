// import { SwipeableDrawer } from '@material-ui/core'
import React, { useState } from 'react'
import TinderCard from 'react-tinder-card'
import './TinderCards.css'

function TinderCards() {

    // const [people, setPeople] = useState([
    const [people] = useState([
        {
            name: 'Elon Musk',
            url: 'https://img.etimg.com/thumb/width-640,height-480,imgsize-601228,resizemode-1,msid-80417419/industry/telecom/telecom-news/elon-musk-targets-telecom-for-next-disruption-with-starlink-internet/elon-musk-is-the-worlds-second-richest-person-with-an-estimated-net-worth-of-158-billion-.jpg'
        },
        {
            name: 'Jeff Bezoz',
            url: 'https://media.beam.usnews.com/b0/dc/a8c09faa43868dd7e51ec254b099/191025-bezos-editorial.jpg'
        },
    ])

    const swiped = (direction, nameToDelete) => {
        console.log("removing: " + nameToDelete)
        // setLastDirection(direction)
    }

    const outOfFrame = (name) => {
        console.log(name + " left the screen")
    }

    return (
        <div className="tinderCards" >
            <div className="tinderCards__cardContainer" >
                {people.map(person => (
                    <TinderCard 
                    className="swipe"
                    key={person.name}
                    preventSwipe={["up", "down"]}
                    onSwipe={ (dir) => swiped(dir, person.name) }
                    onCardLeftScreen={ () => outOfFrame(person.name) } >

                        <div style={ { backgroundImage: `url(${person.url})` } } className="card" >
                            <h3>{person.name}</h3>
                        </div>

                    </TinderCard>
                ))}
            </div>
        </div>
    )
}

export default TinderCards
