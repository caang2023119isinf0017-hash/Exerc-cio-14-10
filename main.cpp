#include <iostream>
int main(){
//1-Leia a idade de uma pessoa e informe se ela é maior ou menor de idade.
/*
	int idade = 0;
	std::cout<<"Digite sua idade: ";
	std::cin>>idade;
	if(idade > 17){
		std::cout<<"Você é maior de idade.";}
	else if(idade < 18){
		std::cout<<"Você é menor de idade.";}
*/


//2-Escreva um programa que exiba uma contagem regressiva de 10 a 1 usando while.
/*
	int num = 10;
	while (num > 0){
		std::cout<<num<<std::endl;
		num--;}
*/


//3-Peça ao usuário números até que ele digite 0. Mostre a soma total.
/*
	int num = 1;
	int soma = 0;
	std::cout<< "SOMA."<<std::endl;
	while(num != 0){
		std::cout<<"Digite um número: ";
		std::cin>>num;
		soma = soma+num;}
	std::cout<<"A soma dos números digitados é: "<<soma;
*/


//4-Solicite um número e mostre sua tabuada de 1 a 10.
/*
	int num = 0;
	int mult = 1;
	std::cout<<"Digite um número e veja sua TABUADA: ";
	std::cin>>num;
	while(mult <= 10){
		std::cout<<mult<<"x"<<num<<"="<<mult*num<<std::endl;
		mult++;}
*/


//5-Leia 10 números e mostre quantos deles são positivos.
/*
	int num = 0;
	int cont = 1;
	int posi = 0;
	while(cont <= 10){
		std::cout<<"Digite um número: ";
		std::cin>>num;
		if(num >= 0){
			std::cout<<"O número "<<num<<" é positivo"<<std::endl;
			posi++;}
		else if(num < 0){
			std::cout<<"O número "<<num<<" é negativo"<<std::endl;}
		cont++;}
	std::cout<<"Foram digitados "<<posi<<" números POSITIVOS."<<std::endl;
*/


//6-Leia as notas até que o usuário digite uma nota negativa. Exiba a média das notas válidas.
/*
	int nota = 0;
	int soma = 0;
	int quant = 0;
	float media = 0.0;
	while(nota >= 0){
		std::cout<<"Digite sua nota: ";
		std::cin>>nota;
		if(nota>0){
			soma = soma+nota;
			quant++;}}
	media = soma/quant;
	std::cout<<"A média das notas digitadas é: "<<media;
*/


//7-Mostre todos os pares de 1 a 50 usando um laço for.
/*
	for(int num = 0; num <= 50; num += 2){
		std::cout<<num<<std::endl;
	}
*/


//8-Crie um jogo simples: o programa define um número secreto entre 1 e 10 e o usuário deve adivinhar. Dê dicas se o número é maior ou menor.
/*
	#include <cstdlib> 
	#include <ctime>   
	srand(time(0));

    int numeroSecreto = (rand() % 10) + 1;
    int palpite;

    while (palpite != numeroSecreto) {                                                                                                              
        std::cout << "Digite seu palpite: ";
        std::cin >> palpite;

        // Verifica se o palpite está correto
        if (palpite == numeroSecreto) {
            std::cout << "Voce acertou o numero secreto " << numeroSecreto <<std::endl;
        } else if (palpite < numeroSecreto) {
            std::cout << "O numero secreto e maior!"<<std::endl;
        } else {
            std::cout << "O numero secreto e menor!"<<std::endl;
        }
    }
*/

//9-Calcule a soma de todos os números ímpares entre 1 e 100.

/*
	int num = 0;
	int cont = 0;
	while(num <= 100){
		if (num % 2 != 0){
			cont = cont + num;
		}
	num++;
	}
	std::cout<< "Soma de todos os números ímpares entre 1 e 100: "<<cont;
*/
}
