import { 
    CHANGE_SEARCH_FIELD,
    REQUEST_ROBOTS_PENDING,
    REQUEST_ROBOTS_SUCCESS,
    REQUEST_ROBOTS_FAILED,
} from './constant';

export const setSearchField = (text) => {
    return {
    type: CHANGE_SEARCH_FIELD,
    payload: text
}};

export const requestRobots = () => (dispatch) => {
    dispatch({type:REQUEST_ROBOTS_PENDING});
    fetch('https://jsonplaceholder.typicode.com/users')  // Fetch Returns a promise
    .then(response => response.json())                 // Converts the promise into a JSON format
    .then(user => dispatch({type:REQUEST_ROBOTS_SUCCESS, payload: user})) 
    .catch(error => dispatch({type:REQUEST_ROBOTS_FAILED, payload:error}))
}