#include <iostream>
#include <stdlib.h>

#ifndef _WIN32
#define CLEAR "clear"

#else

#define CLEAR "cls"
#endif

using namespace std;

typedef struct {
    string nomePessoa;
    char emailPessoa[200];
    int diaNascimento;
    int mesNascimento;
    int anoNascimento;
} Pessoa;

int main() {

    Pessoa agenda[1000];
    int opcaoEscolha, dia, mes, ano;
    char opcaoEntrada, letra;
    string saida, nome;
    int i = 0, j = 0;
    char alfabeto[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

    do {

        cout << "************************************************" << endl;
        cout << "Seja bem vindo(a)!" << endl;
        cout << "Digite a opcao desejada:" << endl;
        cout << "1 - para cadastrar a pessoa na agenda de aniversariantes" << endl;
        cout << "2 - para excluir uma pessoa" << endl;
        cout << "3 - para alterar o dia, mes ou ano do aniversario de alguem" << endl;
        cout << "4 - para consultar aniversariantes de um dia especifico" << endl;
        cout << "5 - para consultar aniversariantes de um mes especifico" << endl;
        cout << "6 - para consultar aniversariantes a partir da primeira letra do nome" << endl;
        cout << "7 - para mostrar toda a agenda ordenada pelo nome" << endl;
        cout << "8 - para mostrar toda a agenda ordenada pelo mes" << endl; 
        cout << "9 - para sair" << endl;
        cout << "************************************************" << endl;
        cin >> opcaoEntrada;

        switch (opcaoEntrada) {

        case '1':

            do {
                cout << "Digite o primeiro nome da pessoa - (Nao esqueca da primeira letra maiuscula): ";
                cin >> agenda[i].nomePessoa;
                cout << "Digite o dia do nascimento de " << agenda[i].nomePessoa << ": ";
                cin >> agenda[i].diaNascimento;    
                cout << "Digite o mes de nascimento (EM NUMERO) de " << agenda[i].nomePessoa << ": ";
                cin >> agenda[i].mesNascimento;
                cout << "Digite o ano de nascimento de " << agenda[i].nomePessoa << ": ";
                cin >> agenda[i].anoNascimento;
                cout << "Pessoa cadastrada com sucesso! Digite 9 para voltar." << endl;
                cin >> saida;
                system("cls");

            } while (saida != "9");

        break;
        case '2':

            do {
                cout << "Digite o nome da pessoa que deseja excluir: ";
                cin >> nome;

                for (int i = 0; i < 1000; i++) {
                    if (nome == agenda[i].nomePessoa) {
                        agenda[i].nomePessoa = " ";
                        agenda[i].diaNascimento = 0;
                        agenda[i].mesNascimento = 0;
                        agenda[i].anoNascimento = 0;
                        cout << nome << " foi exluido(a) da agenda com sucesso." << endl;
                    }
                }
                cout << "Digite 9 para sair ou qualquer outro botao para excluir outra pessoa." << endl;
                cin >> saida;
                system("cls");

            } while (saida != "9");

        break;
        case '3':
            do {
                cout << "O que voce deseja alterar? Escolha uma opcao abaixo:" << endl;
                cout << "1 - dia do aniversariante" << endl;
                cout << "2 - mes do aniversariante" << endl;
                cout << "3 - ano do aniversariante" << endl;
                cout << "9 - sair" << endl;
                cin >> opcaoEscolha;

                if (opcaoEscolha == 1) {
                    cout << "Digite o nome cadastrado atualmente: ";
                    cin >> nome;
                    for (int i = 0; i < 1000; i++) {
                        if (nome == agenda[i].nomePessoa) {
                            cout << "Digite o novo dia do aniversariante: " << endl;
                            cin >> dia;
                            agenda[i].diaNascimento = dia;
                            cout << "Dia alterado com sucesso." << endl;
                        }
                    }
                    cout << "Digite 9 para sair ou qualquer outro botao para voltar ao menu de alteracoes." << endl;
                    cin >> saida;
                    system("cls");

                } else if (opcaoEscolha == 2) {

                    cout << "Digite o nome cadastrado atualmente: ";
                    cin >> nome;
                    for (int i = 0; i < 1000; i++) {
                        if (nome == agenda[i].nomePessoa) {
                            cout << "Digite o novo mes do aniversariante: " << endl;
                            cin >> mes;
                            agenda[i].mesNascimento = mes;
                            cout << "Mes alterado com sucesso." << endl;
                        }
                    }
                    cout << "Digite 9 para sair ou qualquer outro botao para voltar ao menu de alteracoes." << endl;
                    cin >> saida;
                    system("cls");

                } else if (opcaoEscolha == 3) {

                    cout << "Digite o nome cadastrado atualmente: ";
                    cin >> nome;
                    for (int i = 0; i < 1000; i++) {
                        if (nome == agenda[i].nomePessoa) {
                            cout << "Digite o novo ano do aniversariante: " << endl;
                            cin >> ano;
                            agenda[i].anoNascimento = ano;
                            cout << "Ano alterado com sucesso." << endl;
                        }
                    }
                    cout << "Digite 9 para sair ou qualquer outro botao para voltar ao menu de alteracoes." << endl;
                    cin >> saida;
                    system("cls");
                }
            } while (opcaoEscolha != 9);

        break;
        case '4':

            do {
                cout << "Digite o dia desejado: ";
                cin >> dia;

                cout << "Aniversariantes do dia: " << endl;

                for (int i = 0; i < 1000; i++) {
                    if (agenda[i].diaNascimento == dia) {
                        cout << agenda[i].nomePessoa << "  ";
                    }
                }

                cout << "\nDigite 9 para sair ou qualquer outro numero para visualizar aniversariantes de outros dias: " << endl;
                cin >> saida;
                system("cls");

            } while (saida != "9");

        break;
        case '5':

            do {
                cout << "Digite o mes desejado: ";
                cin >> mes;

                cout << "Aniversariantes do mes: " << endl;

                for (int i = 0; i < 1000; i++) {
                    if (agenda[i].mesNascimento == mes) {
                        cout << agenda[i].nomePessoa << "  ";
                    }
                }

                cout << "\nDigite 9 para sair ou qualquer outro numero para visualizar aniversariantes de outros dias: " << endl;
                cin >> saida;
                system("cls");

            } while (saida != "9");

        break;
        case '6':

            do {
                cout << "Digite a primeira letra do nome do aniversariante: ";
                cin >> letra;

                cout << "Aniversariantes com essa letra: " << endl;

                for (int i = 0; i < 1000; i++) {
                    if (agenda[i].nomePessoa[0] == letra) {
                        cout << agenda[i].nomePessoa << "  ";
                    }
                }

                cout << "\nDigite 9 para sair ou qualquer outro numero para visualizar aniversariantes de outros dias: " << endl;
                cin >> saida;
                system("cls");

            } while (saida != "9");

        break;
        case '7':

            do {
                cout << "Lista de aniversariantes: " << endl;
                for (j = 0; j <= 26; j++) {
                    for (int i = 0; i < 1000; i++) {
                        if (agenda[i].nomePessoa[0] == alfabeto[j]) {
                            cout << agenda[i].nomePessoa << "  ";
                        }
                    }
                }
                cout << endl;
                system("pause");
                system("cls");
            } while (saida != "9");

        break;
        case '8':
            do {
                cout << "Lista de aniversariantes: " << endl;
                for (j = 1; j < 13; j++) {
                    for (int i = 0; i < 1000; i++) {
                        if (agenda[i].mesNascimento == j) {
                            cout << agenda[i].nomePessoa << "  ";
                        }
                    }
                }
                cout << endl;
                system("pause");
                system("cls");
            } while (saida != "9");

        break;

        }

        i++;
    
    } while (opcaoEntrada != '9');

    return 0;
}