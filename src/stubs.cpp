#include "stubs.h"

//--------------------------------------------------------------------------------------------
// Valores usados como gatilhos de erros.

const string StubServicoAutenticacao::INVALIDO = "12345";

//--------------------------------------------------------------------------------------------
// Implementações dos métodos de classes stub.

bool StubServicoAutenticacao::autenticar(Email email, Senha senha){
    if(email.getValor().compare(INVALIDO) == 0)
        return false;
    return true;
}
