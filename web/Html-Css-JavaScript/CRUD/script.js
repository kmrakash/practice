const form = document.querySelector("form");
const input = document.querySelector(".mainInput");
const list = document.querySelector(".list-group");
const addBtn = document.querySelector(".addBtn");

const randomID = () => Math.floor(Math.random()*100000);
let Items = [
    {
        id:randomID(),
        text: "default Item"
    }
]

let formStatus = "add";

// Add to innerHTMl

const generateItem = (item) => {
    const div = document.createElement('div');
    div.setAttribute('class', 'list-group-item d-flex justify-content-between align-items-center');
    div.setAttribute('id', item.id);
    const span = document.createElement('span');
    span.setAttribute('class', 'text');
    span.innerText = item.text;
    const div2 = document.createElement('div');
    const editBtn = document.createElement('button');
    editBtn.setAttribute('class', 'btn btn-dark editBtn btn-sm mr-1');
    editBtn.innerText = 'Edit';
    const deletebtn = document.createElement('button');
    deletebtn.setAttribute('class', 'btn btn-danger delBtn btn-sm')
    deletebtn.innerText = 'Delete';
    div2.appendChild(editBtn);
    div2.appendChild(deletebtn);
    div.appendChild(span);
    div.appendChild(div2);

    return div;
}

// Read

function showItems() {
    list.innerHTML = '';
    Items.forEach(item => {
        list.appendChild(generateItem(item));
    });
}

showItems();

// Create

function addItem(item) {
    const newItem = {
        id:randomID(),
        text:item
    }
    Items.unshift(newItem);
    input.value = '';
    showItems();
}

// Update

window.addEventListener('click', e => {
    // console.table(e);
    // console.log(e.target);

    if(e.target.classList.contains('editBtn')) {
        const item = e.target.parentNode.parentNode;
        const id = item.id;
        const text = item.firstChild.innerText;
        input.value = text;
        input.id = id;
        formStatus = 'update';
        addBtn.innerText = 'Update';
    }
} );

// Update

function updateItem(item) {
    Items.forEach(itemObj => {
        if(Number(itemObj.id) === Number(item.id)) {
            itemObj.text = item.text;
        }
    });
    
    input.value = '';
    formStatus = 'add';
    addBtn.innerText = 'Add';
    showItems();
}

// Submit Form

form.addEventListener('submit', (e) => {
    e.preventDefault();
    if(formStatus === 'add' && input.value !== '') {
        addItem(input.value);
    }
    if(formStatus === 'update' && input.value !== '') {
        updateItem({id:input.id , text: input.value})
    }
})

window.addEventListener('click', e => {
    if(e.target.classList.contains('delBtn')) {
        const item = e.target.parentNode.parentNode;
        const id = item.id;
        Items = Items.filter(itemObj => Number(itemObj.id) !== Number(id));
        showItems();
    }
})