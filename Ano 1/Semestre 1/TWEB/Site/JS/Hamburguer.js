const hamburger = document.querySelector(".hamburger");
const line = document.querySelectorAll(".line");
const navBar = document.querySelector(".nav");
const textmenu = document.querySelector(".menu-Text");
const imagem = document.querySelector(".logo");
const body = document.body;

const font = document.querySelector(".Pontual");
const font2 = document.querySelector(".Mensal");
const input = document.querySelector(".Input")

const item1 = document.querySelector(".item1");
const item2 = document.querySelector(".item2");
const item3 = document.querySelector(".item3");

const item9 = document.getElementById('item-1')
const item10 = document.getElementById('item-2')
const item11 = document.getElementById('item-3')

const mes1 = document.querySelector(".mes1");
const mes2 = document.querySelector(".mes2");
const mes3 = document.querySelector(".mes3");

const scrollbar = document.querySelector(".Part1");
const headertop = document.querySelector(".header");

var botoes = document.querySelectorAll('.myButton');
var textF = document.querySelector('.fornecimento');

var gradient = 'linear-gradient(to bottom, rgba(121, 121, 121, 0.208), rgba(35, 35, 35, 0.307))';

let open = false;

hamburger.addEventListener("click" , () => {
  toggleNavBar();
})

input.addEventListener("click", () => {
  CheckedBar();
})

function toggleNavBar(){
  if(!open){
   navBar.style.display = "flex";
    hamburger.classList.add("active");
    body.style.overflow = "hidden";
   open = true;
  }else{
    navBar.style.display = "none";
    hamburger.classList.remove("active");
    body.style.overflow = "visible";
    open = false;
  }   
}

function SelectButton()
{
  
}


function CheckedBar()
{
  if(input.checked){

    font.style.color = '#0072BC';
    font2.style.color = '#BDBDBD';
    item1.textContent = "31";
    item2.textContent = "84";
    item3.textContent = "280";
    item9.id = 'item-9';
    item10.id = 'item-10';
    item11.id = 'item-11';
    mes1.style.visibility = 'hidden';
    mes2.style.visibility = 'hidden';
    mes3.style.visibility = 'hidden';

   }else{

    font.style.color = '#BDBDBD';
    font2.style.color = '#0072BC';
    item1.textContent = "10";
    item2.textContent = "15";
    item3.textContent = "25";
    item9.id = 'item-1';
    item10.id = 'item-2';
    item11.id = 'item-3';
    mes1.style.visibility = 'visible';
    mes2.style.visibility = 'visible';
    mes3.style.visibility = 'visible';

   }  
}

window.addEventListener('scroll', function() {

  var pixels = window.scrollY;
  var novoCaminho = '/IMG/Logo.png';
  var antigoCaminho = '/IMG/Logo2.png';
  
  if(pixels > 50)
  {
    headertop.style.background = 'white';
    textmenu.style.color = 'black';
    imagem.src = novoCaminho;
    line.forEach(function(line) {
      line.style.backgroundColor = 'black';
    });
  }
  else
  {
    headertop.style.background = gradient;
    textmenu.style.color = 'white';
    imagem.src = antigoCaminho;
    line.forEach(function(line) {
      line.style.backgroundColor = 'white';
    });  
  }  
});

botoes.forEach(function(botao) {
  botao.addEventListener('click', function() {
    botoes.forEach(function(btn) {
      btn.style.backgroundColor = 'white';
      btn.style.color = '#0072BC';
    });
    botao.style.backgroundColor = '#0072BC';
    botao.style.color = 'white';

    if(botao.id == "item-1")
    { 
      textF.textContent = "Com " + "10€ " + "fornecemos " + "Água potável para 10 refugiados, durante um mês.";
    }
    if(botao.id == "item-2")
    {
      textF.textContent = "Com " + "15€ " + "fornecemos " + "Acesso à educação a 9 crianças, durante um ano.";
    }
    if(botao.id == "item-3")
    {
      textF.textContent = "Com " + "25€ " + "fornecemos " + "Cuidados de saúde para 15 pessoas, durante um ano.";
    }
    if(botao.id == "item-9")
    {
      textF.textContent = "Com " + "31€ " + "fornecemos " + "duas lonas de plástico para reforçar o abrigo de 1 família e torná-lo impermeável para o inverno.";
    }
    if(botao.id == "item-10")
    {
      textF.textContent = "Com " + "84€ " + "fornecemos " + "suporte a 1 família com apoio financeiro de emergência após terem fugido do Sudão.";
    }
    if(botao.id == "item-11")
    {
      textF.textContent = "Com " + "280€ " + "fornecemos " + "subsídio de emergência a 4 famílias deslocadas na Síria durante os rigorosos meses de inverno.";
    }
    
  });
});





