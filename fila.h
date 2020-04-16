#include "no.h"

typedef struct fila Fila;

Fila *cria_fila();

int fila_vazia(Fila *);

int insere_fila(int, Fila *);
int remove_fila(int *, Fila *);

int tamanho_fila(Fila *);

void mostra_fila(Fila *);
 
