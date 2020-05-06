import React from 'react';
import Card from '../card/card.component';
import './card-list.styles.css';

const CardList = props => {
    console.log()
    return (

        <div className="card-list" >
        { 
            props.monsters.length === 0 ? <p>No Monster with Search Results Are Found</p> :
            props.monsters.map(obj => <Card key={obj.id} monster={obj}/>)
        }
        </div>
    )
}

export default CardList;