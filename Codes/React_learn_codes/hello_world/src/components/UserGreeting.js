import React, { Component } from 'react'

export class UserGreeting extends Component {

    constructor(props) {
        super(props)
    
        this.state = {
             isLoggedIn: true
        }
    }
    

    render() {

        //SHORT CIRCUIT APPROACH
        return this.state.isLoggedIn && <div>Welcome Zephyrus</div>


        //TERNARY OPERATOR APPROACH
        // return(
        //     this.state.isLoggedIn ?
        //     <div>Welcome Zephyrus</div> :
        //     <div>Welcome Guest</div>
        // )


        //ELEMENT VARIABLE APPROACH
        // let message

        // if(this.state.isLoggedIn){
        //     message = <div>Welcome Zephyrus</div>
        // }
        // else{
        //     message = <div>Welcome Guest</div>
        // }

        // return(
        //     message
        // )


        //NORMAL IF ELSE APPROACH
        // if(this.state.isLoggedIn){
        //     return (
        //         <div>
        //             <div>Welcome Zephyrus</div>
        //         </div>
        //     )
        // }
        // else{
        //     return (
        //         <div>
        //             <div>Welcome Guest</div>
        //         </div>
        //     )
        // }


        // return (
        //     <div>
        //         <div>Welcome Guest</div>
        //         <div>Welcome Zephyrus</div>
        //     </div>
        // )
    }
}

export default UserGreeting
