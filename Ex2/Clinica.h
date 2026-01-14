#pragma once
#include "Animal.h"

class Clinica
{
	const static int TAM = 200;
	Animal* clinica[TAM];
	int nAnimais;

public:
	bool registarAnimal(Animal* novoAnimal);
	bool removerAnimal(const std::string& codigoAnimal);
	const Animal* obterVisao(const std::string& codigoAnimal) const;
	std::string obterDescricao(const std::string& codigoAnimal);
	std::string listarTudo() const;
	void alimentar();
	void exercitar();

	Clinica();
};

