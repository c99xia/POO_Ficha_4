#pragma once
#include "Imoveis.h"
class Apartamento :
    public Imoveis
{
    int andar, numeroAssoalhadas;

public:

    //Construtor
    Apartamento(double area, int andar, int numeroAssoalhadasP);

    //Funções implementação específicas
    string descricaoImovel() const override;
    void aumentarPreco() override;
    int getAndar() const override { return andar; }

    //Funções Normais
    int getNumeroAssoalhadas() const { return numeroAssoalhadas; }
};

