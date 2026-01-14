#pragma once
#include <string>
using std::string;

class Imoveis
{
	double preco, area;
	string codigoImovel, tipoImovel;
	static int idImovel;


public:
	//Getters
	double getPreco() const { return preco; }
	double getArea() const { return area; }
	string getCodigoImovel() const { return codigoImovel; }
	string getTipoImovel() const { return tipoImovel; }

	//Setters
	bool definirPreco(double novoPreco);
	bool definirArea(double novaArea);

	//Funções com implementações específicas
	virtual string descricaoImovel() const = 0;
	virtual void aumentarPreco() = 0;
	virtual int getAndar() const = 0;

	//Destrutor
	virtual ~Imoveis();

	//Construtor
	Imoveis(double precoP, double areaP, const string& tipoImovelP);
};

