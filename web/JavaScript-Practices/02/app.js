// Initial Count

let count = 0;
const value = document.querySelector("#value");
const button = document.querySelectorAll(".btn");



const Decreament = () => count--;
const Reset = () => count = 0;
const Increament = () => count++;

button.forEach((btn) => {
    btn.addEventListener('click', (e) => {
        switch (e.currentTarget.innerText) {
            case 'DECREAMENT':
                Decreament();
                break;
            case 'RESET':
                Reset();
                break;
            case 'INCREAMENT':
                Increament();
                break;
        }
        value.innerText = count;
        count > 0 ? value.style.color = "green" : value.style.color = "red";
        count == 0 ? value.style.color = "hsl(205, 86%, 17%)" : null;
    })
})