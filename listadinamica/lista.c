#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void iniciaLista(lista *l) {
    l->ini = NULL;
}

int listaVazia(lista l) {
    return l.ini == NULL;
}

void insereLista(lista *l, int dado) {
    nodo *aux, *ant, *atual;

    aux = (nodo *) malloc(sizeof(nodo));
    if(!aux) exit(1);
    aux->dado = dado;
    aux->prox = NULL;

    ant = NULL;
    atual = l->ini;

    while(atual && atual->dado<dado) {
        ant = atual;
        atual = atual->prox;
    }
    if(ant == NULL) {
        l->ini = aux;
        aux->prox = atual;
    } else {
        aux->prox = atual;
        ant->prox = aux;
    }
}

int removeLista(lista *l, int dado) {
    int d;
    nodo *ant, *atual;

    ant = NULL;
    atual = l->ini;

    while(atual && atual->dado!=dado) {
        ant = atual;
        atual = atual->prox;
    }
    if(!atual) {
        return -1;
    } else {
        if(ant == NULL) {
            l->ini = atual->prox;
        } else {
            ant->prox = atual->prox;
        }
        d = atual->dado;
        free(atual);
    }

    return d;
}

void imprimeLista(lista l) {
    nodo *atual;

    atual = l.ini;

    printf("Lista ordenada:\n");
    while(atual) {
        printf("%d ", atual->dado);
        atual = atual->prox;
    }
    printf("\n");
}
