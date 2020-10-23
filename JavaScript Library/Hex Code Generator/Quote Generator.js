function changeBg() {
    let hexChar = [{ q : "Tomorrow is mystery, yesterday was history but today is a gift. That's why its called a present.", p : "Master Ugwe" } , 
                    { q : "Technology is best when it brings people together.", p : "Matt Mullenweg" } ,  
                    { q : "It is only when they go wrong that machines remind you how powerful they are.", p : "Clive James" } ,  
                    { q : "The Web as I envisaged it, we have not seen it yet. The future is still so much bigger than the past.", p : "Tim Berners-Lee" } , 
                    { q : "It has become appallingly obvious that our technology has exceeded our humanity.", p : "Albert Einstein"} ];
    
    let index = parseInt(Math.random() * hexChar.length);
    
    quote = hexChar[index].q
    auther = hexChar[index].p

    document.getElementsByTagName("h3")[0].innerText = quote;
    document.getElementsByTagName("em")[0].innerText = auther;  
}
