const colors = ["green", "red", "rgba(133,122,200)", "#f15025"];
const btn = document.getElementById("btn");
const color = document.querySelector(".color");

const getRandomNumber = () => Math.floor(Math.random() * colors.length);

btn.addEventListener("click", function () {
  const NewColor = colors[getRandomNumber()];

  document.body.style.backgroundColor = NewColor;
  color.textContent = NewColor;
});