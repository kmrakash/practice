let color1 = document.querySelector("#color1");
let color2 = document.querySelector("#color2");
let css = document.querySelector("h3");
let bodyEl = document.querySelector("body");
let clr1 , clr2;

bodyEl.style.background = "line";

function setGradient() {
    bodyEl.style.background = 
 "linear-gradient(to right , " + color1.value+ ", "  + color2.value + ")";
 css.innerText = "linear-gradient(to right , " + color1.value+ ", "  + color2.value + ")";
}

color1.addEventListener("input", setGradient);
color2.addEventListener("input", setGradient);




