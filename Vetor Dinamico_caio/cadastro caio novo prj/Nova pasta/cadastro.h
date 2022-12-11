#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
using namespace std;

 struct cadastro{
		char * nome;
		int rg;
		int cpf;
		char * end;
		int qtd;
		int *vet;
	} ;
typedef struct cadastro cad;


cad * cadastro(cad * p, int ncad);
void Exibir(int ncad, cad* p);
void Quantidade (int qtd);
cad * removerult(cad * p, int *n);
cad* arquivo(cad* u, int *n);
//int size(cad *p);
//void kill_stack(cad* p);
//int retirar(cad* p);
//void arquivo(cad * p, int cpf, int rg, char nome, char end);


