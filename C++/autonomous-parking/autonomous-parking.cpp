// Projeto desenvolvido como trabalho na disciplina de Algoritmos e Lógica de Programação
// Grande parte do algoritmo está funcional. Apenas com relação ao uso do tempo está com alguns bugs

#include <iostream>
#include <stdlib.h> 
#include <time.h>


#ifndef _WIN32
#define CLEAR "clear"

#else

#define CLEAR "cls"
#endif 

using namespace std;

struct gerencia {

    int carrosAtendidos = 0;
    int camionetesAtendidas = 0;
    int supercarrosAtendidos = 0;
    int veiculosNaoAtendidos = 0;
};


void mostrarGerencia(struct gerencia *mgmt){ //Mgmt é abreviação de "Management" que significa gerência em inglês

    cout << "****************************************************************************************" << endl;
    cout << "Quantidade de carros atendidos: " << mgmt -> carrosAtendidos << endl;
    cout << "Quantidade de camionetes atendidas: " << mgmt -> camionetesAtendidas << endl;
    cout << "Quantidade de supercarros atendidos: " << mgmt -> supercarrosAtendidos << endl;
    cout << "Quantidade de veiculos nao atendidos por lotacao: " << mgmt -> veiculosNaoAtendidos << endl;
}

struct veiculo {

    string tipo;
    string placa;
    
};

struct andares {

    int vagacarro = 0;
    int vagacamionete = 0;
    int vagaSupercarro = 0;

};

int main(){

    struct gerencia gerencia1;
    struct veiculo veiculos[1000];
    struct andares andar1, andar2, andar3, andar4, andar5;

    int i = 0;
    int j = 0;
    int opcaoEntrada;
    int result, armazenResult[1000];
    float faturamentoTotal = 0, faturamentoMedioHora = 0;
    float precoCarro = 5;
    float precoCamionete = 7;
    float valorPagamento;
    float troco;
    int pagamento;
    int tipoPagamento;
    int hora = 1;

    string placaRetirada;

    time_t tempo_inicial, tempo_final;

    struct tm *infoTempo;

    do{

    cout << "************************************************" << endl;
    cout << "Bem vindo ao estacionamento!" << endl;
    cout << "Digite a opcao desejada:" << endl;
    cout << "1 para estacionarmos seu veiculo" << endl;
    cout << "2 para administrador" << endl;
    cout << "3 para mostrar os veiculos que ja estao no estacionamento" << endl;
    cout << "4 para pagar o estacionamento e retirar seu veiculo" << endl;
    cout << "100 para sair" << endl;
    cout << "************************************************" << endl;
    cin >> opcaoEntrada;

        switch(opcaoEntrada){
            case 1:

                do{
                    
                    cout << "*******************************\n" << endl;
                    cout << "Digite o seu tipo de veiculo: " << endl;
                    cout << "Digite 1 para carro: " << endl;
                    cout << "Digite 2 para camionete: " << endl;
                    cout << "Digite 3 para supercarro: " << endl;
                    cout << "Digite 0 para voltar" << endl;
                    cout << "\n*******************************" << endl;

                    cin >> veiculos[i].tipo;
                    
                    if(veiculos[i].tipo == "1"){

                        veiculos[i].tipo = "Carro";
                        cout << "Digite a placa do seu veiculo: " << endl;
                        cin >> veiculos[i].placa;

                        //Vagas para carros

                        if(andar1.vagacarro < 20){      //Se houver vaga no primeiro piso ele coloca o carro la
                            andar1.vagacarro += 1;
                            gerencia1.carrosAtendidos += 1;

                            time(&tempo_inicial);
                            infoTempo = localtime(&tempo_inicial);
                            cout << asctime(infoTempo) << endl;
                            
                        }
                        else {      //Senao, ele verifica se tem vaga no segundo piso, e coloca o carro la
                            
                                if(andar2.vagacarro < 25){
                                    andar2.vagacarro += 1;
                                    gerencia1.carrosAtendidos += 1;  

                                    time(&tempo_inicial);
                                    infoTempo = localtime(&tempo_inicial);
                                    cout << asctime(infoTempo) << endl;

                                }
                                else {      //Se nao houver vagas, ele mostra que esta lotado 
                                    cout << "Este andar do estacionamento esta lotado! Nao ha vagas disponiveis." << endl;
                                    gerencia1.veiculosNaoAtendidos += 1;
                                }
                            }
                        i++;
                    } 
                    else if(veiculos[i].tipo == "2"){

                        veiculos[i].tipo = "Camionete";
                        cout << "Digite a placa do seu veiculo: " << endl;
                        cin >> veiculos[i].placa;

                        //Vagas para camionetes

                        if(andar1.vagacamionete < 30){      //Se houver vaga no primeiro piso ele coloca a camionete la
                            andar1.vagacamionete += 1;
                            gerencia1.camionetesAtendidas += 1;

                            time(&tempo_inicial);
                            infoTempo = localtime(&tempo_inicial);
                            cout << asctime(infoTempo) << endl;

                        }
                        else {      //Senao, ele verifica se tem vaga no terceiro piso, e coloca a camionete la

                                if(andar3.vagacamionete < 10){
                                    andar3.vagacamionete += 1;
                                    gerencia1.camionetesAtendidas += 1;    

                                    time(&tempo_inicial);
                                    infoTempo = localtime(&tempo_inicial);
                                    cout << asctime(infoTempo) << endl;

                                }
                                else {
                                    
                                if(andar5.vagacamionete < 20){      //Senao, ele verifica se tem vaga no quinto piso, e coloca a camionete la
                                    andar5.vagacamionete += 1;
                                    gerencia1.camionetesAtendidas += 1;   

                                    time(&tempo_inicial);
                                    infoTempo = localtime(&tempo_inicial);
                                    cout << asctime(infoTempo) << endl;

                                }
                                else {      //Se nao houver vagas, ele mostra que esta lotado
                                    cout << "Este andar do estacionamento esta lotado! Nao ha vagas disponiveis." << endl;
                                    gerencia1.veiculosNaoAtendidos += 1;
                                }
                            }
                        }

                        i++;
                    }
                    else if(veiculos[i].tipo == "3"){
                        
                        veiculos[i].tipo = "Supercarro";
                        cout << "Digite a placa do seu veiculo: " << endl;
                        cin >> veiculos[i].placa;

                        //Vagas para supercarros

                        if(andar4.vagaSupercarro < 15){     //Se houver vaga no quarto piso ele coloca o supercarro la
                            andar4.vagaSupercarro += 1;
                            gerencia1.supercarrosAtendidos += 1;

                            time(&tempo_inicial);
                            infoTempo = localtime(&tempo_inicial);
                            cout << asctime(infoTempo) << endl;

                        }
                        else{   //Senao ele mostra que ta lotado
                            cout << "Este andar do estacionamento esta lotado! Nao ha vagas disponiveis." << endl;
                            gerencia1.veiculosNaoAtendidos += 1;
                        }

                        i++;
                    }
                    else if(veiculos[i].tipo == "0"){
                        break;
                    } else{
                        system("cls");
                        system("clear");
                        cout << "O tipo de veiculo eh invalido!" << endl;
                    }

                } while(veiculos[i].tipo != "0" || veiculos[i].tipo != "1" || veiculos[i].tipo != "2" || veiculos[i].tipo != "3");

            break;
            case 2:

                mostrarGerencia(&gerencia1);
                faturamentoMedioHora = faturamentoTotal / hora;
                cout << "Faturamento medio por hora: " << faturamentoMedioHora << " reais."<< endl;
                cout << "Faturamento total: " << faturamentoTotal << " reais." << endl;
                cout << "****************************************************************************************" << endl;

            break;
            case 3:

                cout << endl;

                for(j = 0; j < i; j++){ //Printa o total de veiculos
                    cout << "|" << veiculos[j].tipo << " - " << veiculos[j].placa << "|";
                }

                cout << endl;

                //Parte que exibe o total de vagas ocupadas

                int totalAndar1, totalAndar2, totalAndar3, totalAndar4, totalAndar5;

                totalAndar1 = andar1.vagacarro + andar1.vagacamionete;
                totalAndar2 = andar2.vagacarro;
                totalAndar3 = andar3.vagacamionete;
                totalAndar4 = andar4.vagaSupercarro;
                totalAndar5 = andar5.vagacamionete;

                cout << "Numero de veiculos no primeiro andar: " << totalAndar1 << "(sendo " << andar1.vagacarro << " carros e " << andar1.vagacamionete << " camionetes)."<< endl;
                cout << "Numero de veiculos no segundo andar: " << totalAndar2 << endl;
                cout << "Numero de veiculos no terceiro andar: " << totalAndar3 << endl;
                cout << "Numero de veiculos no quarto andar: " << totalAndar4 << endl;
                cout << "Numero de veiculos no quinto andar: " << totalAndar5 << endl;
                cout << endl;

            break;
            case 4:

                //Como o difftime armazena valor em segundos, programei cada segundo como sendo 1 minuto apenas pra representacao, mas poderia colocar como segundos 

                cout << "Tempo atual: " << endl;

                time(&tempo_final);
                infoTempo = localtime(&tempo_final);
                cout << asctime(infoTempo) << endl;

                result = difftime(mktime(localtime(&tempo_final)), (mktime(localtime(&tempo_inicial)))); 
                armazenResult[i] = result;
                
                cout << "Digite sua placa: " << endl;
                cin >> placaRetirada;
                cout << "Tempo que seu veiculo ficou estacionado: " << endl;

                for(j = 0; j < i; j++){
                    if(placaRetirada == veiculos[j].placa){
                        cout << armazenResult[i] <<  " minutos" << endl;
                    }
                }

                if(result > 60){
                    if(result / 60 > 0){
                        hora += result / 60;
                    }
                }

                //Pagamento
                /*Aqui, as variaveis ja falam por si só, quando o tempo de permanencia do veiculo for menor que 60 minutos, o estacionamento é gratuito.
                Quando não, ele calcula o valor do pagamento em cima do tanto de tempo que o veiculo permaneceu la.
                A unica coisa que atrapalha é por conta da função time_t, entao se uma pessoa registra um novo veiculo, ele vai conseguir pagar
                com o horario do ultimo veiculo apenas
                */

                if(armazenResult[i] < 60){ //Caso estacionamento for gratuito...

                    cout << "Estacionamento gratuito!" << endl;
                    cout << "Digite novamente o tipo do seu veiculo (1) para carro, (2) para camionete e (3) para supercarro: " << endl;
                    cin >> tipoPagamento;

                    if(tipoPagamento == 1){

                        for(j = 0; j < i; j++){ //Percorre o vetor procurando a placa do usuario, e então retira ele da vaga
                            if(placaRetirada == veiculos[j].placa){
                                veiculos[j].placa = "";
                                veiculos[j].tipo = "";
                                if(andar2.vagacarro > 0){
                                    andar2.vagacarro -= 1;
                                    cout << "Aqui esta seu veiculo. Obrigado! Volte sempre." << endl;
                                } 
                                else if(andar1.vagacarro > 0){
                                    andar1.vagacarro -= 1;
                                    cout << "Aqui esta seu veiculo. Obrigado! Volte sempre." << endl;
                                }
                            }
                        }
                    }
                    else if(tipoPagamento == 2){
                        
                        for(j = 0; j < i; j++){ 
                            if(placaRetirada == veiculos[j].placa){
                                veiculos[j].placa = "";
                                veiculos[j].tipo = "";
                                if(andar5.vagacamionete > 0){
                                    andar5.vagacamionete -= 1;
                                    cout << "Aqui esta seu veiculo. Obrigado! Volte sempre." << endl;
                                } 
                                else if(andar3.vagacamionete > 0){
                                    andar3.vagacamionete -= 1;
                                    cout << "Aqui esta seu veiculo. Obrigado! Volte sempre." << endl;
                                }
                                else if(andar1.vagacamionete > 0){
                                    andar1.vagacamionete -= 1;
                                    cout << "Aqui esta seu veiculo. Obrigado! Volte sempre." << endl;
                                }
                            }
                        }
                    }
                    else if(tipoPagamento == 3){

                        for(j = 0; j < i; j++){ 
                            if(placaRetirada == veiculos[j].placa){
                                veiculos[j].placa = "";
                                veiculos[j].tipo = "";
                                if(andar4.vagaSupercarro > 0){
                                    andar4.vagaSupercarro -= 1;
                                    cout << "Aqui esta seu veiculo. Obrigado! Volte sempre." << endl;
                                } 
                            }
                        }
                    }
                } 

                else if(armazenResult[i] >= 60){ //Caso o estacionamento deva ser pago..
                    cout << "Digite novamente o tipo do seu veiculo (1) para carro, (2) para camionete e (3) para supercarro: " << endl;
                    cin >> tipoPagamento;

                    if(tipoPagamento == 1){
                        cout << "O valor do estacionamento eh: " << endl;
                        pagamento = precoCarro * (armazenResult[i] / 60); //Valor do estacionamento de carro
                        cout << pagamento << " reais." << endl;
                        cout << "Digite o valor a ser pago: " << endl;
                        cin >> valorPagamento;
                    } 
                    else if(tipoPagamento == 2){
                        cout << "O valor do estacionamento eh: " << endl;
                        pagamento = precoCamionete * (armazenResult[i] / 60); //Valor do estacionamento de camionete
                        cout << pagamento << " reais." << endl;
                        cout << "Digite o valor a ser pago: " << endl;
                        cin >> valorPagamento;
                    }
                    else if(tipoPagamento == 3){
                        if(andar4.vagaSupercarro > 0){
                            cout << "Estacionamento gratuito! Volte sempre" << endl;
                            andar4.vagaSupercarro -= 1;
                        }
                    }
                    else{
                    cout << "Tipo do veiculo invalido!" << endl;
                    }
    
                    if(valorPagamento == pagamento){
                        faturamentoTotal += valorPagamento;
                        valorPagamento = 0;

                        if(tipoPagamento == 1){
                            cout << "Digite a placa do seu veiculo para retira-lo" << endl;
                            cin >> placaRetirada;

                            for(j = 0; j < i; j++){ //Percorre o vetor procurando a placa do usuario, e então retira ele da vaga
                                if(placaRetirada == veiculos[j].placa){
                                    veiculos[j].placa = "";
                                    veiculos[j].tipo = "";
                                    if(andar2.vagacarro > 0){
                                        andar2.vagacarro -= 1;
                                        cout << "Aqui esta seu veiculo. Obrigado! Volte sempre." << endl;
                                    } 
                                    else if(andar1.vagacarro > 0){
                                        andar1.vagacarro -= 1;
                                        cout << "Aqui esta seu veiculo. Obrigado! Volte sempre." << endl;
                                    }
                                }
                            }
                        }
                        else if(tipoPagamento == 2){
                            cout << "Digite a placa do seu veiculo para retira-lo" << endl;
                            cin >> placaRetirada;

                            for(j = 0; j < i; j++){
                                if(placaRetirada == veiculos[j].placa){
                                    veiculos[j].placa = "";
                                    veiculos[j].tipo = "";
                                    if(andar5.vagacamionete > 0){
                                        andar5.vagacamionete -= 1;
                                        cout << "Aqui esta seu veiculo. Obrigado! Volte sempre." << endl;
                                    } 
                                    else if(andar3.vagacamionete > 0){
                                        andar3.vagacamionete -= 1;
                                        cout << "Aqui esta seu veiculo. Obrigado! Volte sempre." << endl;
                                    }
                                    else if(andar1.vagacamionete > 0){
                                        andar1.vagacamionete -= 1;
                                        cout << "Aqui esta seu veiculo. Obrigado! Volte sempre." << endl;
                                    }
                                }
                            }
                        }
                        else if(tipoPagamento == 3){
                            cout << "Digite a placa do seu veiculo para retira-lo" << endl;
                            cin >> placaRetirada;

                            for(j = 0; j < i; j++){ 
                                if(placaRetirada == veiculos[j].placa){
                                    veiculos[j].placa = "";
                                    veiculos[j].tipo = "";
                                    if(andar4.vagaSupercarro > 0){
                                        andar4.vagaSupercarro -= 1;
                                        cout << "Aqui esta seu veiculo. Obrigado! Volte sempre." << endl;
                                    } 
                                }
                            }
                        }
                    }
                    else if(valorPagamento < pagamento){

                        if(tipoPagamento != 3){
                            cout << "Pagamento insuficiente. Tente novamente." << endl;
                        }
                        
                        cout << "Digite a placa do seu veiculo para retira-lo" << endl;
                        cin >> placaRetirada;

                        for(j = 0; j < i; j++){
                            if(placaRetirada == veiculos[j].placa){
                                veiculos[j].placa = "";
                                veiculos[j].tipo = "";
                            }
                        }
                        valorPagamento = 0;
                    }
                    else if(valorPagamento > pagamento){
                        cout << "Seu pagamento foi de " << valorPagamento << " reais" << endl;
                        troco = valorPagamento - pagamento;
                        cout << "Seu troco eh de: " << troco << " reais" << endl;
                        faturamentoTotal += valorPagamento - troco;
                        valorPagamento = 0;

                        if(tipoPagamento == 1){
                            cout << "Digite a placa do seu veiculo para retira-lo" << endl;
                            cin >> placaRetirada;

                            for(j = 0; j < i; j++){
                                if(placaRetirada == veiculos[j].placa){
                                    veiculos[j].placa = "";
                                    veiculos[j].tipo = "";
                                    if(andar2.vagacarro > 0){
                                        andar2.vagacarro -= 1;
                                        cout << "Aqui esta seu veiculo. Obrigado! Volte sempre." << endl;
                                    } 
                                    else if(andar1.vagacarro > 0){
                                        andar1.vagacarro -= 1;
                                        cout << "Aqui esta seu veiculo. Obrigado! Volte sempre." << endl;
                                    }
                                }
                            }
                        }
                        else if(tipoPagamento == 2){
                            cout << "Digite a placa do seu veiculo para retira-lo" << endl;
                            cin >> placaRetirada;

                            for(j = 0; j < i; j++){
                                if(placaRetirada == veiculos[j].placa){
                                    veiculos[j].placa = "";
                                    veiculos[j].tipo = "";
                                    if(andar5.vagacamionete > 0){
                                        andar5.vagacamionete -= 1;
                                        cout << "Aqui esta seu veiculo. Obrigado! Volte sempre." << endl;
                                    } 
                                    else if(andar3.vagacamionete > 0){
                                        andar3.vagacamionete -= 1;
                                        cout << "Aqui esta seu veiculo. Obrigado! Volte sempre." << endl;
                                    }
                                    else if(andar1.vagacamionete > 0){
                                        andar1.vagacamionete -= 1;
                                        cout << "Aqui esta seu veiculo. Obrigado! Volte sempre." << endl;
                                    }
                                }
                            }
                        }
                        else if(tipoPagamento == 3){
                            cout << "Digite a placa do seu veiculo para retira-lo" << endl;
                            cin >> placaRetirada;

                            for(j = 0; j < i; j++){ 
                                if(placaRetirada == veiculos[j].placa){
                                    veiculos[j].placa = "";
                                    veiculos[j].tipo = "";
                                    if(andar4.vagaSupercarro > 0){
                                        andar4.vagaSupercarro -= 1;
                                        cout << "Aqui esta seu veiculo. Obrigado! Volte sempre." << endl;
                                    } 
                                }
                            }
                        }
                    }
                }

            break;
            case 100:

                system("cls");
                system("clear");
                cout << "Obrigado por usar nosso estacionamento!" << endl;

            break;
            default:
                cout << "Opcao invalida." << endl;
            break;

        }

    } while(opcaoEntrada != 100);

    return 0;
}
