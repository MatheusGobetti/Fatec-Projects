#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int i = 0, bin = 0, dec = 0, oct = 0, resulthex, opcao;
    int resultbin[100000] = {0};
    int resultoct[100000] = {0};
    string hexdec_num = "";
    char hexadecimal[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    
    do {
        cout << "\n----- Bem vindo ao conversor de bases! -----" << endl;
        cout << "Escolha a opcao desejada: " << endl;
        cout << "Digite 1 para converter binário para decimal" << endl;
        cout << "Digite 2 para converter decimal para binario" << endl;
        cout << "Digite 3 para converter decimal para octal" << endl;
        cout << "Digite 4 para converter decimal para hexadecimal" << endl;
        cout << "Digite 5 para sair\n" << endl;
        cin >> opcao;

        switch(opcao){
            case 1:
                cout << "Digite o valor em binario: " << endl;
                cin >> bin;
                    for(i = 0; bin > 0; i++){
                        dec = dec + pow(2, i) * (bin % 10);
                        bin = bin / 10;
                    }
                cout << "O valor do numero em decimal eh: " << dec << endl << endl;
                dec = 0;
            break;
            case 2:
                //Pega o resto da divisão do número por 2 e coloca em um vetor de resultado. Após isso, a variável que a pessoa digitou recebe o quociente da divisão
                cout << "Digite o valor em decimal: " << endl;
                cin >> dec;
                    for(i = 0; dec > 0; i++){
                        resultbin[i] = dec % 2;
                        dec = dec / 2;
                    }
                //Printa na tela os restos armazenados no vetor resultado de trás pra frente - Começa de i valores armazenados - 1 - pois o último sempre será 0 (1/1 = 0)  
                cout << "O valor em binario eh: " << endl;
                    for(i = i-1; i >= 0; i--){
                        cout << resultbin[i];
                    }
                    //Zera novamente o vetor para caso a pessoa queira fazer a operação novamente.
                    for(i = 0; i < 100000; i++){
                        resultbin[i] = 0;
                    }
                cout << endl;
            break;
            case 3:
                cout << "Digite o valor em decimal: " << endl;
                cin >> dec;
                    for(i = 0; dec > 0; i++){
                        resultoct[i] = dec % 8;
                        dec = dec / 8;
                    }
                cout << "O valor octal eh: " << endl;
                    for(i = i-1; i >= 0; i--){
                        cout << resultoct[i];
                    }
                    for(i = 0; i < 100000; i++){
                        resultoct[i] = 0;
                    }
                cout << endl;
            break;
            case 4:
                cout << "Digite o valor em decimal: " << endl;
                cin >> dec;
                    while(dec > 0) {
                    resulthex = dec % 16;
                    hexdec_num = hexadecimal[resulthex] + hexdec_num; //hexdex_num é uma string que vai receber os valores convertidos em string
                    dec = dec / 16;
                }
            cout << "O valor em hexadecimal eh: " << hexdec_num << endl;
            hexdec_num = ""; //Zera para caso queira fazer a operação novamente
            break;
            case 5:
                cout << "Ate mais!" << endl;
            break;
            default:
                cout << "Opcao invalida! Digite novamente." << endl;
            break;
        }
    } while(opcao != 5);
    return 0;
}