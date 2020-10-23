let body=document.body;

let button=document.querySelector("button");
let input=document.querySelector("input");
let select=document.querySelector("select");
let earth=document.querySelector(".flex-container");
let img=document.querySelector("img");
let flexItem=document.querySelector(".flex-item");

button.addEventListener("click",function(){
    
    if (input.value==""){
        flexItem.innerHTML="";
        let div1=document.createElement("div");
        div1.style.width="600px";
        div1.style.backgroundColor="rgba(255,255,255,0.3)";
        div1.style.color="white";
        div1.style.fontWeight="700";
        div1.style.textAlign="center";
        div1.style.fontSize="28px";
        div1.style.padding="20px";
        div1.style.margin='0 auto';
        div1.textContent="Mass is required";
        flexItem.appendChild(div1);
    }
    else if (input.value!="" && select.value=="none"){
        console.log('second');
        flexItem.innerHTML="";
        let div2=document.createElement("div");
        div2.style.width="600px";
        div2.style.backgroundColor="rgba(255,255,255,0.3)";
        div2.style.color="white";
        div2.style.fontWeight="700";
        div2.style.textAlign="center";
        div2.style.fontSize="28px";
        div2.style.padding="20px";
        div2.style.margin='0 auto';
        div2.textContent="You did not choose a planet yet";
        flexItem.appendChild(div2);

    }
    else{
        flexItem.innerHTML="";
        let div3=document.querySelector(".flex-item ");
            earth.style.display="flex";
            let image=document.createElement("img");
            image.style.margin="10px";
            let description=document.querySelectorAll(".flex-item")[1];           
           description.style.width="100%";
            description.style.margin='30px';
            description.style.padding="30px";
            description.style.color="white";
            description.style.fontSize="20px";
            description.style.fontWeight="500";
            description.style.alignSelf="center";
            description.style.height="200px";
            description.style.backgroundColor="rgba(255,255,255,0.3)";
            description.style.display="flex";
            description.style.alignItems="center";
            description.style.flexDirection="column";

            let div4=document.createElement("div");

            
            div4.style.fontWeight="700";
            div4.style.width="150px";
            div4.style.height="150px";
            div4.style.backgroundColor="rgba(255,255,255,0.6)";
            div4.style.borderRadius="50%";

        if (select.value=="Mercury"){
            
            image.src="./images/mercury.png";
            div4.innerHTML="<p style='margin-top:50px;'>"+(parseFloat(input.value)*3.7).toFixed(2) +"</p>";
            div3.appendChild(image); 
            description.innerHTML="<p>The weight of the object on <strong>"+select.value+"</strong></p>";
            description.appendChild(div4);
            
        }
        else if (select.value=="Venus" || select.value=="Uranus"){
            
            if (select.value=="Venus"){
                image.src="./images/venus.png";
            }
            else{
                image.src="./images/uranus.png";
            }
            div3.appendChild(image); 
            div4.innerHTML="<p style='margin-top:50px;'>"+(parseFloat(input.value)*8.87).toFixed(2) +"</p>";
            description.innerHTML="<p>The weight of the object on <strong>"+select.value+"</strong></p>";
            description.appendChild(div4);
            
        }
        else if (select.value=="Earth"){
            
            image.src="./images/earth.png";
            div4.innerHTML="<p style='margin-top:50px;'>"+(parseFloat(input.value)*9.807).toFixed(2) +"</p>";
            div3.appendChild(image); 
            description.innerHTML="<p>The weight of the object on <strong>"+select.value+"</strong></p>";
            description.appendChild(div4);
            
        }
        else if (select.value=="Mars"){
            
            image.src="./images/mars.png";
            div4.innerHTML="<p style='margin-top:50px;'>"+(parseFloat(input.value)*3.711).toFixed(2) +"</p>";
            div3.appendChild(image); 
            description.innerHTML="<p>The weight of the object on <strong>"+select.value+"</strong></p>";
            description.appendChild(div4);
            
        }
        else if (select.value=="Jupiter"){
            
            image.src="./images/jupiter.png";
            div4.innerHTML="<p style='margin-top:50px;'>"+(parseFloat(input.value)*24.79).toFixed(2) +"</p>";
            div3.appendChild(image); 
            description.innerHTML="<p>The weight of the object on <strong>"+select.value+"</strong></p>";
            description.appendChild(div4);
            
        }
        else if (select.value=="Saturn"){
            
            image.src="./images/saturn.png";
            div4.innerHTML="<p style='margin-top:50px;'>"+(parseFloat(input.value)*10.44).toFixed(2) +"</p>";
            div3.appendChild(image); 
            description.innerHTML="<p>The weight of the object on <strong>"+select.value+"</strong></p>";
            description.appendChild(div4);
            
        }
        else if (select.value=="Neptune"){
            
            image.src="./images/neptune.png";
            div4.innerHTML="<p style='margin-top:50px;'>"+(parseFloat(input.value)*11.15).toFixed(2) +"</p>";
            div3.appendChild(image); 
            description.innerHTML="<p>The weight of the object on <strong>"+select.value+"</strong></p>";
            description.appendChild(div4);
            
        }
        else if (select.value=="Pluto"){
            
            image.src="./images/pluto.png";
            div4.innerHTML="<p style='margin-top:50px;'>"+(parseFloat(input.value)*0.62).toFixed(2) +"</p>";
            div3.appendChild(image); 
            description.innerHTML="<p>The weight of the object on <strong>"+select.value+"</strong></p>";
            description.appendChild(div4);
            
        }
    }

    select.selectedIndex="0";
    input.value="";
});