#pragma once
#include <string>
#include <sstream>
#include <stdexcept>
#include <iostream>

class Animal
{
	std::string nomeAnimal, dataNascimentoAnimal, codigoAnimal, especieAnimal;
	double pesoAnimal;
	static int proximoNumero;

public:

	//Regra do construtor, os parâmetros do construtor são os dados que vêm de fora ou seja o que o utilizador fornece
	//Ou seja dados que variam de objeto para objeto
	//Ou seja dados que o utilizador conhece ao criar o objeto
	//Não meter dados gerados automaticamente (tipo códigoAnimal)
	//Não meter dados calculados a partir de outros dados
	//Não colocar dados static (partilhados por todos)
	Animal(std::string nomeAnimalP, std::string dataNascimentoAnimalP, double pesoAnimalP, std::string especieAnimalP);

	//Getters
	std::string getNome() const { return nomeAnimal; }
	double getPeso() const { return pesoAnimal; }
	std::string getDataNascimento() const { return dataNascimentoAnimal; }
	std::string getCodigoAnimal() const { return codigoAnimal; }
	std::string getEspecieAnimal() const { return especieAnimal; }

	//Setters meti protected pois se fosse public todos podiam usar esse setter
protected:
	bool setPeso(double novoPeso);

public:
	//Virtual Puro
	virtual std::string comer() = 0;
	virtual std::string exercitar() = 0;
	virtual std::string getDescricao() const = 0;

	//Destrutor virtual
	virtual ~Animal();
};

