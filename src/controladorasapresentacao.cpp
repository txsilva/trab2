#include "controladorasapresentacao.h"

//--------------------------------------------------------------------------------------------
// Implementações de métodos de classes controladoras.

void Menuacesso::executar(){

    // Mensagens a serem apresentadas na tela inicial.

    char texto1[]="Selecione um dos servicos : ";
    char texto2[]="1 - Listar hospedagem.";
    char texto3[]="2 - Fazer login.";
    char texto4[]="3 - Sair do sistema.";

        int campo;                                                                                  // Campo de entrada.

    bool apresentar = true;                                                                     // Controle de laço.

    while(apresentar){
        CLR_SCR;                                                                                // Limpa janela.

        cout << texto1 << endl;                                                                 // Imprime nome do campo.
        cout << texto2 << endl;                                                                 // Imprime nome do campo.
        cout << texto3 << endl;                                                                 // Imprime nome do campo.
        cout << texto4 << endl;                                                                 // Imprime nome do campo.

        campo = getch() - 48;                                                                   // Leitura do campo de entrada e conversão de ASCII.

        switch(campo){
            case 1:
                cout << "\n\nExibir lista de hospedagens\n\n" << endl;
                break;
            case 2:
                cout << "\n\nPedir email e senha\n\n" << endl;
                break;
            case 3:
                cout << "\n\nVoce saiu do sistema\n\n" << endl;
                break;
        }
        apresentar = false;
    }
    return;
}

//--------------------------------------------------------------------------------------------
