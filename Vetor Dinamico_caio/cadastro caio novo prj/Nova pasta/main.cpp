#include <locale.h>
#include "cadastro.h"
#include <fstream>

/* run this program using t[he console pauser or add your own getch, system("pause") or input loop */

void menu(){
	cout<<" \n1- Cadastrar novo usuário"<<endl;
	cout<<" 2- Exibir usuários cadastrados"<<endl;
	cout<<" 3- Exibir quantidade de usuários cadastrados"<<endl;
	cout<<" 4- Remover último usuário cadastrado"<<endl;
}

void menu1(){
	cout<<" 5 - Carregar base de dados do arquivo"<<endl;
	cout<<"6 - Sair"<<endl;
}


int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese");
	
	unsigned int op;
	cad *p = NULL;
	
	int x, numcad(0), n =0;
	
     //declaracao do arquivo
	char ch;

	
	
    //ch = getc(arq); //lê o 1o caractere do arquivo    
	
	
	do{
	menu();
	menu1();
	cin >> op;
	
	switch(op){
		
		case 1:
			//Cadastro
			cout << "Teste de cadastro" << endl;
		    numcad++;
		    p = cadastro( p, numcad);
			break;
			
		case 2:
			//Exibir
			
				Exibir(numcad, p);
				break;
			
		case 3:
			//Quantidade
			Quantidade(numcad);
			break;
			
		case 4:
			p = removerult(p, &numcad);
			break;
			
			
		case 5:
			p = arquivo(p, &numcad);
			//system("PAUSE");
			break;
			
		case 6:
			return 0;
			
		default: 
			system("cls");
			cout<<"Opção inválida fim do programa!";
			fflush (stdin);
			
		}
		
	}while(op>0 && op<=5);
	//fclose(arq);
	return 0;
}
