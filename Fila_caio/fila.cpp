#include "fila.h"

void initFila(fila * f){
	f->ini = NULL;
	f ->fim = NULL;
}

void enqueue(int dado, fila * f){
	no * ptr = (no*) malloc(sizeof(no));
	if(ptr == NULL){
		cout << "Erro na alocação!";
		return;
	}
	else{
		ptr->dado = dado;
		ptr->prox = NULL;
		if(f->ini == NULL){
			f->ini = ptr;
		}else{
			f->fim->prox = ptr;
		}
		f->fim = ptr;
		return;
	}
}

int dequeue(fila * f){
	no * ptr = f->ini;
	int dado;
	if(f->ini != NULL){
		f->ini = ptr->prox;
		ptr->prox = NULL;
		dado = ptr->dado;
		free(ptr);
		if(f->ini == NULL){
			f->fim = NULL;
		}
		return dado;
	}else{
		cout << "Fila vazia!";
		return 0;
	}
}

void print(fila * f){
	no * ptr = f->ini;
	if(ptr != NULL){
		while(ptr != NULL){
		cout << ptr->dado;
		ptr = ptr->prox;
		}
	}else
		cout<< "Fila vazia!";
}

void front(fila * f){
	if(f->ini==NULL){
		cout << "Fila vazia!";
	}
	cout << "Número da frente: " << f->ini->dado;
}

bool IsEmpty(fila * f){
	return f->ini = NULL;
}


