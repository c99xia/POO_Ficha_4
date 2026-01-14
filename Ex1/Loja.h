#pragma once
#include "Imoveis.h"
class Loja :
    public Imoveis
{
public:
    //Construtor
    Loja(double area);

    //Funções implementação específicas
    string descricaoImovel() const override;
    void aumentarPreco() override;
    int getAndar() const override { return 0; }
};

