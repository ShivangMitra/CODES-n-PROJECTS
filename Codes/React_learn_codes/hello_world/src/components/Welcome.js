import React, {Component} from 'react'

// class Welcome extends Component{
//     render(){
//         return <h1>Aur batao {this.props.name} kya kar rahe..wahi {this.props.job}</h1>
//     }
// }

class Welcome extends Component{
    render(){
        const {name, job} = this.props
        // const {state1, state2} = this.state
        return <h1>Aur batao {name} kya kar rahe..wahi {job}</h1>
    }
}

export default Welcome