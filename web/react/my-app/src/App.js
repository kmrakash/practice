import React, { Component } from 'react';
import Person from './Components/Person/Person';
import './App.css';

class App extends Component{

  state = {
    persons: [
      {name: 'Max', age:20},
      {name: 'Jane', age:22},
      {name: 'Doe', age:10}
    ],
    show:false
  }

  ToggleHandler = () => {
    let ToShow = this.state.show;
    this.setState({
      show : !ToShow
    })

  }

  render(){

      let person = null;

      if(this.state.show) {
        person = (
          <div>
            <Person name={this.state.persons[0].name} age={this.state.persons[0].age}/>
            <Person name={this.state.persons[1].name} age={this.state.persons[1].age}/>
        </div>
        )
      }

    return (
      <div className="App">
       <h1>Hi , I am a react App</h1>
       <button onClick={this.ToggleHandler}> Toggle </button>
        {person}
      </div>
    );
    }

    // All code above is compiled to code like below
    // return React.createElement('div', {className:'App'}, React.createElement('h1', null, 'This is inside'));
  
}

export default App;
