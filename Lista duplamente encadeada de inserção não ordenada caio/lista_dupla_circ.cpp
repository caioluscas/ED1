
//lista_dupla.cpp
#include "lista_dupla.h"


/*inicializa a lista*/
Lista2* inicializa(){
	return NULL;
}
/* inserção no início */
Lista2* insere_inicio (Lista2* l, int v)
{
	Lista2* novo = (Lista2*) malloc(sizeof(Lista2));
	novo->info = v;

	if(l==NULL){
		novo->prox=novo;
		novo->ant=novo;
	}
 	else{
 		novo->prox=l;
 		novo->ant=l->ant;
 		l->ant->prox=novo;
 		l->ant=novo;
	 }
 	return novo;
}

Lista2* insere_fim (Lista2* l, int v){
	Lista2* novo = (Lista2*) malloc(sizeof(Lista2));
	novo->info = v;
	
	if(l==NULL){
		novo->prox=novo;
		novo->ant=novo;	
		return novo;	
	}
	else{
 	novo->prox = l;
 	l->ant->prox = novo;
 	novo->ant = l->ant;
 	l->ant = novo;
 
	return l;		
	}	
}

Lista2* remove_inicio (Lista2* l){
	Lista2* p=l;
	if(l==NULL){
		cout<< "\nA Lista ja esta vazia! Nao ha elementos para remocao!\n";
		return l;
	}
	else{
		if(p->prox==l && p->ant==l){
			printf("Primeiro e unico valor removido: %d\n",l->info);
			free(l);
			return NULL;
		}
		else{
			l=p->prox;
			l->ant=p->ant;
			p->ant->prox=l;
			printf("valor REMOVIDO no inicio: %d\n",p->info);
			free(p);
			return l;
		}
	}

}

Lista2* remove_fim (Lista2* l){
	Lista2* p=l;
	Lista2* aux=l->prox;
	if(l==NULL){
		printf("\nA Lista ja vazia! Nao ha elementos para remocao!\n");
		return l;
	}
	else{
		if(p->prox==l && p->ant==l){
			printf("Ultimo e unico valor removido: %d\n",l->info);
			free(l);
			return NULL;
		}
		else{
			p=p->ant;
			p->ant->prox=l;
			l->ant=p->ant;
			printf("valor REMOVIDO no final: %d\n",p->info);
			free(p);
			return l;
		}
	}

}

Lista2* remove_valor(Lista2* l,int v)
{
	Lista2* p=l;
	int achou=0;	//achou==0 elemento nao encontrado 
	if(l==NULL){
		printf("Lista vazia!\n");
	}
	else{
		do{
			//Estrutura de busca
			if(p->info==v){
				achou=1;
				break;
			}
			p = p->prox;
		}while(p!=l);
	
		if(achou==1){	//Achou o numero
		if(p->prox==p && p->ant==p){
			//remoçao com nó unico
			printf("Removido o unico valor da lista: %d!\n",p->info);
			free(l);
			return NULL;
		}
		else{
			//removendo valor no meio/final
			p->ant->prox=p->prox;
			p->prox->ant=p->ant;
			printf("O valor %d foi removido!\n",p->info);
		
}	
		free(p);
		return l;
	}	
		
		else{
			//Nao achou o numero
			printf("\nValor %d nao existe na lista!\n",v);
			return l;
		}

}
}

void imprimir(Lista2* l){
	Lista2* p=l;
	if(l==NULL){
		printf("\nA lista esta vazia!\n");
	}
	else{
		printf("\ninfo: ");
		do{
			printf("%d -",p->info);
			p=p->prox;	
		}while(p!=l);
	}
	printf("\n");
}


void imprimir_inverso (Lista2* l)
{
 	Lista2* p = l->ant; 
 	/* faz p apontar para o nó final */
	if (l==NULL){
 		printf("\nA lista esta vazia!\n");
	 } 
 	else{ 
		printf("\ninfo: ");
 		do{
 			printf("%d -",p->info);
 			p=p->ant;	
	 	}while(p!=l->ant);
		printf("\n");
}
}


