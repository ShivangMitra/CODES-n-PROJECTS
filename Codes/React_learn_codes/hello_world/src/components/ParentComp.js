import React, { Component } from 'react'
// import React, { PureComponent } from 'react'
import MemoComp from './MemoComp'
// import PureComp from './PureComp'
// import RegComp from './RegComp'

class ParentComp extends Component {
// class ParentComp extends PureComponent {

    constructor(props) {
        super(props)
    
        this.state = {
             name: "Shivang"
        }
    }
    
    componentDidMount(){
        setInterval(() => {
            this.setState({
                name: "Shivang"
            })
        } , 2000)
    }

    render() {
        console.log("*************************ParentComp render*************************")
        return (
            <div>
                Parent Component
                {/* <RegComp name={this.state.name}></RegComp> */}
                {/* <PureComp name={this.state.name}></PureComp> */}
                <MemoComp name={this.state.name}></MemoComp>
            </div>
        )
    }
}

export default ParentComp
