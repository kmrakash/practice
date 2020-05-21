//counter function to count number of network calls
let counter = 0;
// function for fetching API
const getData = () => (
    // make Here API calls
    console.log('Fetching API ... ', counter++)
);

//The debounce Function to optimise the function calls
const debounce = (fn, d) => {
    // 
    let timer;
    // Return a anonymous Function
    return () => {
        let context = this; 
            
        clearTimeout(timer);
        timer=setTimeout(()=>{
            getData.apply(context)
        }, d)
    }
}


// create a better function to make a call to getData;
const betterFunction = debounce(getData, 300);