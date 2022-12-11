#include "Lista_Enc_Si.h"

Lista * inicializa(){
	return NULL;
}

Lista * insere_inicio(Lista* l, int i){
	Lista * novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	novo->prox = l;
	return novo;
}
bool vazia(Lista* l){
	return (l==NULL);
}

void imprime(Lista * l){
	Lista *p;
		if(!vazia(l)){
			cout <<"Info: ";
			for( p=l; p!=NULL; p = p->prox){
			cout << p->info <<", ";
			}
		}
		else{
			cout<<"Lista vazia!!\n";
		}	
}

Lista * retira (Lista *l, int v){
	Lista * ant = NULL;
	Lista * p = l;
	
	while(p!=NULL && p->info!=v){
		ant = p;
		p = p->prox;
	}
	
	if(p == NULL){
		return l;
	}
	
	if(ant == NULL){
		l = p->prox;
	}
	
	free(p);
	return l;
}

void libera (Lista * l){
	Lista *p = l;
	while(p!=NULL){
		Lista * t = p->prox;
		free(p);
		p=t;
	}
}

void libera_rec(Lista * l){
	Lista * p = l;
	if(p!=NULL){
		libera_rec(p->prox);
		free(p);
	}
}

Lista * busca(Lista * l, int v){
	Lista * p;
	for(p=l; p!=NULL; p=p->prox)
		if()
}
