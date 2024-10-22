#include <iostream>
#include "Usuario.h"

Usuario::Usuario(std::string nombre, std::string apellido, std::string usuario):_nombre(nombre), _apellido(apellido), _usuario(usuario)
{
}

void Usuario::Saludar()
{
    std::cout << _nombre << " te manda saludos" << std::endl;
}

void Usuario::SetNombre(std::string nombre)
{
    _nombre = nombre;
}


Usuario::~Usuario()
{
    std::cout << "Está muriendo el usuario " << _nombre << std::endl;
}