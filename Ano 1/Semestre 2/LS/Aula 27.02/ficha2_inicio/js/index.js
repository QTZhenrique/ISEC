"use strict";

const panelControl = document.getElementById('panel-control');
const panelGame = document.getElementById('game');
const btLevel = document.getElementById('btLevel');
const btPlay = document.getElementById('btPlay');
const message = document.getElementById('message');
const listItens = document.querySelectorAll('.list-item');
const cartas = document.querySelectorAll(".card");
let flippedcards=[];
let totalFlipedCards = 0;

let TIMEOUTGAME = 20;
let timer;
let timerID;
const labelGameTime = document.getElementById('gameTime');

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
    timer = TIMEOUTGAME;
    labelGameTime.textContent = "20s";
    timerID = setInterval(updateGameTime,1000);
    flippedcards=[];
    totalFlipedCards = 0;
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
    modalGameOver.showModal();
    HideCards();
    clearInterval(timerID);
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
    labelGameTime.removeAttribute('style');
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

    flippedcards.push(this);
}

function checkPair()
{
    let [card1,card2] = flippedcards;

    const isMatch = (card1.dataset.logo == card2.dataset.logo)

    if(isMatch)
    {
        setTimeout(()=>{
            card1.classList.add("inactive");
            card2.classList.add("inactive");
            card1.querySelector("card-front".classList.add(grayscale));
            card2.querySelector("card-front".classList.add(grayscale));

            totalFlipedCards += 2;
            if(GameOver())
            {
                StopGame();
            }

        },500);
    }
    else
    {
        setTimeout(()=>{
            card1.classList.remove("flipped");
            card2.classList.remove("flipped");
            card1.addEventListener("click",FlipCard,{once:true});
            card2.addEventListener("click",FlipCard,{once:true});
        },500);
    }
}

function GameOver()
{
    return(totalFlipedCards===cartas.length);
}

function updateGameTime()
{
    timer--;
    labelGameTime.textContent = timer + "s";

    if(timer === 0)
    {
        StopGame();
    }

    if(timer< 10)
    {
        labelGameTime.style.backgroundColor = "red";
    }
}


    





