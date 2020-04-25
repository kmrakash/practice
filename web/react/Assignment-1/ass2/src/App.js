import React, { Component } from 'react';
import Validator from './ValidatorComponent/Validator';
import './App.css';
import Char from './Char/Char';

class App extends Component {

  state = {
    name:'',
  }

  changeNameHandler = (event) => {
    
    this.setState({
     
      name:event.target.value
    })
  }

  charHandler = ( index ) => {
    const text = this.state.name.split('');
    text.splice(index, 1);

    const updatedText = text.join('');
    this.setState({
      name:updatedText
    })
  }

  render(){

    let charlist = this.state.name.split('').map((ch, index)=>{
      return <Char 
      character={ch} 
      key={index} 
      clicked={() => this.charHandler(index)}
      />;
    })

  return (
    <div className="App">
     <p>Happy Hacking !!</p>

     <input type="text" value={this.state.name} onChange={this.changeNameHandler}/>
        <p>Text Length: {this.state.name.length}</p>
        <Validator length={this.state.name.length} />
        {charlist}
    </div>
  );
}
}
export default App;
