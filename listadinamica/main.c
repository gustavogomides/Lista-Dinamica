#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main()
{
    lista l;

    iniciaLista(&l);

    insereLista(&l, 20);
    insereLista(&l, 25);
    insereLista(&l, 38);
    insereLista(&l, 67);
    insereLista(&l, 27);
    insereLista(&l, 45);
    insereLista(&l, 12);
    insereLista(&l, 05);

    imprimeLista(l);

    return 0;
}
