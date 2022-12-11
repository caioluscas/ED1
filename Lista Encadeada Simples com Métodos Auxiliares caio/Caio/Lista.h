#include <iostream>
#include <stdlib.h>
using namespace std;

struct lista{
	int info;
	struct lista* prox;
};
typedef struct lista Lista;


Lista* inicializa();
Lista* insere_inicio (Lista* l, int i);
Lista* inserefim(Lista* l, int i);
void imprimir (Lista* l);
void mostra_fim(Lista* l);
void mostra_inicio(Lista* l);
bool IsEmpty(Lista* l);
int size(Lista* l);
Lista* retira (Lista* l, int v);
Lista* remove_inicio (Lista* l);
Lista* remove_fim (Lista* l);
Lista* busca (Lista* l, int v);
Lista* ocorrencia(Lista* l, int v);
void libera_rec (Lista* l);
void libera_rec2 (Lista* l);
void imprime_recursivo (Lista *l);
Lista* retira_rec (Lista* l, int v);
