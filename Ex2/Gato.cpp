#include "Gato.h"

Gato::Gato(std::string nomeAnimalP, std::string dataNascimentoAnimalP, double pesoAnimalP) :
	Animal(nomeAnimalP, dataNascimentoAnimalP, pesoAnimalP, "Gato")
{

}

std::string Gato::exercitar() {
	std::ostringstream oss;
	
	double pesoAtual = getPeso();
	double novoPeso = pesoAtual * 0.9;
	if (novoPeso >= 2.5) {
		setPeso(novoPeso);
		oss << "Derrubei N jarras e arranhei M pessoas" << "\n";
		return oss.str();
	}
	oss << "Abaixo de peso" << "\n";
	return oss.str();

}

std::string Gato::comer() {
	std::ostringstream oss;
	oss << "o que, este pate reles novamente?" << "\n";
	return oss.str();
}

std::string Gato::getDescricao() const {
	std::ostringstream oss;
	oss << "Nome: " << getNome()
		<< "Data de Nascimento: " << getDataNascimento()
		<< "Peso do Gato: " << getPeso()
		<< "Especie: " << getEspecieAnimal();

	return oss.str();
}

