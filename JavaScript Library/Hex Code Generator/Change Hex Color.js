  function changeBg() {
    let hexChar = ["1","2","3","4","5","6","7","8","9","A","B","C","D","E","F"];
    let color = "#";

    for (let i = 0; i < 6; i++) {
        index = parseInt(Math.random() * hexChar.length);
        color += hexChar[index];
    }

    document.body.style.backgroundColor = color; 
    document.getElementsByClassName("hex")[0].innerText = color;
}
