const headertop = document.querySelector(".header");
const imagem = document.querySelector(".logo");

const popupOpener = document.querySelector(".open_popup");
const popup = document.querySelector(".popup_menu_donativos");
const popupOverlay = document.querySelector(".popup_overlay");
const donationForm = document.querySelector(".donation_form_container");
const particularButton = document.querySelector(".particular");
const empresaButton = document.querySelector(".empresa");
const donationUnica = document.querySelector(".donation_unica");
const donationMensal = document.querySelector(".donation_mensal");
const qunatityBuntton = document.querySelectorAll(".donation_quantity");
const donateButton = document.querySelector(".donate.button");
const pagamentoUnico = document.querySelector(".pagamentos-unico")
const pagamentoMensal = document.querySelector(".pagamento-mensal")

const item1 = document.getElementById('item1');
const item2 = document.getElementById('item2');
const item3 = document.getElementById('item3');
const item4 = document.getElementById('item4');
const item5 = document.getElementById('item5');

const sitem1 = document.getElementById('sitem1');
const sitem2 = document.getElementById('sitem2');
const sitem3 = document.getElementById('sitem3');
const sitem4 = document.getElementById('sitem4');
const sitem5 = document.getElementById('sitem5');
let donationValue = 0

qunatityBuntton.forEach((value) =>
  value.addEventListener("click", (el) => {
    qunatityBuntton.forEach((button) => {button.classList.remove("donation_quantity_selected")})
    el.target.classList.add("donation_quantity_selected")
    donationValue = parseInt(el.target.value)
  })
);

document.addEventListener("DOMContentLoaded", function() {

  item1.addEventListener("click", function() {
    // Alterna a visibilidade da nova div ao clicar na original
    if (sitem1.style.display === "none") {
      sitem1.style.display = "inline-block";
    } else {
      sitem1.style.display = "none";
    }
  });

  item2.addEventListener("click", function() {
    // Alterna a visibilidade da nova div ao clicar na original
    if (sitem2.style.display === "none") {
      sitem2.style.display = "inline-block";
    } else {
      sitem2.style.display = "none";
    }
  });

  item3.addEventListener("click", function() {
    // Alterna a visibilidade da nova div ao clicar na original
    if (sitem3.style.display === "none") {
      sitem3.style.display = "inline-block";
    } else {
      sitem3.style.display = "none";
    }
  });

  item4.addEventListener("click", function() {
    // Alterna a visibilidade da nova div ao clicar na original
    if (sitem4.style.display === "none") {
      sitem4.style.display = "inline-block";
    } else {
      sitem4.style.display = "none";
    }
  });

  item5.addEventListener("click", function() {
    // Alterna a visibilidade da nova div ao clicar na original
    if (sitem5.style.display === "none") {
      sitem5.style.display = "inline-block";
    } else {
      sitem5.style.display = "none";
    }
  });
});

document.addEventListener("DOMContentLoaded", function() {
  var divOriginal = document.querySelector(".hamburger");
  var divNova = document.querySelector(".menu-bar");

  divOriginal.addEventListener("click", function() {
    if (divNova.style.display === "flex") {
      divNova.style.display = "none";
    } else {
      divNova.style.display = "flex";
    }
  });
});


const donationStatus = { selected: "unica" };
const donationQuantity = {};

const inputList = [
  {
    header: "Email",
    description: "Será enviado um recibo para o email fornecido",id: "email"
  },
  {
    header: "Morada(rua-cidade-cp-pais)",
    description: null,
    donation: "mensal",
  },
  { header: "Nome Completo", empresa: "Nome", description: null,id: "name" },
  { header: "Nif", description: null,id: "nif" },
  { header: "Telemovel", description: null,id: "phone" },
];
function displayPaymentsMethod(status){
  pagamentoMensal.style.display = "none"
  pagamentoUnico.style.display = "none"
  if(status === "mensal") pagamentoMensal.style.display = "flex"
  else if(status === "unica") pagamentoUnico.style.display = "flex"
}
function createBaseInputElement(props, isParticular) {
  if (props.donation && props.donation !== donationStatus.selected)
    return undefined;
  return `
  <div class="donation_form_content">
    <div class="donation_form_content_header">
      <div>${
        isParticular
          ? props.header
          : props.empresa
          ? props.empresa
          : props.header
      }</div>
      ${!props.description ? "" : `<div>${props.description}</div>`}
    </div>
    <div class="donation_form_input">
    <input id="${props.id}"  type="text" placeholder="${props.id}" value="" />
    </div>
  </div>
  `;
}
function checkInput(el, uncheckElement) {
  uncheckElement.checked = false;
  el.target.checked = true;
  uncheckElement.classList.remove("custom_check_box_checked");
  el.target.classList.add("custom_check_box_checked");
  donationForm.innerHTML = inputList
    .map((el) => createBaseInputElement(el, particularButton.checked))
    .filter((el) => el !== null)
    .join("");
}
function changeDonation(el) {
  donationUnica.classList.toggle("donation_selected");
  donationMensal.classList.toggle("donation_selected");

  const target = el.target;
  if (target.innerText === "Donativo Mensal")
    donationStatus.selected = "mensal";
  else donationStatus.selected = "unica";

  

  displayPaymentsMethod(donationStatus.selected)
  donationForm.innerHTML = inputList
    .map((el) => createBaseInputElement(el, particularButton.checked))
    .filter((el) => el !== null)
    .join("");
}
particularButton.addEventListener("click", (el) =>
  checkInput(el, empresaButton)
);
empresaButton.addEventListener("click", (el) =>
  checkInput(el, particularButton)
);


popupOpener.addEventListener("click", (el) => {
  popup.classList.toggle("popup_menu_donativos_open");
  popupOverlay.style.display = "block";
});
donationUnica.addEventListener("click", changeDonation);
donationMensal.addEventListener("click", changeDonation);

popupOverlay.addEventListener("click", () => {
  popup.classList.toggle("popup_menu_donativos_open");
  popupOverlay.style.display = "none";
});

window.addEventListener("scroll", function () {
  var pixels = window.scrollY;

  if (pixels > 20) {
    headertop.style.background = "#214885";
    headertop.style.height = "20vh";
    headertop.style.margin = "0px 0px 50px 0px";
    headertop.style.position = "fixed";
    imagem.style.width = "20vh";
    imagem.style.height = "10vh";
  } else {
    headertop.style.background = "transparent";
    headertop.style.position = "absolute";
    headertop.style.margin = "-15px 0px 0px 0px";
    imagem.style.width = "40vh";
    imagem.style.height = "20vh";
  }
});





document.getElementById('donationForm').addEventListener('submit', function(event) {
  event.preventDefault();

  // const donationType = document.getElementById('donationType').value;
  // const donationAmount = document.getElementById('donationAmount').value;
  const name = document.getElementById('name').value.trim();
  const email = document.getElementById('email').value.trim();
  const phone = document.getElementById('phone').value.trim();
  const nif = document.getElementById('nif').value.trim();
  const agree = document.getElementById('agree').checked;

  if (!name ||  !email ||  !phone||   !nif ||  !agree) {
    alert('Por favor, preencha todos os campos e concorde com os termos.');
    return;
  }

  if (!validateEmail(email)) {
    alert('Por favor, insira um email válido.');
    return;
  }

  if (!validateNIF(nif)) {
    alert('Por favor, insira um NIF válido.');
    return;
  }
  console.log(donationValue)

  // Se todos os dados estiverem corretos, enviar o formulÃ¡rio (simulaÃ§Ã£o)
  if(donationValue === 20) alert('O seu donativo permitirá fornecer aproximadamente 13 refeições');
  if(donationValue === 40) alert('O seu donativo permitirá alimentar diariamente 13 pessoas');
  if(donationValue === 80) alert('O seu donativo permitirá alimentar diariamente 26 pessoas');
  // Aqui vocÃª pode adicionar a lÃ³gica para enviar os dados para o servidor, armazenar em um banco de dados, etc.
});

// FunÃ§Ã£o para validar o formato do email
function validateEmail(email) {
  const re = /\S+@\S+.\S+/;
  return re.test(email);
}

// FunÃ§Ã£o para validar o NIF (NÃºmero de IdentificaÃ§Ã£o Fiscal)
function validateNIF(nif) {
  const re = /^[0-9]{9}$/;
  return re.test(nif);
}