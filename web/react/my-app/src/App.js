import React, { Component } from 'react';
import Person from './Components/Person/Person';
import './App.css';

class App extends Component{

  state = {
    persons: [
      {name: 'Max', age:20, id:'abc123'},
      {name: 'Jane', age:22, id:'abc129'},
      {name: 'Doe', age:10, id:'abd123'}
    ],
    show:false
  }

  ToggleHandler = () => {
    let ToShow = this.state.show;
    this.setState({
      show : !ToShow
    })

  }

  DeleteHandler = (index) => {
      let test = this.state.persons;
      test.splice(index, 1);
    this.setState({persons:test})
  }


  render(){

    const styles ={
      backgroundColor: 'white',
      border: '1px solid blue',
      padding: '8px',
      cursor:'pointer'
    }

      let person = null;

      if(this.state.show) {
        person = (
         this.state.persons.map((person, index)=> <Person 
                                                      name={person.name} 
                                                      age={person.age} 
                                                      key={person.id} 
                                                      click={() => this.DeleteHandler(index)} />
         )
        )
      }

    return (
      <div className="App">
       <h1>Hi , I am a react App</h1>
       <button style={styles} onClick={this.ToggleHandler}> Toggle </button>
        {person}
      </div>
    );
    }

    // All code above is compiled to code like below
    // return React.createElement('div', {className:'App'}, React.createElement('h1', null, 'This is inside'));
  
}

export default App;
