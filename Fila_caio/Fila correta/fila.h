#include <stdio.h>
#include <stdlib.h>
#include <iostream>

struct Fila{
	int * vet;
	int qtd;
};

//typedef faz com que o tipo de variavel Pilha seja conhecido no código
//agora existe o tipo de variavel pilha
typedef struct Fila fila;

void inicio_fila(fila* f);
void enqueue(int x, fila* f);
int dequeue(fila* f);
int size(fila* f);
bool isEmpty(fila* f);
int front(fila* f);
void print(fila* f);
void kill_stack(fila* f);


