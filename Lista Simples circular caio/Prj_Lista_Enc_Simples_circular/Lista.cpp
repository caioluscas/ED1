//Lista.cpp
#include "Lista.h"

/* função de inicialização: retorna uma lista vazia */
Lista* inicializa () {
	return NULL;
}

/* inserção no início: retorna a lista atualizada */
Lista* insere_inicio (Lista* l, int i) {
	Lista* novo = (Lista*) malloc(sizeof(Lista));
 	novo->info = i;
 	if(!vazia(l)){
 		novo->prox = l->prox;
 		l->prox = novo;
 		return l;
	 }else
	 	novo->prox = novo;
	 	return novo;
}

Lista * insere_fim (Lista * l, int i){
	if(vazia(l)){
		return insere_inicio(l,i);
	}
	Lista * novo = (Lista*)malloc(sizeof(Lista));
	novo->info = i;
	novo->prox = l->prox;
	l->prox = novo;
	return novo;
	
}

/* função vazia: retorna 1 se vazia ou 0 se não vazia */
bool vazia (Lista* l) {
 	return (l == NULL);
}

/* função imprime: imprime valores dos elementos */
void imprime (Lista* l) {
	if (!vazia(l)){
		cout << "Info: ";
		Lista* p; /* variável auxiliar para percorrer a lista */
		for (p = l; p != NULL; p = p->prox)
			cout << p->info << ", ";
		cout << endl;
	} else
		cout << "Lista vazia! \n";
}

/* função retira: retira elemento da lista */
Lista* retira (Lista* l, int v) {
	Lista* ant = NULL; /* ponteiro para elemento anterior */
 	Lista* p = l; /* ponteiro para percorrer a lista*/
 	/* procura elemento na lista, guardando anterior */
 	while (p != NULL && p->info != v) {
 		ant = p;
 		p = p->prox;
 	}
 	/* verifica se achou elemento */
 	if (p == NULL) {
 		cout << "Elemento " << v << " nao encontrado!\n"; 
 		return l; /* não achou: retorna lista original */
	}
 	/* retira elemento */
 	cout << "Elemento " << v << " retirado!\n"; 
	if (ant == NULL) { /* retira elemento do inicio */
 		l = p->prox;
 	}
 	else { /* retira elemento do meio da lista */
 		ant->prox = p->prox;
 	}
 	free(p);
 	return l;
}

Lista* busca (Lista* l, int v){
	if(vazia(l)){
		cout <<"Lista vazia!\n";
		return l;
	}
	Lista * p = l->prox;
	do{
		if(p->info == v){
			cout << "Valor encontrado!\n";
			return p;
		}
		p = p->prox;
	}while(p!=l->prox);
	
	cout <<"Valor não encontrado!\n ";
	return l;
}

void libera (Lista* l) {
	Lista* p = l;
	while (p != NULL) {
		Lista* t = p->prox; /* guarda referência para o próximo elemento*/
	 	free(p); /* libera a memória apontada por p */
	 	p = t; /* faz p apontar para o próximo */
	}
}

void libera_rec (Lista* l) { /* Libera com recursividade*/
	Lista* p = l;
	if (p != NULL) {
		Lista* t = p->prox; /* guarda referência para o próximo elemento*/
	 	free(p); /* libera a memória apontada por p */
	 	p = t; /* faz p apontar para o próximo */
	 	libera_rec (p);
	}
}

void libera_rec2 (Lista* l) { /* Libera com recursividade*/
	Lista* p = l;
	if (p != NULL) {
		libera_rec(p->prox);
		free(p); /* libera a memória apontada por p */
	}
}

void imprime_inicio(Lista * l){
	if(!vazia(l)){
		Lista * p = l->prox;
		if(p!=l){
			cout << "Primeiro nó de dado: " << p->info<<"\n";
		}else{
			cout << "Primeiro e unico nó de dado: "<< p->info<<"\n";
		}
	}else{
		cout << "Lista vazia!\n";
	}
}

void imprime_fim(Lista * l){
	if(vazia(l)){
		cout <<"Lista vazia!\n";
	}else{
		cout <<"Ultimo nó dado: "<<l->info<<"\n";
	}
}

int size (Lista * l){
	int cont(0);
	
	if(vazia(l)){
		cout << "Lista vazia!";
		return 0;
	}
	
	Lista * p = l->prox;
	
	do{
		cont++;
		p = p->prox;
	}while(p != l->prox);
	
	return cont;
}

/*void ocorrencia(Lista * l, int v){
	Lista * p;
	int cont(0);
	
	for(p=l; p!=NULL; p=p->prox){
		if(p->info == v){
			cont++;
		}
	}
	cout <<"Ocorrências do "<<v<<":"<<cont;
}*/

Lista * remove_inicio(Lista * l){
	if(!vazia(l)){
		Lista * p = l->prox;
		if(p!=l){
			l->prox = p->prox;
			free(p);
			return l;
		}
	}else{
		cout << "A lista ja esta vazia!\n";
	}
}

Lista* remove_fim(Lista* l){
	if(vazia(l)){
		printf("Lista vazia!\n");
		return l;
	}
	if(l!=l->prox){
		Lista* p=l;
		do{
			p=p->prox;
		}while(p->prox!=l);
		printf("Ultimo no-dado foi retirado!\n");
		p->prox=l->prox;
		free(l);
		return p;
	}else{
		printf("Ultimo e unico no-dado foi retirado!\n");
		free(l);
		return NULL;	
	}
}


