#ifndef CONTROLADORASAPRESENTACAO_H_INCLUDED
#define CONTROLADORASAPRESENTACAO_H_INCLUDED

#include <conio.h>
#include <iostream>
#include <string.h>
#include <string.h>
#include <list>

#include "dominios.h"
#include "entidades.h"
#include "interfaces.h"

#define CLR_SCR system("cls");

//--------------------------------------------------------------------------------------------
// Declarações de classes controladoras e implementações de métodos.

//--------------------------------------------------------------------------------------------

class ListarHospedagem{
    private:
    public:
        void listar();
};

class ControladoraMenuacesso:public ListarHospedagem{
    private:
        Email email;
        Senha senha;
    public:
        void executar();
        void menulogado();
        void setEmail(const Email&);
        getEmail() const;
        void setSenha(const Senha&);
        getSenha() const;
};

#endif // CONTROLADORASAPRESENTACAO_H_INCLUDED
