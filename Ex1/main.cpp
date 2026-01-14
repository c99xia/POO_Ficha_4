#include "Apartamento.h"
#include "Loja.h"
#include "Imobiliaria.h"
#include <iostream>

int main() {

    Apartamento apt1(50.0, 3, 2);  
    Apartamento apt2(80.0, 1, 3);  
    Loja loja1(100.0);            

    Imobiliaria imob;

    if (imob.adicionarImovel(&apt1)) {
        std::cout << "Apartamento 1 adicionado!\n";
    }
    if (imob.adicionarImovel(&apt2)) {
        std::cout << "Apartamento 2 adicionado!\n";
    }
    if (imob.adicionarImovel(&loja1)) {
        std::cout << "Loja 1 adicionada!\n";
    }

    std::cout << imob.listarTodos() << "\n";

    std::cout << imob.getImovelAndar(0) << "\n";

    // Aumentar preços
    imob.aumentar();
    std::cout << imob.listarTodos() << "\n";

    return 0;
}