let slides = document.getElementsByClassName("slide");
let slideIndex = 0;

function showSlides() {

    for  (let i = 0; i < slides.length; i++) slides[i].classList.remove("slide_show");
    if (slideIndex  >= slides.length) slideIndex = 0;
    if(slideIndex < 0)  slideIndex = slides.length -1
    slides[slideIndex].classList.add("slide_show");
    setTimeout (showSlides, 10000);
}

function plusSlides(n) {
    slideIndex += n;
    showSlides();
}
showSlides();