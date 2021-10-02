const showMenu = (toggleID, navID) => 
{
    const toggle = document.getElementById(toggleID),
    nav = document.getElementById(navID);

    if(toggle && nav)
    {
        toggle.addEventListener('click', ()=>
        {
            nav.classList.toggle('show')
        })
    }
}
showMenu('nav-toggle','nav-menu')

/*===== Active and Remove Menu =====*/
const navLink = document.querySelectorAll('.nav__link')

function linkAction()
{
    //active Link
    navLink.forEach(n => n.classList.remove('active'))
    this.classList.add('active')
}

navLink.forEach(n => n.addEventListener('click', linkAction))
/*===== Scroll reveal Animation =====*/
const sr = ScrollReveal({
        origin: 'right',
        distance: '80px',
        duration: 2000,
        reset: true
    })
/*===== Scroll Home =====*/
sr.reveal('.home__title',{})
sr.reveal('.button',{delay:200})
sr.reveal('.home__img',{delay:400})
sr.reveal('.home__social-icon',{interval: 200})
/*===== Scroll About =====*/
sr.reveal('.about__img',{})
sr.reveal('.about__subtitle',{delay:200})
sr.reveal('.text',{delay:400})
/*===== Scroll Skills =====*/
sr.reveal('.skills__subtitle',{})
sr.reveal('.skills__text',{delay:200})
sr.reveal('.skills__data',{delay:200})
sr.reveal('.skills__img',{delay:450})
/*===== Scroll Portfolio =====*/
sr.reveal('.work__img',{interval:200})
/*===== Scroll Contact =====*/
sr.reveal('.contact__name',{delay:100})
sr.reveal('.contact__email',{delay:200})
sr.reveal('.contact__subject',{delay:300})
sr.reveal('.contact__message',{delay:400})

/*===== Form resubmission appearance disable after every refresh of the page =====*/
if ( window.history.replaceState ) {
    window.history.replaceState( null, null, window.location.href );
}
/*===== Contact form =====*/
$(document).ready(function ()
{
    $('.submit').click(function (event)
    {


        var name = $('.contact__name').val()
        var nametext = document.getElementById(nametext);
        var email = $('.contact__email').val()
        var message = $('.contact__message').val()
        var statusTxt =$('.sending__text')
        statusTxt.empty()

        var disabledbutton = document.getElementById("submitbutton")


        if(name.length==0 && name.includes(1,2,3,4,5,6,7,8,9,0))
        {
            statusTxt.append('Name is Invalid\n')
            disabledbutton.disabled=true;
        }
        if(email.length==0)
        {
            statusTxt.append('Kindly fill the Email field\n')
            disabledbutton.disabled=true;
        }
        if(message.length==0)
        {
            statusTxt.append("Kindly just don't stay silent, write to me!")
            disabledbutton.disabled=true;
        }
    })
})