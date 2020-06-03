import React, { Component } from 'react';
import CardList from './components/card-list/card-list.component';
import SearchBox from './components/search-box/search-box.component';
import './App.css';
import ErrorBoundary from "./components/ErrorBoundary";

class App extends Component {
  constructor(){
    super();
    this.state = {
      monsters:[],
      searchField: '',
    }
  }
  //component LifeCycle
  componentDidMount(){
    fetch('https://jsonplaceholder.typicode.com/users')  // Fetch Returns a promise
    .then(response => response.json())                 // Converts the promise into a JSON format
    .then(user => this.setState({monsters: user}))                    // Now it is converted into a usable data format for our project let's save it in monster array
  };
  

  render() {
    const { monsters, searchField } = this.state;
    const FiltredMonstered = monsters.filter(monster => 
        
      monster.name.toLowerCase().includes(searchField.toLowerCase()))

    return (
      <div className="App">
        <p> Monster Rolodex</p>
        <SearchBox 
          placeholder="Search Monster"
          handleChange={e => this.setState({searchField: e.target.value})} />
        <ErrorBoundary>
            <CardList monsters={FiltredMonstered} />
        </ErrorBoundary>
        
      </div>
    )
  }
}

export default App;
