const arrow = document.querySelector('.arrow');
const text = document.querySelector('.text');
const dropdown = document.querySelector('.dropdown');

let show = true;

const showHide = () =>  {
    dropdown.style.display = show ? 'block' : 'none';
    show = !show;
}

arrow.addEventListener('click', ()=> showHide());

const links = document.querySelectorAll('li');
links.forEach((li) => {
    li.addEventListener('click', ()=>{
        text.innerHTML = li.innerHTML;
        showHide();
    });
});