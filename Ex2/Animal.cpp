
#include "Animal.h"

int Animal::proximoNumero = 1000;

Animal::Animal(std::string nomeAnimalP, std::string dataNascimentoAnimalP, double pesoAnimalP, std::string especieAnimalP) :
	nomeAnimal(nomeAnimalP),
	dataNascimentoAnimal(dataNascimentoAnimalP),
	pesoAnimal(pesoAnimalP >0 ? pesoAnimalP : throw std::invalid_argument("Peso Invalido")),
	especieAnimal(especieAnimalP)
{
	std::ostringstream oss;
	oss << proximoNumero << "-" << especieAnimal;
	codigoAnimal = oss.str();
	proximoNumero++;
}

bool Animal::setPeso(double novoPeso) {
	if (novoPeso > 0) {
		pesoAnimal = novoPeso;
		return true;
	}
	return false;
}

Animal::~Animal() {

}