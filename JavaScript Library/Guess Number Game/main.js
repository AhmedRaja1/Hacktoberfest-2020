$(document).ready(function () {
    //On click for submit button
    $("#submitButton").on('click', function run_guess() {
        //console.log('Click function works');
        make_guess();
        hot_cold_difference();
        shark_fin_animate()
        pushToGuessList()
    });
    $("#num_of_guesses_btn").on('click', function run_shark_attack() {});
});
// GLOBAL VARIABLES
var the_number = null;
var clickCount = 0;
var responsive_div = $('#responsive_div');
var the_guess = $('#guess_input').val();
$('#guess_input').val(the_guess);
var submit_button = $('#submitButton');
var gameRestart = $('.restart');
//This function generates a random number to use in the game
function pick_number() {
    //console.log('pick_number function has been run');
    //debugger;
    var random_number = Math.floor(Math.random() * (50 - 1 + 1)) + 1;
    console.log('Random Number Generated: ' + random_number);
    return the_number = random_number;
}
//This function tells the player how close they are to the number
function make_guess() {
    //console.log('make_guess function has been run');
    //debugger;
    var the_guess = $('#guess_input').val();
    $('#guess_input').val(the_guess);
    if (the_guess > the_number) {
        //console.log('Too High!');
        responsive_div.text('Too High!');
    } else if (the_guess < the_number) {
        //console.log('Too Low!');
        responsive_div.text('Too Low!');
    } else if (the_guess == the_number) {
        //console.log('You guessed it!');
        responsive_div.text('You guessed it! Dilly Dilly!');
    } else {
        //console.log('Something went very wrong here...');
        responsive_div.text('Something went very wrong here...');
    }
};
//function to log the guesses so the user can see what they have guessed
//Needs work not a great way to write this
function pushToGuessList(){
    var showGuesses = [];
    var the_guess = $('#guess_input').val();
    $('#guess_input').val(the_guess);
    if (the_guess) {
        showGuesses.push(the_guess + ', ');
        $('#num_of_guesses_btn').append(showGuesses);
        //console.log(showGuesses);
    }
}

//This function changes the button color to show how close the player is to the number
function hot_cold_difference() {
    //console.log('hot_cold_difference function has been run');
    //debugger;
    var the_guess = $('#guess_input').val();
    $('#guess_input').val(the_guess);
    //Inner function for the difference between the two numbers
    var difference_between_numbers = function (x, y) {
        //console.log('Difference Match Calculating')
        return Math.abs(x - y);
    };
    var diffTotal = difference_between_numbers(the_guess, the_number);
    var gameIntro = $('.game_intro');
    if ($('#guess_input').val() == '') {
        return false;
    } else if (diffTotal <= 5 && diffTotal > 0) {
        submit_button.css({
            backgroundColor: "#ba0000"
        });
        submit_button.text('Hot!!!');
        gameIntro.text("Yer so close, th' pirates are dependin' on ye. Choose wisely...");
    } else if (diffTotal >= 6 && diffTotal <= 10) {
        submit_button.css({
            backgroundColor: "#e84700"
        });
        submit_button.text('Your Really Warm');
        gameIntro.text("Gettin' closer, don't let those sharks smell yer fear!")
    } else if (diffTotal >= 11 && diffTotal <= 20) {
        submit_button.css({
            backgroundColor: "#e88800"
        });
        submit_button.text('Your Luke Warm');
        gameIntro.text("A step in starb'rd direction but ye 'ave a ways t' go still...")
    } else if (diffTotal >= 21 && diffTotal <= 50) {
        submit_button.css({
            backgroundColor: "#3bcde7"
        });
        submit_button.text('Your Cold');
        gameIntro.text("Yer headin' th' wrong way, collect yer wits 'n try again.")
    } else if (diffTotal >= 51) {
        submit_button.css({
            backgroundColor: "#a3effd"
        });
        submit_button.text('Your Freezing');
        gameIntro.text("Do ye even care about pirates, no really are ye even tryin' t' save them!?!")
    } else {
        you_won();
    }

}
//this function controls events involving the SUBMIT BUTTON clicks
function handleClicks() {
    //var clickCount = 0;
    //$('#num_of_guesses_btn').text(clickCount);
    $('#submitButton').click(event => {
        if($('#guess_input').val() == '') {
            alert("Oh no! Try boardin' jus' a 2 digit number me harty o' face walkin th' plank!");
            return false;
        } else if (true){
        var the_guess = $('#guess_input').val();
        the_guess = parseInt(the_guess)
        clickCount += 1;
        //$('#num_of_guesses_btn').text('Number of guesses: ' + clickCount);
        }
        //console.log('Inner Function Click Count ' + clickCount)
        //if statement to move the boat from div to div
        if ($('#guess_input').val() == ''){
            return false;
		} else if (clickCount === 1) {
            $('#boat_div1').empty();
            $('#boat_div2').prepend('<img src="./images/sailboat.png" />')
        } else if (clickCount === 2) {
            $('#boat_div2').empty();
            $('#boat_div3').prepend('<img src="./images/sailboat.png" />')
        } else if (clickCount === 3) {
            $('#boat_div3').empty();
            $('#boat_div4').prepend('<img src="./images/sailboat.png" />')
        } else if (clickCount === 4) {
            $('#boat_div4').empty();
            $('#boat_div5').prepend('<img src="./images/sailboat.png" />')
        } else if (clickCount >= 5) {
            //WIN OR LOSE STATEMENT Functions
            if (the_guess === the_number) {
                you_won();
                console.log('WON FIRED');
                return;
            } else if (the_guess !== the_number) {
                game_over();
                console.log('GAME OVER FIRED');
                return;
            }
        }
 
    });

}
$(handleClicks);
//function to click submit button when player presses enter
$('#guess_input').keypress(function (e) {
    if (e.keyCode == 13) {
        $('#submitButton').click();
    }
});

//function for shark fun animate with jquery on event
function shark_fin_animate() {
    var sharkFin = $('#shark_fin')
    sharkFin.animate({
        maxWidth: '200px'
    }, "slow");
    sharkFin.animate({
        maxWidth: '100px'
    }, "slow");
}
//GAMEOVER EVENTS FUNCTION
function game_over() {
    submit_button.css({
        backgroundColor: "#ba0000"
    });
    submit_button.text('GAME OVER');
    //Add restart button
    gameRestart.addClass('btn btn-success btn-lg').attr('id', 'restart_button').text('Try Again');
    $('#restart_button').click(function () {
        location.reload();
    });
    responsive_div.text('Oh no!!! The pirates were eaten by sharks!!!').css({
        color: 'white'
    });
    //hide elements on game over
    $('.hide_on_end').hide();
    //You Lost GIF
    $('.jumbotron').css({
        backgroundImage: 'url("./images/shark_attack.webp")',
        backgroundSize: 'cover'
    });
    $(".audio_control").trigger('pause');
    gameOverSound.playclip();
}
//YOU WON EVENT FUNCTIONS
function you_won() {
    //console.log('you_won function executed')
    submit_button.css({
        backgroundColor: "#a4d741"
    });
    submit_button.text('CONGRATULATIONS!')
    responsive_div.text('You\'ve WON!!! DILLY DILLY!').css({
        color: 'white'
    });
    gameRestart.addClass('btn btn-success btn-lg').attr('id', 'restart_button').text('Play Again');
    $('#restart_button').click(function () {
        location.reload();
    });
    $('.hide_on_end').hide();
    //You Won GIF
    $('.jumbotron').css({
        backgroundImage: 'url("./images/party.gif")',
        backgroundSize: 'cover'
    });
    $('#youWinModal').modal('show');
    $('#modal_restart_button').click(function () {
        location.reload();
    });
    $(".audio_control").trigger('pause');
    youWonSound.playclip();
}

//Sound effects

var audiotypes={
    "mp3": "audio/mpeg",
    "ogg": "audio/ogg",
}
var gameOverSound  = ss_soundbits('./audio/game-over-jaws.ogg', "./audio/game-over-jaws.mp3");
var youWonSound  = ss_soundbits('./audio/win-game-applause.ogg', "./audio/win-game-applause.mp3");

function ss_soundbits(sound){
    var audio_element = document.createElement('audio')
    if (audio_element.canPlayType){
        for (var i=0; i<arguments.length; i++){
            var source_element = document.createElement('source')
            source_element.setAttribute('src', arguments[i])
            if (arguments[i].match(/\.(\w+)$/i))
                source_element.setAttribute('type', audiotypes[RegExp.$1])
            audio_element.appendChild(source_element)
        }
        audio_element.load()
        audio_element.playclip=function(){
            audio_element.pause()
            audio_element.currentTime=0
            audio_element.play()
        }
        return audio_element
    }
}
