#pragma once
#include "Imoveis.h"
class Imobiliaria
{
	Imoveis* imoveis[100]; //Uso aqui o ponteiro por causa do polimorfismo
	int numImoveis;

public:
	//Operações adicionar/remover
	bool adicionarImovel(Imoveis* novoImovel);
	bool removerImovel(const string& codigoImovel);

	std::string getImovelAndar(int andar) const;
	const Imoveis* obterVisao(const string& codigoImovel) const; //só de leitura
	std::string toString(const string& codigoImovel) const;
	void aumentar();
	std::string listarTodos() const; //Listar todos os imóveis

	//Construtor
	Imobiliaria();
};

