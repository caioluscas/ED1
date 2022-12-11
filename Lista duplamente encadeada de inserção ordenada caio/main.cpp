#include "lista_dupla.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu(){
	printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
	printf("\t\tMenu\n");
	printf("%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n");
	cout << "1 - Insere Ordenado\n";	
	cout << "2 - Retira um valor informado\n";	
	cout << "3 - Remove um valor no inicio\n";
	cout << "4 - Remove um valor no final\n";	
	cout << "5 - Imprime inicio->fim  \n";
	cout << "6 - Imprime fim->inicio\n";
	cout << "7 - Is Empty?\n";
	cout << "8 - Busca\n";	
	
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
				cout << "Diga valor a ser inserido ordenado:";
				scanf("%d",&x);
				l=insere_ord(l,x);
				break;
	
			case 2:
				cout << "Diga o valor a ser retirado da lista:";
				scanf("%d",&x);
				l=retira(l,x);
				break;
			case 3:
				cout << "Removendo valor no inicio da lista!\n";
				l=retira_inicio(l);
				break;
			case 4:
				cout << "Removendo valor no fim da lista!\n";
				l=retira_fim(l);
				break;								
			case 5:
				imprimir_frente_fim(l);	
				break;
			case 6:
				imprimir_inverso(l);	
				break;								
			case 7:
				if(vazia(l)==NULL){
					cout << "Lista nao vazia!\n";
				}
				else{
					cout << "Lista vazia!\n";
				}
				break;
			case 8:
				cout << "Informe um valor para ser buscado:";
				scanf("%d",&x);
				busca_msg(l,x);	
				break;												
			default:
				cout << "INVALIDO!";														
		}
	}while(op>=1 && op<9); 
	return 0;
}
