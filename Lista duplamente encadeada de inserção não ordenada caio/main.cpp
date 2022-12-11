#include "lista_dupla.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu(){
	cout<< "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
	cout<< "\t\t\tMenu\n";
	cout<< "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
	cout<< "1- Inserir no inicio\n";
	cout<<"2- Inserir no fim \n";	
	cout<<"3- Retira inicio \n";
	cout<<"4- Retira fim \n";
	cout<<"5- Retire um valor desejado: \n";			
	cout<<"6- Imprimir \n";	
	cout<<"7- Imprimir Reverso\n";			
	cout<<">";
}
int main(int argc, char** argv) {
	Lista2* l; /* declara uma lista não inicializada */
	int op,x;
	l =inicializa();
	do{
		menu();
		scanf("%d",&op);
		switch(op){
			case 1:
				cout<< "Diga o valor a ser inserido no inicio:";
				scanf("%d",&x);
				l=insere_inicio(l,x);
				break;
			case 2:
				cout<< "Diga o valor a ser inserido no final:";
				scanf("%d",&x);
				l=insere_fim(l,x);
				break;
			case 3:
				l=remove_inicio(l);
				break;					
			case 4:
				l=remove_fim(l);
				break;
			case 5:
				cout<< "Diga o valor a ser retirado da Lista:";
				scanf("%d",&x);				
				l=remove_valor(l,x);
				break;								
			case 6:
				imprimir(l);	
				break;
			case 7:
				imprimir_inverso(l);	
				break;																
			default:
				cout<< "Opçao invalida!";														
		}
	}while(op>=1 && op<8); 
	return 0;
}
