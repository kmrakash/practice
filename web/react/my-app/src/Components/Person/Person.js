import React from 'react';
// import styles from './Person.css';
const Person = (props) => {
    const styles = {
        display: 'flex',
        align:'center',
        width: '250px',
        height: '250px',
        padding: '10px',
        border: '1px solid gray',
    
    }
    return(
    <p style={styles} onClick={props.click} >My name is {props.name} , Age is {props.age}</p>
    )
}

export default Person;