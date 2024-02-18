'use strict';
let a=3;
let b=6;
let c;

console.log("---A---");

console.log("1 =",a+b);
console.log("2 =",a+"c");
console.log("3 =",a+"5");
console.log("4 =",a+"b");
console.log("5 =",a+c);
console.log("6 =",c);
console.log(`Variavel a*b = ${a*b} ( a=${a} e b=${b})`);

console.log("---B---");

c=a+b;
console.log("1 =",c);
c=a+"---"+b;
console.log("2 =",c);
c="6";
console.log("3 =",a+c);
console.log("4 =",b===c);
console.log("5 =",b==c);
console.log("6 =",b!==c);
console.log("7 =",b!=c);
console.log("8 =",a++);
console.log('9 = ',a);
a=4;
console.log('10 = ',++a);
console.log('11 = ',+a);

console.log("---C---");
//Erro: Deve ser declarado com um valor e não pode ser alterado
const disciplina="Linguagens Script";
//disciplina="Linguagens Script";
console.log(disciplina);

console.log("---D---")
'use strict';
let uc=' Linguagens';
uc+=' Script';
console.log('Disciplina:'+uc +' - 2 semestre');

console.log("---E---")
const nome1='Nuno';
const nome2='Ricardo';
const resultado = `Os nomes são ${nome1} e ${nome2}`;
console.log(resultado);
console.log(resultado+' e Filipe');

console.log("---Exercicio 2---");
console.log("---A---");

const num1 = 25;
const num2 = 20;
const num3 = 10;

if(num1==num2)
console.log("Os numeros são iguais")
else
if(num1>num2)
console.log(num1)
else
console.log(num2)

console.log("---B---");

if(num1>num2 && num1>num3)
console.log(num1)
else
if(num2>num1 && num2>num3)
console.log(num2)
else
console.log(num3)

console.log("---C---")

const min = 1;
const max = 5;
let i = 0;
let result = 0;

for(i=min;i<=max;i++)
{
 result += i;
}

console.log(`Somatorio: ${result}`);

console.log("---Exercicio 3---")
console.log("---A---")
const numeros = [5,10,-12,2,10,-5,-2,-3];
console.log(numeros.length);

console.log("---B---")

let maior = 0;

for(i=0;i<numeros.length;i++)
{
    if(maior<numeros[i])
    maior = numeros[i];
}

console.log(`Maior numero: ${maior}`)

console.log("---C---");

let soma = 0;

for(i=0;i<numeros.length;i++)
{
    if(numeros[i] > 0)
    soma += numeros[i];
}

console.log(`Soma dos numeros positivos: ${soma}`)

console.log("---Exercicio 4---")
console.log("---A---")

let n = 50
if (true) {
 let n = 2
 console.log(n)
}
console.log(n);

console.log("---B---")

let k = 50
if (true) {
console.log(k);
k = 2
console.log(k)
}
console.log(k);

console.log("---C---")

let p = 50
if (true) {
console.log(p);
p = 2
console.log(p)
}
console.log(p);

console.log("---D---")

let str = 'Linguagens Script';
function fazQualquerCoisa() {
console.log(str);
}
fazQualquerCoisa(); 

console.log("---E---")

let str2 = 'Linguagens';
function fazQualquerCoisa2() {
str2 = 'Script';
}
console.log(str2);
fazQualquerCoisa2();
console.log(str2);

console.log("---F---")

const palavras=['angular','bootstrap','javascript','vue','svelte','react'];
const palavra=['amber, '];

function imprimeArray(frase)
{
    console.log(frase)
}

imprimeArray(palavras);

function insertBegin(frase,palavra)
{
    console.log(frase + palavra);
}

insertBegin(palavra,palavras);
