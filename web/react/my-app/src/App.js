import React, { useState } from 'react';
import Person from './Components/Person/Person';
import './App.css';

const app = (props) => {

  const [ personState, setPersonState] = useState({
    person:[
      {name: 'Akash'},
      {name: 'KMRAkash'}
    ]
  });

  const changeNameHandler = () => {

    setPersonState ({
      person: [
        {name: 'Laddu'},
        {name: 'LADDU'}
      ]
    });

  }

    return (
      <div className="App">
       <h1>Hi , I am a react App</h1>
       <button onClick={changeNameHandler}> Change Name </button>
       <Person name={personState.person[0].name}/>
       <Person name={personState.person[1].name} />
      </div>
    );


    // All code above is compiled to code like below
    // return React.createElement('div', {className:'App'}, React.createElement('h1', null, 'This is inside'));
  
}

export default app;
