#include "Cao.h"


Cao::Cao(std::string nomeAnimalP, std::string dataNascimentoAnimalP, double pesoAnimalP) :
	Animal(nomeAnimalP, dataNascimentoAnimalP, pesoAnimalP, "Cao")
{

}


std::string Cao::exercitar() {
	std::ostringstream oss;
	oss << "corri x quilometros" << "\n";
	return oss.str();
}

std::string Cao::comer() {
	std::ostringstream oss;


	double pesoAtual = getPeso();
	double novoPeso = pesoAtual * 1.05;
	if (novoPeso <= 20 && novoPeso > 0) {
		setPeso(novoPeso);
		oss << "Biscoitos bons. Obrigado" << "\n";
		return oss.str();
	}
	oss << "Sobrepeso" << "\n";
	return oss.str();

}

std::string Cao::getDescricao() const {
	std::ostringstream oss;
	oss << "Nome: " << getNome()
		<< "Data de Nascimento: " << getDataNascimento()
		<< "Peso do Cao: " << getPeso()
		<< "Especie: " << getEspecieAnimal();

	return oss.str();
}