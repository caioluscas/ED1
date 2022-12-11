//Lista.h
#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

struct lista {
	int info;
	struct lista* prox;
};
typedef struct lista Lista; //tipo nó-dado "Lista"

Lista* inicializa ();
Lista* insere_inicio (Lista* l, int i);
Lista* insere_fim (Lista * l, int i);
bool vazia (Lista* l);
void imprime (Lista* l);
Lista* retira (Lista* l, int v);
Lista* busca (Lista* l, int v);
void libera (Lista* l);
void libera_rec (Lista* l); 
void libera_rec2 (Lista* l); 
void imprime_inicio(Lista * l);
void imprime_fim(Lista * l);
int size (Lista * l);
//void ocorrencia(Lista * l, int v);
Lista * remove_inicio(Lista * l);
Lista* remove_fim(Lista* l);

