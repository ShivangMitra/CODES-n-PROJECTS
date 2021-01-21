import React, { Component } from 'react'

class EventBind extends Component{

    constructor(props){
        super(props)

        this.state = {
            message: 'Hello'
        }

        // this.clickHandler = this.clickHandler.bind(this)
    }

    // clickHandler(){
    //     this.setState({
    //         message: 'Goodbye!!'
    //     })
    // }

    clickHandler = () => {
        this.setState({
            message: "Goodbye!!"
        })
    }

    render(){
        return (
            <div>
                <h1>{this.state.message}</h1>
                {/* <button onClick={ this.clickHandler } >Leave</button>   this does not work as this is undefined until it is binded in constructor */}

                {/* <button onClick={ this.clickHandler.bind(this) } >Leave</button>   the template renders everytime the handler is called, so a new event handler is created everytime it is called, so it is not effecient to use this method */}
                {/* <button onClick={ () => this.clickHandler() } >Leave</button> */}
                {/* <button onClick={ this.clickHandler } >Leave</button>  after binding in the constructor*/}

                {/* class property as arrow functions */}
                <button onClick={ this.clickHandler } >Leave</button>
            </div>
        )
    }
}

export default EventBind