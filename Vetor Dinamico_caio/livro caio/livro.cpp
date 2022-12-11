#include "livro.h"

livro * cadastro(livro * l, int ncad){
	fflush(stdin);
	if(ncad == 1){
		l = (livro*) malloc(ncad * sizeof(livro));
	}else if(ncad > 1){
		l = (livro*) realloc(l, ncad * sizeof(livro));
	}

	int x = ncad -1;
	l[x].nome = (char*) malloc (sizeof(char*));
	cout << "Nome: ";
	gets(l[x].nome);
	fflush(stdin);
	
	l[x].autor = (char*) malloc (sizeof(char*));
	cout << "\nAutor: ";
	gets(l[x].autor);
	fflush(stdin);	
	
	cout << "Ano: ";
	cin >> l[x].ano;
	fflush(stdin);	
	
	cout << "Código: ";
	cin >> l[x].cod;
	fflush(stdin);
	
	return l;
	
}

void exibir(int ncad, livro * l){
	for(int i=0; i<ncad; i++){
		cout <<"\nNome: "<<l[i].nome<<" Autor: "<<l[i].autor<<" Ano: "<<l[i].ano<<" Codigo:"<<l[i].cod;
	}
}


