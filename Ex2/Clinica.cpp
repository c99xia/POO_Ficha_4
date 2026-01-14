#include "Clinica.h"

Clinica::Clinica() : nAnimais(0) {
	for (int i = 0; i < TAM; i++) {
		clinica[i] = nullptr;
	}
}

bool Clinica::registarAnimal(Animal* novoAnimal) {
	if (novoAnimal == nullptr) {
		return false;
	}

	for (int i = 0; i < nAnimais; i++) {
		if (clinica[i]->getCodigoAnimal() == novoAnimal->getCodigoAnimal()) {
			return false;
		}
	}
	clinica[nAnimais] = novoAnimal;
	nAnimais++;
	return true;
}

bool Clinica::removerAnimal(const std::string& codigoAnimal) {
	for (int i = 0; i < nAnimais; i++) {
		if (clinica[i]->getCodigoAnimal() == codigoAnimal) {
			clinica[i] = clinica[nAnimais - 1];
			nAnimais--;
			return true;
		}
	}
	return false;
}

const Animal* Clinica::obterVisao(const std::string& codigoAnimal) const {
	for (int i = 0; i < nAnimais; i++) {
		if (clinica[i]->getCodigoAnimal() == codigoAnimal) {
			return clinica[i];
		}
	}
	return nullptr;
}

std::string Clinica::obterDescricao(const std::string& codigoAnimal) {
	std::ostringstream oss;
	const Animal* animal = obterVisao(codigoAnimal);
	if (animal == nullptr) {
		oss << "Animal nao encontrado" << "\n";
		return oss.str();
	}

	oss << "Descricao: " << animal->getDescricao() << "\n";
	return oss.str();
}

std::string Clinica::listarTudo() const {
	std::ostringstream oss;
	for (int i = 0; i < nAnimais; i++) {
		oss << "Descricao: " << clinica[i]->getDescricao() << "\n";
	}
	return oss.str();
}

void Clinica::alimentar() {
	for (int i = 0; i < nAnimais; i++) {
		std::cout << clinica[i]->comer() << std::endl;
	}
}

void Clinica::exercitar() {
	for (int i = 0; i < nAnimais; i++) {
		std::cout << clinica[i]->exercitar() << std::endl;
	}
}