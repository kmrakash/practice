import React from 'react';

const UserInput = (props) => {

   const inputStyle = {
        border: '2px solid blue',
    };
  
        return(
            <div>
                <input
                    style={inputStyle}
                 type="text" onChange={props.change} />
            </div>
        );
    
}

export default UserInput;