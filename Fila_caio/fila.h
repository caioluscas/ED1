#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
using namespace std;

struct NO{
	int dado;
	struct NO *prox;
}; 
typedef struct NO no;

struct Fila{
	NO *ini;
	NO *fim;
};
typedef struct Fila fila;

void initFila(fila *f);
void enqueue(int dado, fila *f);
int dequeue(fila * f);
void print(fila * f);
void front(fila * f);
bool IsEmpty(fila * f);

