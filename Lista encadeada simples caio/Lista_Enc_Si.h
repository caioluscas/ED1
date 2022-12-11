#include <iostream>
#include <stdlib.h>
using namespace std;

struct lista{
	int info;
	struct lista*prox;
};
typedef struct lista Lista;

Lista * inicializa();
Lista * insere_inicio(Lista* l, int i);
bool vazia(Lista* l);
void imprime(Lista * l);
Lista * retira (Lista *l, int v);
void libera (Lista * l);
void libera_rec(Lista * l);
