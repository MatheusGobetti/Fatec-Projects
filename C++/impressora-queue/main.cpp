#include <iostream>
#include <cstdlib>
#include <string>

// Matheus Gobetti Silva - RA: 2840482011045

#ifndef _WIN32
#define CLEAR "clear"

#else

#define CLEAR "cls"
#endif 

using namespace std;

#include "Fila.cpp"

//  Implemente um programa que implemente uma fila de impressão. 
//  Para cada arquivo a ser impresso devem ser armazenados: 
//  - id sequencial da impressão (começando em 1)
//  - nome do arquivo
//  - quantidade de folhas
//  Exceto o id sequencial, as outras informações devem ser digitadas pelo 
//  usuário. O programa também deve realizar um controle 
//  da quantidade de papel disponível na impressora, permitindo que o usuário 
//  realize a “inserção” de mais papel. Antes de inserir um novo documento na 
//  fila, o programa deve verificar se há papel suficiente na impressora para 
//  realizar a impressão. Se não houver papel suficiente, o programa não deve 
//  aceitar a impressão. Desenvolva métodos que:
//    a.	Permita inserir um arquivo na fila de impressão (retornar falso caso não haja papel);
//    b.	Remova um arquivo da fila da impressão (imprimir);
//    c.	Liste os arquivos da fila de impressão;
//    d.	Permita inserir mais folhas na impressora;
//    e.	Retorne o total de folhas disponíveis na impressora

// Podem realizar testes inserindo valores pré definidos.
// Podem implementar um menu com as operações.
// Podem enviar ao pgrader para correção.

// Boa prova a todos!

int main() {
  Fila minhaFila;
  int opcao, x, y, id = 1, numeroFolhas, folhasDisponiveis = 5, insercaoFolhas;
  string retorno, nomeArquivo;

  do {

    cout << "----------------------------" << endl;
    cout << "Fila de impressao" << endl;
    cout << "[0] - para sair" << endl;
    cout << "[1] - para inserir um arquivo na fila de impressao" << endl;
    cout << "[2] - para remover um arquivo da fila de impressao (imprimir)" << endl;
    cout << "[3] - para listar um arquivo da fila de impressao" << endl;
    cout << "[4] - para adicionar folhas na impressora" << endl;
    cout << "[5] - para informar o total de folhas na impressora" << endl;
    cout << "----------------------------" << endl;
    cout << "Escolha uma opcao: ";
    cin >> opcao;

    switch (opcao) {
    case 1:
      system("cls");
      cout << "Insira o nome do arquivo: ";
      getline(cin >> ws, nomeArquivo);
      cout << "Insira o numero de folhas para impressao: ";
      cin >> numeroFolhas;
      if(numeroFolhas <= folhasDisponiveis) {
        minhaFila.inserir(id, nomeArquivo, numeroFolhas);
        id++;
        cout << "Arquivo inserido" << endl;
        folhasDisponiveis -= numeroFolhas;
      } else {
        cout << "\nEh necessario incluir mais folhas para adicionar este item na fila de impressao" << endl;
      }
      
      system("pause");
      system("cls");
      break;

    case 2:
      if(minhaFila.vazia()) {
        cout << "Fila vazia. Nao eh possivel remover nenhum arquivo\n\n";
      } else {
        minhaFila.remover(id, nomeArquivo, numeroFolhas);
        folhasDisponiveis += numeroFolhas;
        numeroFolhas = 0;
        cout << "Elemento removido com sucesso." << endl;
      }
      system("pause");
      system("cls");
      break;

    case 3:
      system("cls");
      cout << "Elementos na fila de impressao: " << endl;
      cout << "----------------------------" << endl;
      if(minhaFila.vazia()) {
        cout << "Nao ha elementos na fila de impressao\n\n";
      } else {
        retorno = minhaFila.listar();
        cout << retorno << "\n";
      }
      system("pause");
      system("cls");
      break;

    case 4:
      system("cls");
      cout << "Informe a quantidade de folhas a serem inseridas: ";
      cin >> insercaoFolhas;
      folhasDisponiveis += insercaoFolhas;
      cout << "\nFolhas inseridas com sucesso!" << endl;
      system("pause");
      system("cls");
      break;

    case 5:
      system("cls");
      cout << "Quantidade de folhas disponiveis para impressao: " << folhasDisponiveis << endl << endl;
      system("pause");
      system("cls");
      break;

    default:
      break;
    }
  } while(opcao != 0);

  return 0;
}