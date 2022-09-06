#include "controladorasapresentacao.h"

//--------------------------------------------------------------------------------------------
// Implementações de métodos de classes controladoras.

void ControladoraMenuacesso::executar(){
    Email email;
    Senha senha;
    // Mensagens a serem apresentadas na tela inicial.

    char texto1[]="Selecione um dos servicos : ";
    char texto2[]="1 - Fazer login.";
    char texto3[]="2 - Listar hospedagem.";
    char texto4[]="3 - Sair do sistema.";

    int campo;                                                                                  // Campo de entrada.
    string entrada;

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
                cout << "\n\nPedir email e senha\n\n" << endl;
                cout << "Digite o email: " << endl;
                cin >> entrada;
               email.setValor(entrada);
                cout << "Digite a senha: " << endl;
                cin >> entrada;
               senha.setValor(entrada);
               if((email.getValor() != " ") && (email.getValor() != " ")){
                    cout << email.getValor() << endl;
                    cout << senha.getValor() << endl;
                    ControladoraMenuacesso::menulogado();
               }
                break;
            case 2:
                cout << "\n\nExibir lista de hospedagens\n\n" << endl;
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

void ControladoraMenuacesso::menulogado(){

}
