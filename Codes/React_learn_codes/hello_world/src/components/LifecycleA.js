// import React, { Component } from 'react'
// import LifecycleB from './LifecycleB'

// class LifecycleA extends Component {

//     constructor(props) {
//         super(props)
    
//         this.state = {
//              name: "Zephyrus"
//         }

//         console.log("LifecycleA constructor")

//     }

//     static getDerivedStateFromProps(props, state){
//         console.log("LifecycleA getDerivedStateFromProps")
//         return null
//     }

//     componentDidMount(){
//         console.log("LifecycleA componentDidMount")
//     }

//     render() {
//         console.log("LifecycleA render")
//         return (
//             <div>
//                 <div>LifecycleA</div>
//                 <LifecycleB></LifecycleB>
//             </div>
//         )
//     }
// }

// export default LifecycleA


import React, { Component } from 'react'
import LifecycleB from './LifecycleB'

class LifecycleA extends Component {

    constructor(props) {
        super(props)
    
        this.state = {
             name: "Zephyrus"
        }

        console.log("LifecycleA constructor")

    }

    static getDerivedStateFromProps(props, state){
        console.log("LifecycleA getDerivedStateFromProps")
        return null
    }

    componentDidMount(){
        console.log("LifecycleA componentDidMount")
    }

    shouldComponentUpdate(){
        console.log("LifecycleA shouldComponentUpdate")
        return true
    }

    getSnapshotBeforeUpdate(){
        console.log("LifecycleA getSnapShotBeforeUpdate")
        return null
    }

    componentDidUpdate(){
        console.log("LifecycleA componentDidUpdate")
    }

    changeState = () => {
        this.setState({
            name: "Codevolution"
        })
    }

    render() {
        console.log("LifecycleA render")
        return (
            <div>
                <div>LifecycleA</div>
                <button onClick={this.changeState} >Change State</button>
                <LifecycleB></LifecycleB>
            </div>
        )
    }
}

export default LifecycleA
