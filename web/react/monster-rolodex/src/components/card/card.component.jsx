import React from 'react';
import './card.styles.css';

const Card = props => (
    <div className="card-container">
        <img 
            alt="monsters"
            src={`https://robohash.org/${props.monster.id}?set=set2&size=180x180`}
        />
        <h1>{props.monster.name}</h1>
        <span>{props.monster.username}</span>
        <span>{props.monster.email}</span>
    </div>
)

export default Card;