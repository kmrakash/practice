import React from 'react';

const Person = () => {
    return(
    <p>I am a Component , Dynamic number {Math.floor(Math.random()*30)}</p>
    )
}

export default Person;