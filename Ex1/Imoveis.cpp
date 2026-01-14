#include "Imoveis.h"
#include <stdexcept>
#include <sstream>

int Imoveis::idImovel = 0;

Imoveis::Imoveis(double precoP, double areaP, const string& tipoImovelP) :
	preco(precoP > 0 ? precoP : throw std::invalid_argument("Preco Invalido")),
	area(areaP > 0 ? areaP : throw std::invalid_argument("Area Invalida")),
	tipoImovel((tipoImovelP != "Apartamento" && tipoImovelP != "Loja") ? throw std::invalid_argument("tipoImovel Invalido") : tipoImovelP)
{
	codigoImovel = std::to_string(idImovel) + "-" + tipoImovelP;
	idImovel++;
}

bool Imoveis::definirPreco(double novoPreco) {
	if (novoPreco > 0) {
		preco = novoPreco;
		return true;
	}
	else
	{
		throw std::invalid_argument("Preco Invalido");
		return false;
	}
}

bool Imoveis::definirArea(double novaArea) {
	if (novaArea > 0) {
		area = novaArea;
		return true;
	}
	else {
		throw std::invalid_argument("Area Invalido");
		return false;
	}
}

Imoveis::~Imoveis() {

}