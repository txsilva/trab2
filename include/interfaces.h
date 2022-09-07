#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include <string.h>
#include <list>

#include "dominios.h"
#include "entidades.h"

//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
// Adequar as declara��es das interfaces de acordo com as necessidades.
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------

// Forward declarations.

//--------------------------------------------------------------------------------------------
// Declara��es das interfaces da camada de apresenta��o.

class IApresentacaoHosp {
    std::list<string> myhospedagem = {};
    public:
        virtual void listar(string myhospedagem);
        virtual ~IApresentacaoHosp(){}
};

//--------------------------------------------------------------------------------------------
// Declara��es das interfaces da camada de servi�o.
class IServicoAutenticacao {
    public:
        virtual bool autenticar(Email&, Senha&) = 0;
        virtual ~IServicoAutenticacao(){}
};

#endif // INTERFACES_H_INCLUDED
