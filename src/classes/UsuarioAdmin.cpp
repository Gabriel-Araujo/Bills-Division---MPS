#include "../headers/UsuarioAdmin.h"
#include "../headers/Usuario.h"
#include <string>
#include <iostream>
using namespace std;

/*
Construtor Padrão da classe UsuarioAdmin.
*/

UsuarioAdmin::UsuarioAdmin(): Usuario()
{
    setPrivilegios(true);
}

