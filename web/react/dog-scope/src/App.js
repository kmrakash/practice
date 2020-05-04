import React, { useReducer, useState, useRef } from 'react';
import * as mobilenet from '@tensorflow-models/mobilenet';
import './App.css';

const stateMachine = {
  initial : 'initial',
  states : {
    initial: { on: {next: 'loading'}},
    loading: {on: {next: 'awaitingUpload'}},
    awaitingUpload:{on: {next: 'ready'}},
    ready:{on: {next: 'classifying'}, showImage: true},
    classifying:{on: {next: 'complete'}},
    complete: {on: {next: 'awaitingUpload'}, showImage: true}
  }
}

const reducer = (currentState, event) => stateMachine.states[currentState].on[event] || stateMachine.initial;

function App() {

  const [state, dispatch] = useReducer(reducer, stateMachine.initial);
  const [model, setModel] = useState(null);
  const [imageUrl, setimageUrl] = useState(null);
  // const [results, setResults] = useState([]);
  const next = () => dispatch("next");
  const inputRef = useRef();
  const imageRef = useRef();
  
  const loadModel = async () => {
    next();
    const mobilenetModel = await mobilenet.load();
    setModel(mobilenetModel);
    next(); 
  }

  const handleUpload = e => {
    const { files } = e.target;
    console.log(files.length);
    if(files.length > 0){
      console.log(files[0]);
      const makeImageUrl = URL.createObjectURL(e.target.files[0]);
      setimageUrl(makeImageUrl);
    //   setimageUrl(ImageUrl);
    
      next();
    }
  }

  const Identify = async () => {
    console.log(imageUrl);
    next();
    const results = await model.classify(imageRef.current);
    console.log(results);
    next();
  }

  const buttonProps = {
    initial : {text: 'Load Model', action: () => loadModel},
    loading : {text: 'loading', action: () => {}},
    awaitingUpload : {text: 'Upload a Dog Pic', action: () => inputRef.current.click()},
    ready : {text: 'Identify', action: Identify},
    classifying : {text: 'Identifying', action: () => {}},
    complete : {text: 'Reset', action: () => {}},
  }

  const { showImage = false } = stateMachine.states[state];

  return (
    <div className="App">
      { showImage && <img alt="Upload Preview" src={imageUrl} ref={imageRef}/>}
      <input type="file" accept="image/*" ref={inputRef} onChange={handleUpload} />
      <button onClick={buttonProps[state].action() || (()=>{})}>{buttonProps[state].text}</button>
    </div>
  );
}

export default App;
