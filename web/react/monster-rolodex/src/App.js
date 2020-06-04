import React, { Component } from 'react';
import CardList from './components/card-list/card-list.component';
import SearchBox from './components/search-box/search-box.component';
import './App.css';
import ErrorBoundary from "./components/ErrorBoundary";
import { connect } from 'react-redux';
import { setSearchField, requestRobots } from './action';

const mapStateToProps = state => {
  return {
    searchField: state.searchRobots.searchField,
    robots: state.requestRobots.robots,
    isPending: state.requestRobots.isPending,
    error: state.requestRobots.error
    
  }
}

const mapDispatchToProps = dispatch => {
  return {
    onSearchField: (event) => dispatch(setSearchField(event.target.value)),
    onRequestRobots: () => dispatch(requestRobots())
  }
}



class App extends Component {
 
  //component LifeCycle
  componentDidMount(){
    this.props.onRequestRobots();                  // Now it is converted into a usable data format for our project let's save it in monster array
  };
  

  render() {
    
    const { searchField, onSearchField , robots , isPending } = this.props;
    const FiltredMonstered = robots.filter(robot => 
        
      robot.name.toLowerCase().includes(searchField.toLowerCase()))

    return isPending ? 
      <h1>Loading....</h1> :
    (
      <div className="App">
        <p> Monster Rolodex</p>
        <SearchBox 
          placeholder="Search Robots"
          handleChange= {onSearchField}/>
        <ErrorBoundary>
            <CardList monsters={FiltredMonstered} />
        </ErrorBoundary>
        
      </div>
    )
  }
}

export default connect( mapStateToProps, mapDispatchToProps )(App);
