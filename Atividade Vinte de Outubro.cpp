#include <iostream>
int main(){
//1-Crie um programa que leia 5 números inteiros e depois exiba todos os valores digitados.
/*
	int numeros[5];
	for(int i = 0; i < 5; i++){
		std::cout<<"Digite um número: ";
		std::cin>>numeros[i];
	}
	for(int r = 0; r < 5; r++){
		std::cout<<numeros[r]<<std::endl;
	}
*/

//2-Leia 10 números inteiros e exiba apenas os números pares.
/*
	int numeros[10];
	for(int i = 0; i < 10; i++){
		std::cout<<"Digite um número: ";
		std::cin>>numeros[i];
	}
	for(int r = 0; r < 10; r++){
		if(numeros[r] % 2 == 0){
		std::cout<<numeros[r]<<std::endl;
		}
		else if(numeros[r] % 2 != 0){}
	}
*/

//3-Leia 4 notas de um aluno, calcule a média e informe se ele está aprovado(média>=7) ou reprovado(média<7).
/*
	double notas[4];
	double soma = 0;
	for(int i = 0; i < 4; i++){
		std::cout<<"Digite a nota "<<i+1<<": ";
		std::cin>>notas[i];
		soma += notas[i];
	}
	double resultado = soma / 4;
	if(resultado >= 7){
		std::cout << "A média é: "<<resultado<<". O aluno está APROVADO.";}
	else if(resultado < 7){
		std::cout << "A média é: "<<resultado<<". O aluno está REPROVADO.";
	}
*/

//4-Leia 6 números inteiros e mostre qual é o maior e qual é o menor número.
/*
	int numeros[6];
	for(int i = 0; i < 6; i++){
		std::cout<<"Digite um número: ";
		std::cin>>numeros[i];}

	
	int maior = numeros[0];
	int menor = numeros[0];
	for(int i = 0; i < 6; i++){
		if(numeros[i] >= maior){
			maior = numeros[i];
		}
		else if(numeros[i] < menor){
			menor = numeros[i];
		}}
	std::cout<<"Maior: "<<maior<<" Menor: "<<menor;
*/

//5-Leia 8 números e conte quantos são positivos e quantos são negatovos.
/*
	int notas[8];
	int posi = 0;
	int neg = 0;
	for(int i = 0; i < 8; i++){
		std::cout<<"Digite um número: ";
		std::cin>>notas[i];
		if(notas[i] >= 0){
			posi++;
		}
		else if(notas[i] < 0){
			neg++;
		}}
	std::cout<<posi<<" números são positivos e "<<neg<<" números são negativos";
*/
}
