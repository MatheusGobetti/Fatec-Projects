#include "Fila.h"

Fila::Fila() {
    inicio = NULL;
    fim = NULL;
}

bool Fila::vazia() {
    return (inicio == NULL);
}

bool Fila::cheia() {
    return false;
}

bool Fila::inserir(int auxValor, string auxNomeArq, int auxNumFolhas) {
    // Inserir um arquivo na fila de impressão;
    // Altere o método inserir:
    PonteiroElemento p;
    p = new elemento;
    p->valor = auxValor;
    p->nome = auxNomeArq;
    p->numFolhas = auxNumFolhas;

    if (vazia()) {
        inicio = p;
        fim = p;
    } else {
        fim->proximoElemento = p;
        fim = p;
    }
    p->proximoElemento = NULL;
    return true;
}

bool Fila::remover(int &auxValor, string &auxNomeArq, int &auxNumFolhas) {
    // Remover um arquivo da fila da impressão (imprimir);
    // Altere o método remover:
    PonteiroElemento p;
    if (vazia())
        return false;

    auxValor = inicio->valor;
    auxNomeArq = inicio->nome;
    auxNumFolhas = inicio->numFolhas;

    p = inicio;
    inicio = inicio->proximoElemento;
    delete p;
    if (inicio == NULL)
        fim = NULL;
    return true;
}

string Fila::listar() {
	// Implementar listagem da fila de impressão;
    // Retornar string no formato:
	// <idImpressao1> - <nomeArquivo1> - <folhas1>\n
	// <idImpressao2> - <nomeArquivo2> - <folhas2>\n
	//
	// Seu código aqui	

    Fila auxFila;
    int auxID;
    string auxNomeArq;
    int auxNumFolhas;
    string retorno;
    retorno = "";
    while (remover(auxID, auxNomeArq, auxNumFolhas)) {
        auxFila.inserir(auxID, auxNomeArq, auxNumFolhas);
        retorno = retorno + to_string(auxID) + " - " +  auxNomeArq + + " - " + to_string(auxNumFolhas) + "\n";
    }

    while (auxFila.remover(auxID, auxNomeArq, auxNumFolhas)) {
        inserir(auxID, auxNomeArq, auxNumFolhas);
    }
    return retorno;
}

bool Fila::inserirFolhas(int auxFolhas) {
    // Inserir mais folhas na impressora;
	// Seu código aqui

    /*PonteiroElemento folhas;
    folhas = new elemento;
    folhas->qtdFolhas = auxFolhas;

    if (vazia()) {
        inicio = folhas;
        fim = folhas;
    } else {
        fim->proximoElemento = folhas;
        fim = folhas;
    }
    folhas->proximoElemento = NULL;
    
    return true;*/
}

bool Fila::imprimir() {

    /*PonteiroElemento folhas;

    if (vazia()) {
        return false;
    }

    qtdFolhas = inicio->qtdFolhas;
    folhas = inicio;
    inicio = inicio->proximoElemento;
    delete folhas;
    if (inicio == NULL) {
        fim = NULL;
    }

    return true;*/
}

int Fila::listarFolhas() {
    // Retorna o total de folhas disponíveis na impressora;
	// Seu código aqui

    /*Fila auxFila;
    int auxFolhas;
    int retorno;

    while (imprimir(auxFolhas)) {
        auxFila.inserirFolhas(auxFolhas);
        retorno = retorno + auxFolhas;
    }

    while (auxFila.imprimir(auxFolhas)) {
        inserirFolhas(auxFolhas);
    }
    return retorno;*/
}

