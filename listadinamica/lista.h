typedef struct nodo nodo;
typedef struct lista lista;

struct nodo {
    int dado;
    nodo *prox;
};

struct lista {
    nodo *ini;
};

void iniciaLista(lista *l);
int listaVazia(lista l);
void insereLista(lista *l, int dado);
int removeLista(lista *l, int dado);
void imprimeLista(lista l);
