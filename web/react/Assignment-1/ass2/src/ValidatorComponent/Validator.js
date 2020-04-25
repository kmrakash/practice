import React from 'react';


const Validator = props => {
    return(
        <div>
            {
                props.length > 5 ?
                    <p>Text Long Enough</p>:
                    <p>Text Too Short</p>
            }
        </div>
    )
}
export default  Validator;