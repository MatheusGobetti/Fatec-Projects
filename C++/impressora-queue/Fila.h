class Fila {
    private:
        struct elemento {
            int valor;
            string nome;
            int numFolhas;
            elemento *proximoElemento;
        };
        typedef elemento *PonteiroElemento;
        PonteiroElemento inicio;
        PonteiroElemento fim;
    public:
        Fila();
        bool vazia();
        bool cheia();
        // alterar
        bool inserir(int auxValor, string auxNomeArq, int auxNumFolhas);
        bool remover(int &auxValor, string &auxNomeArq, int &auxNumFolhas);
        // implementar
        string listar();
        int listarFolhas();
        bool inserirFolhas(int auxFolhas);
        bool imprimir();
};