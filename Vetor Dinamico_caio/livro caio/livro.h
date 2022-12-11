#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Livro{
	char * nome;
	char * autor;
	int ano;
	int qtd;
	int cod;
	int *vet;
};
typedef struct Livro livro;

livro * cadastro(livro * l, int ncad);
void exibir(int ncad, livro * l);
