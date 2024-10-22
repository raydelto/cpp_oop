#pragma once
#include <string>

class Usuario
{
public:
    Usuario(std::string nombre, std::string apellido, std::string usuario);
    ~Usuario();
    void Saludar();
    void SetNombre(std::string nombre);
private:
    std::string _nombre;
    std::string _apellido;
    std::string _usuario;
};
