#include<iostream>
#include<locale.h>
#include "livro.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu(){
	int op;
	cout << "\nCADASTRO DE LIVROS:" << endl;
	cout << "1 - Cadastrar livro" << endl;
	cout << "2 - Consultar todos os livros" << endl;
	cout << "3 - Sair" << endl;
}

int main(int argc, char** argv) {
	setlocale(LC_ALL,"");
	unsigned int op(0), ncad(0);
	livro * l = NULL;
	
	do{
		menu();
		cin >> op;
		switch(op){
			
			case 1:
				cout <<"Teste de cadastro\n";
				ncad++;
				l = cadastro(l,ncad);
				break;
				
			case 2: //quantidade
				exibir(ncad, l);
				
				break;
				
			case 3:
			default: 
				printf("FIM");
				return 0;
				
			}
				
		}
	while(op>0 && op<4);
	
}
