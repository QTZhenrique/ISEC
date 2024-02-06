const headertop = document.querySelector(".header");
const imagem = document.querySelector(".logo");

window.addEventListener('scroll', function() {

  var pixels = window.scrollY;
  
  if(pixels > 120)
  {
    headertop.style.background = '#214885';
    headertop.style.height = '20vh';
    headertop.style.margin = '0px 0px 50px 0px';
    headertop.style.position = 'fixed';
    imagem.style.width = '20vh';
    imagem.style.height = '10vh';
  }
  else
  {
    headertop.style.background = 'transparent';
    headertop.style.position = 'absolute';
    headertop.style.margin = '-15px 0px 0px 0px';
    imagem.style.width = '40vh';
    imagem.style.height = '20vh';
  }  
});





