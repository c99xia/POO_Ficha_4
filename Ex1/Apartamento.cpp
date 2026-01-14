#include "Apartamento.h"
#include <sstream>

Apartamento::Apartamento(double areaP, int andarP, int numeroAssoalhadasP) :
	Imoveis(areaP * 10, areaP, "Apartamento"), andar(andarP), numeroAssoalhadas(numeroAssoalhadasP) {

}

std::string Apartamento::descricaoImovel() const {
	std::ostringstream oss;
	oss << "Preco: " << getPreco()
		<< "Area: " << getArea()
		<< "Andar: " << getAndar()
		<< "Numero de Assoalhadas: " << getNumeroAssoalhadas();
	return oss.str();
}

void Apartamento::aumentarPreco() {
	double precoAtual = getPreco();
	double precoNovo = precoAtual * (1 + (getNumeroAssoalhadas() / 100));
	definirPreco(precoNovo);
}
