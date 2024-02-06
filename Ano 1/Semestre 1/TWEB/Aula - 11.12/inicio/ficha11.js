/**************************************************
 * Javascript - Ficha 11
 * ************************************************/

window.onload = function () {
    init(); 
};


var form = document.querySelector('form');
// Evento para que o submit não submeta qualquer dados
form.addEventListener('submit', function (event) {
    event.preventDefault();
});



function validaNome(fld) {
    var letters = /^[A-zÀ-ú]+$/;
    if (fld.value.trim().match(letters)) 
		return true;
    return false;
}

function init() {
    painelstatus.style.display = 'none';
    resetPainel();
}

function resetPainel()
{
    
}
