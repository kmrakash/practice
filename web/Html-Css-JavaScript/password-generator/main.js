//Generator Functions
const getRandomLower = () => {
    return String.fromCharCode(Math.floor(Math.random()*26)+97);
}

const getRandomUpper = () => {
    return String.fromCharCode(Math.floor(Math.random()*26)+65);
}

const getRandomNumber = () => {
    return String.fromCharCode(Math.floor(Math.random()*26)+48);
}

const getRandomSymbol = () => {
    const symbols = '!@#$%^&*';
    return symbols[Math.floor(Math.random()*symbols.length)]
}

// const lower = getRandomLower;
const randomFun = {
    lower: getRandomLower,
    upper: getRandomUpper,
    number: getRandomNumber,
    symbol: getRandomSymbol,
}
 
// Grabbing the html Elements

const resultEL = document.getElementById('result');
const clipboardEL = document.getElementById('clipboard');
const uppercaseEL = document.getElementById('uppercase');
const lengthEL = document.getElementById('length');
const lowercaseEL = document.getElementById('lowercase');
const numberEL = document.getElementById('number');
const symbolEL = document.getElementById('symbol');
const generateEL = document.getElementById('generate');



const generatePassword = (length, upper, lower, number, symbol) => {
    console.clear();
    let password = '';
    const typecount = upper + lower + number + symbol;
    const typearr = [{upper}, {lower}, {number}, {symbol}]
                    .filter(item => Object.values(item)[0] )
    
    if(typecount === 0)
    return ''; 

    for(let i=1; i<=length; i += typecount){
        typearr.forEach(item => {
            const funName = Object.keys(item)[0]; 
            // console.log(randomFun[funName]());
           password += randomFun[funName]();
        });
    }
    
    console.log(password.slice(0, length));
   return password.slice(0, length);
}

generate.addEventListener('click', ()=>{
    const length = +lengthEL.value;
    const hasUpper = uppercaseEL.checked;
    const hasLower = lowercaseEL.checked;
    const hasNumber = numberEL.checked;
    const hasSymbol = symbolEL.checked;
    
    resultEL.innerText = generatePassword(length, hasUpper, hasLower, hasNumber, hasSymbol);
});

// Copy to clipboard

clipboardEL.addEventListener('click', ()=>{
    const textarea = document.createElement('textarea');
    const passWord = resultEL.innerText;

    if(!passWord) return;
    textarea.value = passWord;
    document.body.appendChild(textarea);
    textarea.select();
    document.execCommand('copy');
    textarea.remove();
    alert('Password Copied');
})

