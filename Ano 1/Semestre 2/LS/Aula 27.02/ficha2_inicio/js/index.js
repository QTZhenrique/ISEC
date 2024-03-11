"use strict";

var panelControl = document.getElementById('panel-control');
var panelGame = document.getElementById('game');
var btLevel = document.getElementById('btLevel');
var btPlay = document.getElementById('btPlay');
var message = document.getElementById('message');
const listItens = document.querySelectorAll('.list-item');
var cartas = document.querySelectorAll(".card");


btLevel.addEventListener('change' , SelectLevel);
reset();

let cardsLogos = ["angular","boostrap","html","javascript","vue","svelte","react","css","backbone","ember"];

function SelectLevel() //Pode incluir na função Reset
{
    if(btLevel.value === '0')
        btPlay.disabled = true;
    else
        btPlay.disabled = false;
        panelGame.style.display = 'grid';
}


function StartGame()
{
    btPlay.textContent = "Terminar Jogo";
    btLevel.disabled = true;
    message.classList.add('hide');
    listItens.forEach(function(elemento){elemento.classList.add('gameStarted')});
    //ShowCards();
    shuffleArray(cardsLogos);
    let newcardsLogos = cardsLogos.slice(0,3);
    newcardsLogos = [...newcardsLogos,...newcardsLogos];
    shuffleArray(newcardsLogos);

    let indice = 0;

    for(let card of cartas)
    {
        let cardFront = card.querySelector(".card-front");
        cardFront.src = `images/${newcardsLogos[indice]}.png`;
        card.dataset.logo = newcardsLogos[indice];
        indice++;
        card.addEventListener("click", FlipCard);
    }

    /*if(btPlay.textContent === "Iniciar Jogo")
    {
        btPlay.textContent = "Terminar Jogo";
        btLevel.disabled = true;
        message.classList.add('hide');
        listItens.forEach(function(elemento){elemento.classList.add('gameStarted')});
    }
    else //Substitui a função stopGame
    {
        /*btPlay.textContent = "Iniciar Jogo";
        btLevel.disabled = false;
        btLevel.value = '0'
        message.classList.remove('hide');
        listItens.forEach(function(elemento){elemento.classList.remove('gameStarted')}); //Pode adicionar no reset
    }*/

}

function StopGame()
{
    btPlay.textContent = "Iniciar Jogo";
    btLevel.disabled = false;
    HideCards();
    reset();
}

function reset()
{
    //panelGame.style.display = 'none';
    message.textContent = ' ';
    message.classList.remove('hide');
    btPlay.disabled = 'false';
    btLevel.value = '0'
    listItens.forEach(function(elemento){elemento.classList.remove('gameStarted')});
}


btPlay.addEventListener('click', function(){

    if(btPlay.textContent === "Terminar Jogo")
    {
        StopGame();
    }
    else
    {
        StartGame();
    }
});

panelControl.addEventListener('click', function(){
    message.textContent === '' ? message.textContent = 'Clique em Iniciar o Jogo!' : message.textContent = ''
});


function ShowCards()
{
    cartas.forEach(function(elemento){elemento.classList.add('flipped')});
}

function HideCards()
{
    cartas.forEach(function(elemento){elemento.classList.remove('flipped')});
}


const shuffleArray = array => 
{
    for (let i = array.length - 1; i > 0; i--) 
    {
    const j = Math.floor(Math.random() * (i + 1));
    const temp = array[i];
    array[i] = array[j];
    array[j] = temp;
    }
}

function FlipCard()
{
    this.classList.add("flipped");    
}


    





