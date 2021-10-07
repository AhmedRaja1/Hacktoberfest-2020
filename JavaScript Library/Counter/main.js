const p = document.querySelector("p");
let text = p.textContent;
let number = Number(text);

const increase = document.getElementById("increase");
const decrease = document.getElementById("decrease");


increase.addEventListener("click", function(){
    number++;
    p.innerText = number;

if(number == 0)
{
    p.style.color = "mintcream";
}
else if(number <0)
{
    p.style.color = "red";
}
else if(number > 0)
{
    p.style.color = "green";
}
});

decrease.addEventListener("click", function() {
    number--;
    p.innerText = number;

if(number == 0)
{
    p.style.color = "mintcream";
}
else if(number <0)
{
    p.style.color = "red";
}
else if(number > 0)
{
    p.style.color = "green";
}
});
