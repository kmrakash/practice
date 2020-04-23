import React from 'react';

const Person = (props) => {
    return(
    <p>My name is {props.name} , Dynamic number {Math.floor(Math.random()*30)}</p>
    )
}

export default Person;