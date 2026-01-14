#include "Loja.h"
#include <sstream>

Loja::Loja(double area) : Imoveis(15 * area, area, "Loja") {

}

std::string Loja::descricaoImovel() const {
	std::ostringstream oss; 
	oss << "Area: " << getArea()
		<< "Preco: " << getPreco()
		<< "Tipo de Imovel: " << getTipoImovel()
		<< "Codigo de Imovel: " << getTipoImovel();

	return oss.str();
}

void Loja::aumentarPreco() {
	double precoAtual = getPreco();
	double novoPreco = precoAtual * 1.01;
	definirPreco(novoPreco);
}

