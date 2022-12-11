#include "Lista.h"

Lista* inicializa(){
	return NULL;
}

/* inserção no início: retorna a lista atualizada */
Lista* insere_inicio (Lista* l, int i)
{
	Lista* novo = (Lista*) malloc(sizeof(Lista));//Aloca nó-dado
	novo->info = i;//Atribui i a nó-dado -> info
	novo->prox = l;//Atribui ponteiro-cabeça a nó-dado->prox;
	return novo;//retorna endereço do nó-dado recem-alocado
}

Lista* inserefim(Lista* l,int i)
{
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	
	if(IsEmpty(l)){
		novo->prox=NULL;
		return novo;
	}
	
	else{
		Lista* p;
		for(p=l;p->prox!=NULL;p=p->prox);
		p->prox=novo;
		novo->prox=NULL;
		return l;
	}

}

/* função imprime: imprime valores dos elementos */
void imprimir (Lista* l)
{
	Lista* p; /* variável auxiliar para percorrer a lista */
	if(IsEmpty(l)){
		cout<< "Lista Vazia!"<<endl;
	}
	else{
		cout <<"L: ";
	 for (p = l; p != NULL; p = p->prox){
		 cout << p->info << " - ";
		}
	}
	cout<<endl;
}

void mostra_inicio(Lista * l){
	Lista * p;
	if(IsEmpty(l)){
		cout <<"Lista vazia!\n";
	}else{
		p=l;
		cout <<"No inicial: "<<p->info;
	}
}

void mostra_fim(Lista * l){
	Lista * p;
	Lista * ant = NULL;
	if(IsEmpty(l)){
		cout<<"Lista vazia!\n";
	}else{
		for(p=l; p!=NULL; p=p->prox){
			ant = p;
		}
		if(p == NULL){
			cout<<"Ultimo no: "<<ant->info;
		}
	}
}

/*Verifica se a lista esta vazia*/
bool IsEmpty(Lista* l){
	return l==NULL;
}

int tamanho(Lista* l){
	Lista* p; /* variável auxiliar para percorrer a lista */
		int cont(0);
		 for (p = l; p != NULL; p = p->prox){
			 cont++;
}
	return cont;	
}

/* função retira: retira elemento da lista */

Lista* retira (Lista* l, int v) {
	 Lista* ant = NULL;
	 Lista* p = l; 
	 while (p != NULL && p->info != v) { 
		 ant = p;
		 p = p->prox;
	 }
	 if (p == NULL)
	 	return l;
	 if (ant == NULL) {
	 	l = p->prox;
	 }
	 else {
		 ant->prox = p->prox;
	 }
	 cout<<"Elemento Removido: "<<p->info<<"."<<endl;
	 free(p);
	 return l;
}

int size(Lista * l){
	Lista * p;
	int cont(0);
	for(p=l; p!=NULL; p = p->prox){
		cont++;
	}
	return cont;
}

Lista* busca (Lista* l, int v)
{
	 Lista* p;
	 for (p=l; p!=NULL; p=p->prox){
	 	if (p->info == v){
		 	cout<<"Achou o elemento!"<<endl;	
			return p;
		 }
		 else{
		 	cout<<"Nao achou o elemento!"<<endl;
		 }
	 }
	 	return NULL; /* não achou o elemento */
}

Lista* remove_inicio(Lista* l){
	if(IsEmpty(l)){
		cout<<"Lista vazia!\n";
		return NULL;
	}
	Lista * p = l;
	if(p->prox == NULL){
		cout<<"Removendo elemento unico: "<<p->info<<"\n";
		free(p);
		return NULL;
	}else{
		l=l->prox;
		cout<<"Removendo primeiro elemento: "<<p->info<<"\n";
		free(p);
		return l;
	}
}

Lista * remove_fim(Lista *l){
	if(IsEmpty(l)){
		cout<<"Lista vazia!\n";
		return NULL;
	}
	Lista * p = l;
	Lista * ant = NULL;
	
	if(p->prox==NULL){
		cout<<"Removendo unico elemento: "<<p->info<<"\n";
		return NULL;
	}else{
		while(p->prox!=NULL){
			ant = p;
			p = p->prox;
		}
		cout<<"Removendo ultimo elemento: "<<p->info<<"\n";
		free(p);
		ant->prox = NULL;
		return l;
	}
}

Lista * ocorrencia(Lista * l, int v){
	Lista * p;
	int cont(0);
	for(p=l; p!=NULL; p=p->prox)
		if(p->info == v)
		 cont++;

cout<<"Ocorrencias: "<<cont<<"\n";
return l;
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

void imprime_recursivo (Lista * l) {
   if (l != NULL) {
      printf ("%d\n", l->info);
      imprime_recursivo (l->prox);
   }
}


Lista* retira_rec (Lista* l, int v)
{
	if (IsEmpty(l))
		return l;
	if (l->info == v) {
		Lista* t = l;
		l = l->prox;
		free(t);
	}
	else {
		l->prox = retira_rec(l->prox,v);
	}
	return l;
}

