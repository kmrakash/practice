import React, { Component } from 'react';
import Person from './Components/Person/Person';
import './App.css';

class App extends Component {
  render() {
    return (
      <div className="App">
       <h1>Hi , I am a react App</h1>
       <Person />
       <Person />
      </div>
    );


    // All code above is compiled to code like below
    // return React.createElement('div', {className:'App'}, React.createElement('h1', null, 'This is inside'));
  }
}

export default App;
