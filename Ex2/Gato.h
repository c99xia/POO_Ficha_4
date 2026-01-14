#pragma once
#include "Animal.h"
class Gato :
	public Animal
{
public:
	//O construtor do cão fica assimm
	//Quando criamos um cão sabemos que a especie dele é cão logo não precisa de entrar como parâmetro no construtor
	//O nome varia de cão para cão, a data de nascimento varia de cão para cão e o peso também, logo esses têm que entrar como parâmetro no construtor
	Gato(std::string nomeAnimalP, std::string dataNascimentoAnimalP, double pesoAnimalP);

	std::string exercitar() override;
	std::string comer() override;
	std::string getDescricao() override;
};

