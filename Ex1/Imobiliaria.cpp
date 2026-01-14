#include "Imobiliaria.h"
#include <sstream>

Imobiliaria::Imobiliaria() : numImoveis(0) {
	for (int i = 0; i < 100; i++) {
		imoveis[i] = nullptr;
	}
}

bool Imobiliaria::adicionarImovel(Imoveis* novoImovel) {
	if (numImoveis >= 100 || novoImovel == nullptr) {
		return false;
	}

	for (int i = 0; i < numImoveis; i++) {
		if (imoveis[i]->getCodigoImovel() == novoImovel->getCodigoImovel()) {
			return false;
		}
	}
	imoveis[numImoveis] = novoImovel;
	numImoveis++;
	return false;
}

bool Imobiliaria::removerImovel(const string& codigoImovel) {
	for (int i = 0; i < numImoveis; i++) {
		if (imoveis[i]->getCodigoImovel() == codigoImovel) {
			imoveis[i] = imoveis[numImoveis - 1];
			numImoveis--;
			return true;
		}
	}
	return false;
}

std::string Imobiliaria::getImovelAndar(int andar) const {
	std::ostringstream oss;
	for (int i = 0; i < numImoveis; i++) {
		if (imoveis[i]->getAndar() == andar) {
			oss << "Descricao: " << imoveis[i]->descricaoImovel();
		}
	}
	return oss.str();
}

const Imoveis* Imobiliaria::obterVisao(const string& codigoImovel) const {
	for (int i = 0; i < numImoveis; i++) {
		if (imoveis[i]->getCodigoImovel() == codigoImovel) {
			return imoveis[i];
		}
	}
	return nullptr;
}

std::string Imobiliaria::toString(const string& codigoImovel) const {
	const Imoveis* imovel = obterVisao(codigoImovel); 
	if (imovel == nullptr) {
		return "Imovel nao encontrado!";
	}

	std::ostringstream oss;
	oss << "Descricao: " << imovel->descricaoImovel();
	return oss.str();
}

void Imobiliaria::aumentar() {
	for (int i = 0; i < numImoveis; i++) {
		imoveis[i]->aumentarPreco();
	}
}

std::string Imobiliaria::listarTodos() const {
	std::ostringstream oss;
	for (int i = 0; i < numImoveis; i++) {
		oss << "Listar todos: " << imoveis[i]->descricaoImovel() << "\n";
	}
	return oss.str();
}