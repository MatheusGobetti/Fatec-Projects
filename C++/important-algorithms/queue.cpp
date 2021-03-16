#include <iostream>
#include <stdlib.h>

#define MAX 10
using namespace std;

int insere_fila(int fila[], int *fim, int e);
int remove_fila(int fila[], int *fim);
int imprime_fila(int fila[], int fim);


int main(){

    int fila[MAX], fim, op, elemento, flag;
    
    fim =- 1;

    do{

        system("cls");
        cout << "**** MENU ****" << endl << endl;
        cout << "\n1 - Insere na fila";
        cout << "\n2 - Remove da fila";
        cout << "\n3 - Mostra a fila";
        cout << "\n0 - Sair\n\n";
        cout << "\nDigite a sua opcao -> ";
        cin >> op;

        switch(op){

            case 1: system("cls");

            cout << "**** Insere na fila ****" << endl << endl;
            cout << "Digite o elemento a ser inserido: ";
            cin >> elemento;

            flag = insere_fila(fila, &fim, elemento);

            if(flag == 0)
                cout << "Elemento inserido com sucesso!" << endl;
            else
                cout << "\n\nImpossivel inserir o elemento. Fila cheia!" << endl << endl;

            system("pause");
            break;

            case 2: system("cls");

            cout << "**** Remove da fila ****" << endl << endl;
            flag = remove_fila(fila, &fim);

            if(flag == 0)
                cout << "\n\nElemento removido com sucesso" << endl << endl;
            else {
                cout << "\n\nImpossivel remover." << endl << endl;      
            }

            system("pause");
            break;

            case 3: system("cls");

            cout << "**** Imprime fila ****" << endl << endl;

            flag = imprime_fila(fila, fim);

            if(flag != 0)
                cout << "\n\nFila vazia \n\n";

            cout << endl << endl;

            system ("pause");
            break;
            
        }


    }while(op != 0);

    return 0;
}

int insere_fila(int fila[], int *fim, int e) {

    if(*fim <= (MAX-2)){ // Fim inicia como -1 la em cima. Se ele for menor ou igual que MAX (10 - 2 = 8), ele permite inserir. (Até o índice 9 (De -1 até 8)) 
        *fim = *fim + 1;
        fila[*fim] = e;

        return 0;
    }
    else
        return 1;
}

int remove_fila(int fila[], int *fim) {

    if(*fim >= 0) {

        for(int i = 0; i < *fim; i++)
            fila[i] = fila[i+1];
        
        *fim = *fim - 1;

        return 0;
    }
    else
        return 1;
}

int imprime_fila(int fila[], int fim) {
    
    if(fim < 0)
        return 1;
    else {
        for(int i = 0; i <= fim; i++) 
            cout << fila[i] << "   ";
        return 0;
    }
}


