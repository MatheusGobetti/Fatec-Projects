// PRIMEIRO projeto desenvolvido como trabalho na disciplina de Algoritmos e Lógica de Programação
// Grande parte do algoritmo está funcional, porém o código está totalmente estruturado, e sem uso de funções
// É necessário total reescrita do código para melhor funcionamento

#include <iostream>

using namespace std;

int main(){

    //Declaração de variáveis
    int opcaoModo, opcaoProduto, opcaoAdmin, reposicao = 0, quantidade_total = 0, i = 0;
    double valor = 0, valorUsuario = 0, valor_reposicao = 0, troco = 0;
    double faturamento = 0, faturamentoTotal = 0;
    const char *produto[20];
    int quantidade_produto[20] = {0};

    //Define a quantidade dos produtos 
    quantidade_produto[0] = 10;
    quantidade_produto[1] = 10;
    quantidade_produto[2] = 10;
    quantidade_produto[3] = 10;
    quantidade_produto[4] = 10;
    quantidade_produto[5] = 10;
    quantidade_produto[6] = 10;
    quantidade_produto[7] = 10;
    quantidade_produto[8] = 10;
    quantidade_produto[9] = 10;
    quantidade_produto[10] = 10;
    quantidade_produto[11] = 10;
    quantidade_produto[12] = 10;
    quantidade_produto[13] = 10;
    quantidade_produto[14] = 10;
    quantidade_produto[15] = 10;
    quantidade_produto[16] = 10;
    quantidade_produto[17] = 10;
    quantidade_produto[18] = 10;
    quantidade_produto[19] = 10;

    //Define o valor da variável produto. Todas as opções estão dentro de um vetor
    produto[0] = "(0) Bis [R$2,00]";
    produto[1] = "(1) KitKat [R$3,00]";
    produto[2] = "(2) Trento [R$1,50]";
    produto[3] = "(3) Hersheys [R$4,00]";
    produto[4] = "(4) M&MS [R$5,00]";
    produto[5] = "(5) Fandangos [R$4,00]";
    produto[6] = "(6) Cheetos [R$4,00]";
    produto[7] = "(7) Fofura [R$2,00]";
    produto[8] = "(8) Pringles [R$9,00]";
    produto[9] = "(9) Torcida [R$3,00]";
    produto[10] = "(10) Agua 500ml [R$1,50]";
    produto[11] = "(11) Gatorade 500ml [R$5,00]";
    produto[12] = "(12) Coca-Cola Lata [R$3,50]";
    produto[13] = "(13) Guarana Jesus Lata [R$5,50]";
    produto[14] = "(14) Toddynho [R$4,00]";
    produto[15] = "(15) Água 2L [R$5,00]";
    produto[16] = "(16) Suco de Laranja 1L [R$6,00]";
    produto[17] = "(17) Coca-Cola 2L [R$8,00]";
    produto[18] = "(18) Fanta Laranja 2L [R$7,50]";
    produto[19] = "(19) Sprite 2L [R$7,00]";


    cout << "-----Bem vindo!-----" << endl;

    do{
        //Menu principal
        cout << "\n-----Selecione a opcao desejada:-----" << endl;
        cout << "-----Digite 1 para modo usuario-----" << endl;
        cout << "-----Digite 2 para modo administrador-----" << endl;
        cout << "-----Digite 0 para sair.\n" << endl;
        cin >> opcaoModo;

    switch(opcaoModo) {
        //Printa a tabela com os produtos e se chegar no 5º produto ele pula a linha
        case 1:
        cout << "----------------------------------------------------------------------------------------------------------\n|";
        for(i = 0; i < 20; i++){
            cout << produto[i] << " - ";
            if((i+1) % 5 == 0){
                cout << "\b" << "\b";
                cout << "|" << "\n" << "------------------------------------------------------------------";
                cout << "------------------------------------------------------------------------------------\n|";
            }
        }
        cout << "Selecione o codigo do produto: \n" << endl;
        cin >> opcaoProduto;
            /* Aqui o usuário tem a opção de escolha e pagamento. Se ele pagar mais do que o valor do produto, recebe um troco. Caso a quantidade de produtos acabe,
            o programa vai avisar */
            switch (opcaoProduto) {
            case 0:
                valor = 2;
                cout << "Insira o valor do produto:" << endl;
                cin >> valorUsuario;
                    if(valorUsuario < valor){
                        cout << "Valor insuficiente." << endl;
                    } else {
                        if(quantidade_produto[0] > 0){
                            cout << "\nO valor do produto eh: R$" << valor << endl;
                            quantidade_produto[0] -= 1;
                            troco = valorUsuario - valor;
                            faturamento += valor;
                            cout << "Seu troco eh de: R$" << troco << endl;
                        } else {
                            cout << "Este produto acabou." << endl;
                        }
                    }
            break;
            case 1:
            valor = 3;
                cout << "Insira o valor do produto:" << endl;
                cin >> valorUsuario;
                    if(valorUsuario < valor){
                        cout << "Valor insuficiente." << endl;
                    } else {
                        if(quantidade_produto[1] > 0){
                            cout << "\nO valor do produto eh: R$" << valor << endl;
                            quantidade_produto[1] -= 1;
                            troco = valorUsuario - valor;
                            faturamento += valor;
                            cout << "Seu troco eh de: R$" << troco << endl;
                        } else {
                            cout << "Este produto acabou." << endl;
                        }
                    }
            break;
            case 2:
            valor = 1.5;
                cout << "Insira o valor do produto:" << endl;
                cin >> valorUsuario;
                    if(valorUsuario < valor){
                        cout << "Valor insuficiente." << endl;
                    } else {
                        if(quantidade_produto[2] > 0){
                            cout << "\nO valor do produto eh: R$" << valor << endl;
                            quantidade_produto[2] -= 1;
                            troco = valorUsuario - valor;
                            faturamento += valor;
                            cout << "Seu troco eh de: R$" << troco << endl;
                        } else {
                            cout << "Este produto acabou." << endl;
                        }
                    }
            break;
            case 3:
            valor = 4;
                cout << "Insira o valor do produto:" << endl;
                cin >> valorUsuario;
                    if(valorUsuario < valor){
                        cout << "Valor insuficiente." << endl;
                    } else {
                        if(quantidade_produto[3] > 0){
                            cout << "\nO valor do produto eh: R$" << valor << endl;
                            quantidade_produto[3] -= 1;
                            troco = valorUsuario - valor;
                            faturamento += valor;
                            cout << "Seu troco eh de: R$" << troco << endl;
                        } else {
                            cout << "Este produto acabou." << endl;
                        }
                    }
            break;
            case 4:
            valor = 5;
                cout << "Insira o valor do produto:" << endl;
                cin >> valorUsuario;
                    if(valorUsuario < valor){
                        cout << "Valor insuficiente." << endl;
                    } else {
                        if(quantidade_produto[4] > 0){
                            cout << "\nO valor do produto eh: R$" << valor << endl;
                            quantidade_produto[4] -= 1;
                            troco = valorUsuario - valor;
                            faturamento += valor;
                            cout << "Seu troco eh de: R$" << troco << endl;
                        } else {
                            cout << "Este produto acabou." << endl;
                        }
                    }    
            break;
            case 5:
            valor = 4;
                cout << "Insira o valor do produto:" << endl;
                cin >> valorUsuario;
                    if(valorUsuario < valor){
                        cout << "Valor insuficiente." << endl;
                    } else {
                        if(quantidade_produto[5] > 0){
                            cout << "\nO valor do produto eh: R$" << valor << endl;
                            quantidade_produto[5] -= 1;
                            troco = valorUsuario - valor;
                            faturamento += valor;
                            cout << "Seu troco eh de: R$" << troco << endl;
                        } else {
                            cout << "Este produto acabou." << endl;
                        }
                    }   
            break;
            case 6:
            valor = 4;
                cout << "Insira o valor do produto:" << endl;
                cin >> valorUsuario;
                    if(valorUsuario < valor){
                        cout << "Valor insuficiente." << endl;
                    } else {
                        if(quantidade_produto[6] > 0){
                            cout << "\nO valor do produto eh: R$" << valor << endl;
                            quantidade_produto[6] -= 1;
                            troco = valorUsuario - valor;
                            faturamento += valor;
                            cout << "Seu troco eh de: R$" << troco << endl;
                        } else {
                            cout << "Este produto acabou." << endl;
                        }
                    }   
            break;
            case 7:
            valor = 2;
                cout << "Insira o valor do produto:" << endl;
                cin >> valorUsuario;
                    if(valorUsuario < valor){
                        cout << "Valor insuficiente." << endl;
                    } else {
                        if(quantidade_produto[7] > 0){
                            cout << "\nO valor do produto eh: R$" << valor << endl;
                            quantidade_produto[7] -= 1;
                            troco = valorUsuario - valor;
                            faturamento += valor;
                            cout << "Seu troco eh de: R$" << troco << endl;
                        } else {
                            cout << "Este produto acabou." << endl;
                        }
                    }
            break;
            case 8:
            valor = 9;
                cout << "Insira o valor do produto:" << endl;
                cin >> valorUsuario;
                    if(valorUsuario < valor){
                        cout << "Valor insuficiente." << endl;
                    } else {
                        if(quantidade_produto[8] > 0){
                            cout << "\nO valor do produto eh: R$" << valor << endl;
                            quantidade_produto[8] -= 1;
                            troco = valorUsuario - valor;
                            faturamento += valor;
                            cout << "Seu troco eh de: R$" << troco << endl;
                        } else {
                            cout << "Este produto acabou." << endl;
                        }
                    }   
            break;
            case 9:
            valor = 3;
                cout << "Insira o valor do produto:" << endl;
                cin >> valorUsuario;
                    if(valorUsuario < valor){
                        cout << "Valor insuficiente." << endl;
                    } else {
                        if(quantidade_produto[9] > 0){
                            cout << "\nO valor do produto eh: R$" << valor << endl;
                            quantidade_produto[9] -= 1;
                            troco = valorUsuario - valor;
                            faturamento += valor;
                            cout << "Seu troco eh de: R$" << troco << endl;
                        } else {
                            cout << "Este produto acabou." << endl;
                        }
                    }  
            break;
            case 10:
            valor = 1.5;
                cout << "Insira o valor do produto:" << endl;
                cin >> valorUsuario;
                    if(valorUsuario < valor){
                        cout << "Valor insuficiente." << endl;
                    } else {
                        if(quantidade_produto[10] > 0){
                            cout << "\nO valor do produto eh: R$" << valor << endl;
                            quantidade_produto[10] -= 1;
                            troco = valorUsuario - valor;
                            faturamento += valor;
                            cout << "Seu troco eh de: R$" << troco << endl;
                        } else {
                            cout << "Este produto acabou." << endl;
                        }
                    }   
            break;
            case 11:
            valor = 5;
                cout << "Insira o valor do produto:" << endl;
                cin >> valorUsuario;
                    if(valorUsuario < valor){
                        cout << "Valor insuficiente." << endl;
                    } else {
                        if(quantidade_produto[11] > 0){
                            cout << "\nO valor do produto eh: R$" << valor << endl;
                            quantidade_produto[11] -= 1;
                            troco = valorUsuario - valor;
                            faturamento += valor;
                            cout << "Seu troco eh de: R$" << troco << endl;
                        } else {
                            cout << "Este produto acabou." << endl;
                        }
                    }   
            break;
            case 12:
            valor = 3.5;
                cout << "Insira o valor do produto:" << endl;
                cin >> valorUsuario;
                    if(valorUsuario < valor){
                        cout << "Valor insuficiente." << endl;
                    } else {
                        if(quantidade_produto[12] > 0){
                            cout << "\nO valor do produto eh: R$" << valor << endl;
                            quantidade_produto[12] -= 1;
                            troco = valorUsuario - valor;
                            faturamento += valor;
                            cout << "Seu troco eh de: R$" << troco << endl;
                        } else {
                            cout << "Este produto acabou." << endl;
                        }
                    }  
            break;
            case 13:
            valor = 5.5;
                cout << "Insira o valor do produto:" << endl;
                cin >> valorUsuario;
                    if(valorUsuario < valor){
                        cout << "Valor insuficiente." << endl;
                    } else {
                        if(quantidade_produto[13] > 0){
                            cout << "\nO valor do produto eh: R$" << valor << endl;
                            quantidade_produto[13] -= 1;
                            troco = valorUsuario - valor;
                            faturamento += valor;
                            cout << "Seu troco eh de: R$" << troco << endl;
                        } else {
                            cout << "Este produto acabou." << endl;
                        }
                    }           
            break;
            case 14:
            valor = 4;
                cout << "Insira o valor do produto:" << endl;
                cin >> valorUsuario;
                    if(valorUsuario < valor){
                        cout << "Valor insuficiente." << endl;
                    } else {
                        if(quantidade_produto[14] > 0){
                            cout << "\nO valor do produto eh: R$" << valor << endl;
                            quantidade_produto[14] -= 1;
                            troco = valorUsuario - valor;
                            faturamento += valor;
                            cout << "Seu troco eh de: R$" << troco << endl;
                        } else {
                            cout << "Este produto acabou." << endl;
                        }
                    }   
            break;
            case 15:
            valor = 5;
                cout << "Insira o valor do produto:" << endl;
                cin >> valorUsuario;
                    if(valorUsuario < valor){
                        cout << "Valor insuficiente." << endl;
                    } else {
                        if(quantidade_produto[15] > 0){
                            cout << "\nO valor do produto eh: R$" << valor << endl;
                            quantidade_produto[15] -= 1;
                            troco = valorUsuario - valor;
                            faturamento += valor;
                            cout << "Seu troco eh de: R$" << troco << endl;
                        } else {
                            cout << "Este produto acabou." << endl;
                        }
                    }  
            break;
            case 16:
            valor = 6;
                cout << "Insira o valor do produto:" << endl;
                cin >> valorUsuario;
                    if(valorUsuario < valor){
                        cout << "Valor insuficiente." << endl;
                    } else {
                        if(quantidade_produto[16] > 0){
                            cout << "\nO valor do produto eh: R$" << valor << endl;
                            quantidade_produto[16] -= 1;
                            troco = valorUsuario - valor;
                            faturamento += valor;
                            cout << "Seu troco eh de: R$" << troco << endl;
                        } else {
                            cout << "Este produto acabou." << endl;
                        }
                    }    
            break;
            case 17:
            valor = 8;
                cout << "Insira o valor do produto:" << endl;
                cin >> valorUsuario;
                    if(valorUsuario < valor){
                        cout << "Valor insuficiente." << endl;
                    } else {
                        if(quantidade_produto[17] > 0){
                            cout << "\nO valor do produto eh: R$" << valor << endl;
                            quantidade_produto[17] -= 1;
                            troco = valorUsuario - valor;
                            faturamento += valor;
                            cout << "Seu troco eh de: R$" << troco << endl;
                        } else {
                            cout << "Este produto acabou." << endl;
                        }
                    }    
            break;
            case 18:
            valor = 7.5;
                cout << "Insira o valor do produto:" << endl;
                cin >> valorUsuario;
                    if(valorUsuario < valor){
                        cout << "Valor insuficiente." << endl;
                    } else {
                        if(quantidade_produto[18] > 0){
                            cout << "\nO valor do produto eh: R$" << valor << endl;
                            quantidade_produto[18] -= 1;
                            troco = valorUsuario - valor;
                            faturamento += valor;
                            cout << "Seu troco eh de: R$" << troco << endl;
                        } else {
                            cout << "Este produto acabou." << endl;
                        }
                    }    
            break;
            case 19:
            valor = 7;
                cout << "Insira o valor do produto:" << endl;
                cin >> valorUsuario;
                    if(valorUsuario < valor){
                        cout << "Valor insuficiente." << endl;
                    } else {
                        if(quantidade_produto[19] > 0){
                            cout << "\nO valor do produto eh: R$" << valor << endl;
                            quantidade_produto[19] -= 1;
                            troco = valorUsuario - valor;
                            faturamento += valor;
                            cout << "Seu troco eh de: R$" << troco << endl;
                        } else {
                            cout << "Este produto acabou." << endl;
                        }
                    }   
            break;
            default:
                cout << "Codigo do produto inválido." << endl;
            break;
            }
        break;
        case 2:
            //Menu de administrador
            cout << "\nBem vindo, administrador!" << endl;
            cout << "O que voce deseja?" << endl;
            cout << "Digite 1 para inventario dos produtos e suas quantidades" << endl;
            cout << "Digite 2 para repor os produtos" << endl;
            cout << "Digite 3 para ver quanto a maquina ja faturou e quanto ainda pode faturar." << endl;
            cin >> opcaoAdmin;

            //Mostra um inventário com os produtos e suas respectivas quantidades
            switch(opcaoAdmin) {
                case 1:
                cout << "---------------------------------------------------------------------------------------------------------------------------------------------\n|";
                    for(i = 0; i < 20; i++){
                        cout << produto[i] << " Qtd: " << quantidade_produto[i] << " - ";
                        if((i+1) % 5 == 0){
                            cout << "\b" << "\b";
                            cout << "|" << "\n" << "------------------------------------------------------------------";
                            cout << "-------------------------------------------------------------------------------------------------------------------------------\n|";
                        }
                    }
                break;
                case 2:
                cout << "\nDigite o codigo do produto." << endl;
                cin >> opcaoProduto;

                    /* Reposição de produtos. Quando há reposição, este valor é adicionado na variável "valor_reposição" para quando for feita a verificação
                    de faturamento, constar que com o estoque atual é possível ter um determinado faturamento */
                    switch(opcaoProduto){
                        case 0:
                        cout << "Digite a quantidade que gostaria de repor: " << endl;
                        cin >> reposicao;
                            if(quantidade_produto[0] >= 10){
                                cout << "A quantidade que foi adicionada eh superior ao limite da maquina. ";
                                cout << "Por favor, reponha uma quantidade que permita que a quantidade total do produto selecionado seja no maximo 10";
                            } else {
                                quantidade_produto[0] += reposicao;
                                valor_reposicao += (reposicao * 2);
                                cout << "A reposicao foi bem sucedida. Quantidade do produto atual: " << quantidade_produto[0];
                            }
                        break; 
                        case 1:
                        cout << "Digite a quantidade que gostaria de repor: " << endl;
                        cin >> reposicao;
                            if(quantidade_produto[1] >= 10){
                                cout << "A quantidade que foi adicionada eh superior ao limite da maquina. ";
                                cout << "Por favor, reponha uma quantidade que permita que a quantidade total do produto selecionado seja no maximo 10";
                            } else {
                                quantidade_produto[1] += reposicao;
                                valor_reposicao += (reposicao * 3);
                                cout << "A reposicao foi bem sucedida. Quantidade do produto atual: " << quantidade_produto[1];
                            }
                        break;
                        case 2:
                        cout << "Digite a quantidade que gostaria de repor: " << endl;
                        cin >> reposicao;
                            if(quantidade_produto[2] >= 10){
                                cout << "A quantidade que foi adicionada eh superior ao limite da maquina. ";
                                cout << "Por favor, reponha uma quantidade que permita que a quantidade total do produto selecionado seja no maximo 10";
                            } else {
                                quantidade_produto[2] += reposicao;
                                valor_reposicao += (reposicao * 1.5);
                                cout << "A reposicao foi bem sucedida. Quantidade do produto atual: " << quantidade_produto[2];
                            }
                        break;
                        case 3:
                        cout << "Digite a quantidade que gostaria de repor: " << endl;
                        cin >> reposicao;
                            if(quantidade_produto[3] >= 10){
                                cout << "A quantidade que foi adicionada eh superior ao limite da maquina. ";
                                cout << "Por favor, reponha uma quantidade que permita que a quantidade total do produto selecionado seja no maximo 10";
                            } else {
                                quantidade_produto[3] += reposicao;
                                valor_reposicao += (reposicao * 4);
                                cout << "A reposicao foi bem sucedida. Quantidade do produto atual: " << quantidade_produto[3];
                            }
                        break;
                        case 4:
                        cout << "Digite a quantidade que gostaria de repor: " << endl;
                        cin >> reposicao;
                            if(quantidade_produto[4] >= 10){
                                cout << "A quantidade que foi adicionada eh superior ao limite da maquina. ";
                                cout << "Por favor, reponha uma quantidade que permita que a quantidade total do produto selecionado seja no maximo 10";
                            } else {
                                quantidade_produto[4] += reposicao;
                                valor_reposicao += (reposicao * 5);
                                cout << "A reposicao foi bem sucedida. Quantidade do produto atual: " << quantidade_produto[4];
                            }
                        break;
                        case 5:
                        cout << "Digite a quantidade que gostaria de repor: " << endl;
                        cin >> reposicao;
                            if(quantidade_produto[5] >= 10){
                                cout << "A quantidade que foi adicionada eh superior ao limite da maquina. ";
                                cout << "Por favor, reponha uma quantidade que permita que a quantidade total do produto selecionado seja no maximo 10";
                            } else {
                                quantidade_produto[5] += reposicao;
                                valor_reposicao += (reposicao * 4);
                                cout << "A reposicao foi bem sucedida. Quantidade do produto atual: " << quantidade_produto[5];
                            }
                        break;
                        case 6:
                        cout << "Digite a quantidade que gostaria de repor: " << endl;
                        cin >> reposicao;
                            if(quantidade_produto[6] >= 10){
                                cout << "A quantidade que foi adicionada eh superior ao limite da maquina. ";
                                cout << "Por favor, reponha uma quantidade que permita que a quantidade total do produto selecionado seja no maximo 10";
                            } else {
                                quantidade_produto[6] += reposicao;
                                valor_reposicao += (reposicao * 4);
                                cout << "A reposicao foi bem sucedida. Quantidade do produto atual: " << quantidade_produto[6];
                            }
                        break;
                        case 7:
                        cout << "Digite a quantidade que gostaria de repor: " << endl;
                        cin >> reposicao;
                            if(quantidade_produto[7] >= 10){
                                cout << "A quantidade que foi adicionada eh superior ao limite da maquina. ";
                                cout << "Por favor, reponha uma quantidade que permita que a quantidade total do produto selecionado seja no maximo 10";
                            } else {
                                quantidade_produto[7] += reposicao;
                                valor_reposicao += (reposicao * 2);
                                cout << "A reposicao foi bem sucedida. Quantidade do produto atual: " << quantidade_produto[7];
                            }
                        break;
                        case 8:
                        cout << "Digite a quantidade que gostaria de repor: " << endl;
                        cin >> reposicao;
                            if(quantidade_produto[8] >= 10){
                                cout << "A quantidade que foi adicionada eh superior ao limite da maquina. ";
                                cout << "Por favor, reponha uma quantidade que permita que a quantidade total do produto selecionado seja no maximo 10";
                            } else {
                                quantidade_produto[8] += reposicao;
                                valor_reposicao += (reposicao * 9);
                                cout << "A reposicao foi bem sucedida. Quantidade do produto atual: " << quantidade_produto[8];
                            }
                        break;
                        case 9:
                        cout << "Digite a quantidade que gostaria de repor: " << endl;
                        cin >> reposicao;
                            if(quantidade_produto[9] >= 10){
                                cout << "A quantidade que foi adicionada eh superior ao limite da maquina. ";
                                cout << "Por favor, reponha uma quantidade que permita que a quantidade total do produto selecionado seja no maximo 10";
                            } else {
                                quantidade_produto[9] += reposicao;
                                valor_reposicao += (reposicao * 3);
                                cout << "A reposicao foi bem sucedida. Quantidade do produto atual: " << quantidade_produto[9];
                            }
                        break;
                        case 10:
                        cout << "Digite a quantidade que gostaria de repor: " << endl;
                        cin >> reposicao;
                            if(quantidade_produto[10] >= 10){
                                cout << "A quantidade que foi adicionada eh superior ao limite da maquina. ";
                                cout << "Por favor, reponha uma quantidade que permita que a quantidade total do produto selecionado seja no maximo 10";
                            } else {
                                quantidade_produto[10] += reposicao;
                                valor_reposicao += (reposicao * 1.5);
                                cout << "A reposicao foi bem sucedida. Quantidade do produto atual: " << quantidade_produto[10];
                            }
                        break;
                        case 11:
                        cout << "Digite a quantidade que gostaria de repor: " << endl;
                        cin >> reposicao;
                            if(quantidade_produto[11] >= 10){
                                cout << "A quantidade que foi adicionada eh superior ao limite da maquina. ";
                                cout << "Por favor, reponha uma quantidade que permita que a quantidade total do produto selecionado seja no maximo 10";
                            } else {
                                quantidade_produto[11] += reposicao;
                                valor_reposicao += (reposicao * 5);
                                cout << "A reposicao foi bem sucedida. Quantidade do produto atual: " << quantidade_produto[11];
                            }
                        break;
                        case 12:
                        cout << "Digite a quantidade que gostaria de repor: " << endl;
                        cin >> reposicao;
                            if(quantidade_produto[12] >= 10){
                                cout << "A quantidade que foi adicionada eh superior ao limite da maquina. ";
                                cout << "Por favor, reponha uma quantidade que permita que a quantidade total do produto selecionado seja no maximo 10";
                            } else {
                                quantidade_produto[12] += reposicao;
                                valor_reposicao += (reposicao * 3.5);
                                cout << "A reposicao foi bem sucedida. Quantidade do produto atual: " << quantidade_produto[12];
                            }
                        break;
                        case 13:
                        cout << "Digite a quantidade que gostaria de repor: " << endl;
                        cin >> reposicao;
                            if(quantidade_produto[13] >= 10){
                                cout << "A quantidade que foi adicionada eh superior ao limite da maquina. ";
                                cout << "Por favor, reponha uma quantidade que permita que a quantidade total do produto selecionado seja no maximo 10";
                            } else {
                                quantidade_produto[13] += reposicao;
                                valor_reposicao += (reposicao * 5.5);
                                cout << "A reposicao foi bem sucedida. Quantidade do produto atual: " << quantidade_produto[13];
                            }
                        break;
                        case 14:
                        cout << "Digite a quantidade que gostaria de repor: " << endl;
                        cin >> reposicao;
                            if(quantidade_produto[14] >= 10){
                                cout << "A quantidade que foi adicionada eh superior ao limite da maquina. ";
                                cout << "Por favor, reponha uma quantidade que permita que a quantidade total do produto selecionado seja no maximo 10";
                            } else {
                                quantidade_produto[14] += reposicao;
                                valor_reposicao += (reposicao * 4);
                                cout << "A reposicao foi bem sucedida. Quantidade do produto atual: " << quantidade_produto[14];
                            }
                        break;
                        case 15:
                        cout << "Digite a quantidade que gostaria de repor: " << endl;
                        cin >> reposicao;
                            if(quantidade_produto[15] >= 10){
                                cout << "A quantidade que foi adicionada eh superior ao limite da maquina. ";
                                cout << "Por favor, reponha uma quantidade que permita que a quantidade total do produto selecionado seja no maximo 10";
                            } else {
                                quantidade_produto[15] += reposicao;
                                valor_reposicao += (reposicao * 5);
                                cout << "A reposicao foi bem sucedida. Quantidade do produto atual: " << quantidade_produto[15];
                            }
                        break;
                        case 16:
                        cout << "Digite a quantidade que gostaria de repor: " << endl;
                        cin >> reposicao;
                            if(quantidade_produto[16] >= 10){
                                cout << "A quantidade que foi adicionada eh superior ao limite da maquina. ";
                                cout << "Por favor, reponha uma quantidade que permita que a quantidade total do produto selecionado seja no maximo 10";
                            } else {
                                quantidade_produto[16] += reposicao;
                                valor_reposicao += (reposicao * 6);
                                cout << "A reposicao foi bem sucedida. Quantidade do produto atual: " << quantidade_produto[16];
                            }
                        break;
                        case 17:
                        cout << "Digite a quantidade que gostaria de repor: " << endl;
                        cin >> reposicao;
                            if(quantidade_produto[17] >= 10){
                                cout << "A quantidade que foi adicionada eh superior ao limite da maquina. ";
                                cout << "Por favor, reponha uma quantidade que permita que a quantidade total do produto selecionado seja no maximo 10";
                            } else {
                                quantidade_produto[17] += reposicao;
                                valor_reposicao += (reposicao * 8);
                                cout << "A reposicao foi bem sucedida. Quantidade do produto atual: " << quantidade_produto[17];
                            }
                        break;
                        case 18:
                        cout << "Digite a quantidade que gostaria de repor: " << endl;
                        cin >> reposicao;
                            if(quantidade_produto[18] >= 10){
                                cout << "A quantidade que foi adicionada eh superior ao limite da maquina. ";
                                cout << "Por favor, reponha uma quantidade que permita que a quantidade total do produto selecionado seja no maximo 10";
                            } else {
                                quantidade_produto[18] += reposicao;
                                valor_reposicao += (reposicao * 7.5);
                                cout << "A reposicao foi bem sucedida. Quantidade do produto atual: " << quantidade_produto[18];
                            }
                        break;
                        case 19:
                        cout << "Digite a quantidade que gostaria de repor: " << endl;
                        cin >> reposicao;
                            if(quantidade_produto[19] >= 10){
                                cout << "A quantidade que foi adicionada eh superior ao limite da maquina. ";
                                cout << "Por favor, reponha uma quantidade que permita que a quantidade total do produto selecionado seja no maximo 10";
                            } else {
                                quantidade_produto[19] += reposicao;
                                valor_reposicao += (reposicao * 7);
                                cout << "A reposicao foi bem sucedida. Quantidade do produto atual: " << quantidade_produto[19];
                            }
                        break;
                        default:
                            cout << "Opcao invalida!" << endl;
                        break;
                       }
                break;
                case 3:
                    //Cálculo de faturamento
                    faturamentoTotal = 905 - faturamento + valor_reposicao;
                    cout << "\nO faturamento atual eh igual a: R$" << faturamento << endl << endl;
                    cout << "Com a quantidade de itens atuais, a maquina ainda pode faturar: R$" << faturamentoTotal << endl << endl;
                break;
                default:
                    cout << "Opcao invalida!" << endl;
                break;
            }
        break;
        case 0:
            cout << "Ate mais! Obrigado por usar nossa vending machine.\n" << endl;
        break;
        default:
            cout << "Opcao invalida!\n" << endl;
        break;
    }

    } while(opcaoModo != 0);

    return 0;
}