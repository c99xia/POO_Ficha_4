#include "Gato.h"

Gato::Gato(std::string nomeAnimalP, std::string dataNascimentoAnimalP, double pesoAnimalP) :
	Animal(nomeAnimalP, dataNascimentoAnimalP, pesoAnimalP, "Gato")
{

}

std::string Gato::exercitar() {

}

std::string Gato::comer() {
	std::ostringstream oss;
	oss << "o que, este pate reles novamente?" << "\n";
	return oss.str();
}

std::string Gato::getDescricao() {
	std::ostringstream oss;
	oss << "Nome: " << getNome()
		<< "Data de Nascimento: " << getDataNascimento()
		<< "Peso do Gato: " << getPeso()
		<< "Especie: " << getEspecieAnimal();

	return oss.str();
}