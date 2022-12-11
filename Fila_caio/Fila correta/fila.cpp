#include <iostream>
#include <stdlib.h>
#include "fila.h"

using namespace std;

void inicio_fila(fila* f){
	f->qtd = 0;
	f->vet = NULL;
}

void enqueue(int x, fila* f){ //inclui x no fim da fila
	f->qtd++;
	if (f->qtd == 1)
		f->vet = (int*) malloc(sizeof(int));
	else 
		f->vet = (int*) realloc(f->vet, f->qtd);	
	f->vet[f->qtd-1] = x;	
}

int dequeue(fila* f){ 													//retorna x extraído do inicio da fila
	int x = -99;
	if (!isEmpty(f)){
		x = f->vet[0];
		f->qtd--;
		if (f->qtd < 1)
			kill_stack(f);
		else	
			f->vet = (int*) realloc(f->vet, f->qtd);	
	} else {
		cout << "Stack is empty!" << endl;
	}
	return x;
}

int size(fila* f){ 											//retorna qtd de dados na pilha
	return f->qtd;
}

bool isEmpty(fila* f){ 											//true se é pilha não vazia
	return f->qtd == 0;
}

int front(fila* f){ 										//retorna x do topo da pilha, sem removê-lo
	if (!isEmpty(f))
		return f->vet[0];
	else cout << "Stack is empty!" << endl;
	return -99;
}

void print(fila* f){ 									//loop no vetor pilha informando cada elemento deste
	if (!isEmpty(f)){
		cout << "[front] < - ";
		for (int i=0; i<f->qtd; i++){
			cout << f->vet[i] << " - ";
		}
		
	} else {
		cout << "Stack is empty!" << endl;
	}
}

void kill_stack(fila* f){ 									//desaloca vetor de controle de Pilha
	free(f->vet);
	f->qtd = 0;
}


