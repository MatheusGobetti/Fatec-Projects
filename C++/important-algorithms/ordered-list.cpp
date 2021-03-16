#include <iostream>
#include <stdlib.h>

#define MAX 10
using namespace std;


int insere_ordenado(int lista[], int *fim, int e);
int remove_lista(int lista[], int *fim, int *posicao);
int imprime_lista(int lista[], int fim);

int main() {

    int lista[MAX], fim, op, elemento, flag, posicao;

    fim =- 1;

    do{

        system("cls");
        cout << "**** MENU ****" << endl << endl;
        cout << "\n1 - Insere na lista";
        cout << "\n2 - Remove da lista";
        cout << "\n3 - Mostra a lista";
        cout << "\n0 - Sair\n\n";
        cout << "\nDigite a sua opcao -> ";
        cin >> op;

        switch(op){

            case 1: system("cls");

            cout << "**** Insere na lista ****" << endl << endl;
            cout << "Digite o elemento a ser inserido: ";
            cin >> elemento;

            flag = insere_ordenado(lista, &fim, elemento);

            if(flag == 0)
                cout << "Elemento inserido com sucesso!" << endl;
            else
                if(flag == 1)
                    cout << "\n\nImpossivel inserir o elemento. Lista cheia!" << endl << endl;
                    
            system("pause");
            break;

            case 2: system("cls");

            cout << "**** Remove da lista ****" << endl << endl;
            cout << "Digite a posicao em que o elemento devera ser removido: ";
            cin >> posicao;
            flag = remove_lista(lista, &fim, &posicao);

            if(flag == 0)
                cout << "\n\nElemento removido com sucesso" << endl << endl;
            else if (flag == 1){
                cout << "\n\nImpossivel remover." << endl << endl;      
            }
            else
                cout << "\n\nImpossivel remover o elemento. Posicao invalida!" << endl << endl;

            system("pause");
            break;

            case 3: system("cls");

            cout << "**** Imprime lista ****" << endl << endl;

            flag = imprime_lista(lista, fim);

            if(flag != 0)
                cout << "\n\nLista vazia \n\n";

            cout << endl << endl;

            system ("pause");
            break;
            
        }


    }while(op != 0);

    return 0;
}

int insere_ordenado(int lista[], int *fim, int e) {

    int i;

    if(*fim >= (MAX-1)) 
        return 1;
    else {

        *fim += 1;
        i = *fim;

        while((lista[i - 1] > e) && (i > 0)) {

            lista[i] = lista[i - 1];
            i--;
        }

        lista[i] = e;
        return 0;
    }
    
}

int remove_lista(int lista[], int *fim, int *posicao) {

    if(*fim >= 0) {
        if ((*posicao >= 0) && (*posicao <= *fim)){

            for(int i = *posicao; i < *fim; i++)
                lista[i] = lista[i + 1];
            
            *fim = *fim - 1;

            return 0;
        }
        else
            return 2;
        }
        else
            return 1;
}

int imprime_lista(int lista[], int fim) {
    
    if(fim < 0)
        return 1;
    else {
        for(int i = 0; i <= fim; i++) 
            cout << lista[i] << "   ";
        return 0;
    }
}