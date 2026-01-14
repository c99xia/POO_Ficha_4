#include <iostream>
#include "Animal.h"
#include "Cao.h"
#include "Gato.h"
#include "Clinica.h"

int main() {

    Cao cao1("Pomar", "2001", 15.0);
    std::cout << cao1.getDescricao();
    return 0;
}