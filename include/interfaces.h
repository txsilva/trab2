#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include <string.h>
#include <list>

#include "dominios.h"
#include "entidades.h"

//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
// Adequar as declarações das interfaces de acordo com as necessidades.
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------

// Forward declarations.

//--------------------------------------------------------------------------------------------
// Declarações das interfaces da camada de apresentação.

class IApresentacaoHosp {
    std::list<string> myhospedagem = {};
    public:
        virtual void listar(string myhospedagem);
        virtual ~IApresentacaoHosp(){}
};

//--------------------------------------------------------------------------------------------
// Declarações das interfaces da camada de serviço.
class IServicoAutenticacao {
    public:
        virtual bool autenticar(Email&, Senha&) = 0;
        virtual ~IServicoAutenticacao(){}
};

#endif // INTERFACES_H_INCLUDED
