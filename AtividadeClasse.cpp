#include <iostream>
#include <string>
class Animal{
	public:
	std::string espécie;
	std::string dieta;
	std::string grupo;
};
int main(){
	Animal Porco;
	Porco.espécie = "Sus scrofa domesticus";
	Porco.dieta = "Onívoro";
	Porco.grupo = "Mamífero";
	
	std::cout<<Porco.dieta;
	
	Animal Axolote;
	Axolote.espécie = "Ambystoma mexicanum";
	Axolote.dieta = "Carnívoro";
	Axolote.grupo = "Anfíbio";
	
	std::cout<<"\n"<<Axolote.dieta;
}
