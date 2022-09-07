#include "controladorasapresentacao.h"

//--------------------------------------------------------------------------------------------
// Implementações de métodos de classes controladoras.
void ListarHospedagem::listar(){
        cout << "\n\nHOSPEDAGENS\n\n" << endl;
        int numhospedagem = 0;
        std::list<string> myhospedagem = {"Estados Unidos", "Brasil", "China"};
        for(string x : myhospedagem){
                numhospedagem = ++numhospedagem;
                cout << x  << endl;
        }
        cout <<"Temos: " << numhospedagem << "hospedagem." << endl;
        cout << "\n\n" << endl;

        return;
}

void ControladoraMenuacesso::executar(){
    Email email;
    Senha senha;

    std::list<string> myhospedagem = {"Hospedagem Turquia", "Hospedagem Brasil", "Hospedagem China"};
    // Mensagens a serem apresentadas na tela inicial.

    char texto1[]="Selecione um dos servicos : ";
    char texto2[]="1 - Fazer login.";
    char texto3[]="2 - Listar hospedagem.";
    char texto4[]="3 - Sair do sistema.";

    int campo;                                                                                  // Campo de entrada.
    string entrada;

    bool apresentar = true;                                                                     // Controle de laço.

    while(apresentar){
        //CLR_SCR;                                                                                // Limpa janela.

        cout << texto1 << endl;                                                                 // Imprime nome do campo.
        cout << texto2 << endl;                                                                 // Imprime nome do campo.
        cout << texto3 << endl;                                                                 // Imprime nome do campo.
        cout << texto4 << endl;                                                                 // Imprime nome do campo.

        campo = getch() - 48;                                                                   // Leitura do campo de entrada e conversão de ASCII.

        switch(campo){
            case 1:
                //cout << "\n\nPedir email e senha\n\n" << endl;
                cout << "Digite o email: " << endl;
                cin >> entrada;
               email.setValor(entrada);
                cout << "Digite a senha: " << endl;
                cin >> entrada;
               senha.setValor(entrada);
               if((email.getValor() != " ") && (email.getValor() != " ")){
                    cout << "Email: " << email.getValor() << endl;
                    cout << "Senha: ******" << endl;
                    ControladoraMenuacesso::menulogado();
               }
                break;
            case 2:
                ControladoraMenuacesso::listar();
                ControladoraMenuacesso::executar();
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
    cout << "\n\nUsuario logado" << endl;
    char texto1[]="Selecione um dos servicos : ";
    char texto2[]="1 - Cadastrar hospedagem.";
    char texto3[]="2 - Editar hospedagem.";
    char texto4[]="3 - Cadastrar avaliacao.";
    char texto5[]="4 - Descadastrar avaliacao.";
    char texto6[]="5 - Encerrar sessao.";

    cout << texto1 << endl;                                                                 // Imprime nome do campo.
    cout << texto2 << endl;                                                                 // Imprime nome do campo.
    cout << texto3 << endl;                                                                 // Imprime nome do campo.
    cout << texto4 << endl;                                                                 // Imprime nome do campo.
    cout << texto5 << endl;                                                                 // Imprime nome do campo.
    cout << texto6 << endl;                                                                 // Imprime nome do campo.

     int campo;
    cout << "Digite a opcao: " << endl;
                cin >> campo;

    switch(campo){
            case 1:
                cout << "\n\nCadastrar hospedagem\n\n" << endl;
                ControladoraMenuacesso::menulogado();
                break;
            case 2:
                cout << "\n\nEditar hospedagem\n\n" << endl;
                ControladoraMenuacesso::menulogado();
                break;
            case 3:
                cout << "\n\nCadastrar avaliacao\n\n" << endl;
                ControladoraMenuacesso::menulogado();
                break;
            case 4:
                cout << "\n\nDescadastrar avaliacao\n\n" << endl;
                ControladoraMenuacesso::menulogado();
                break;
            case 5:
                cout << "\n\nEncerrar sesao\n\n" << endl;
                ControladoraMenuacesso::executar();
                break;
    }
}
