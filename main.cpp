#include "Usuario.h"
#include "Impresora.h"
#include <iostream>

void Branlyficar(Usuario *usuario)
{
    usuario->SetNombre("Branly");
    usuario->Saludar();
}

int main()
{
    Usuario manuel("Manuel", "Custodio", "mcustorio");
    Usuario *carlos = new Usuario("Carlos", "Polo", "cpolo");
    manuel.Saludar();
    Usuario *nulo = nullptr;
    Branlyficar(&manuel);
    Branlyficar(carlos);
    Impresora impresora;
    delete carlos;
    return 0;
}
