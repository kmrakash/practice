import React, { Component } from 'react';
import './App.css';
import UserInput from './UserInput/UserInput';
import UserOutput from './UserOutput/UserOutput';


class App extends Component {

  state = {
    usernames:[
      {username:'kmraksh'},
      {username:'account2'},
      {username:'account3'},
      {username:'account4'}
    ]
  };

  changeNameHandler = (event) => {
      this.setState({
        usernames:[
          {username:'kmraksh'},
          {username: event.target.value},
          {username:'account3'},
          {username:'account4'}
        ]
      })
  }

  render() {
  return (
    <div className="App">
      <UserInput change={this.changeNameHandler} />
      <UserOutput username={this.state.usernames[0].username} />
      <UserOutput username={this.state.usernames[1].username} />
      <UserOutput username={this.state.usernames[2].username} />
      <UserOutput username={this.state.usernames[3].username} />
    </div>
  );
}
}
export default App;
