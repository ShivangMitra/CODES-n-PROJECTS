// rec snippet

import React, { Component } from 'react'

class Counter extends Component {

    // rconst snippet
    constructor(props){
        super(props)
        this.state = {
            count: 0
        }
    }

    increment(){
        // this.setState({
        //     count: this.state.count + 1
        // }, () => {console.log("callback func val: " + this.state.count)})

        this.setState( (prevState) => ({
            count: prevState.count + 1
        }), () => {console.log("callback func val: " + this.state.count)})

        console.log(this.state.count)
    }

    //react will group multiple setState calls into a single update for beeter performance
    incrementFive(){
        this.increment()
        this.increment()
        this.increment()
        this.increment()
        this.increment()
    }

    render() {
        return (
            <div>
                <h1>Count - {this.state.count}</h1>
                <button onClick={ () => this.incrementFive() }>Count++</button>
            </div>
        )
    }
}

export default Counter
