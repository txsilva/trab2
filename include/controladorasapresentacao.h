#ifndef CONTROLADORASAPRESENTACAO_H_INCLUDED
#define CONTROLADORASAPRESENTACAO_H_INCLUDED

#include <conio.h>
#include <iostream>
#include <string.h>

#include "dominios.h"
#include "entidades.h"
#include "interfaces.h"

#define CLR_SCR system("cls");

//--------------------------------------------------------------------------------------------
// Declarações de classes controladoras e implementações de métodos.

//--------------------------------------------------------------------------------------------

class Menuacesso{
    private:
        Usuario usuario;
    public:
        void executar();

        void setEmail(const Email&);
        Email getEmail() const;

};

#endif // CONTROLADORASAPRESENTACAO_H_INCLUDED
