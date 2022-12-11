#include "BubbleSort.h"
#include "VetBubbleSort.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu(){
	cout<< "====================================\n";
	cout<< "\t\tMenu\n";
	cout<< "====================================\n";
	cout<< "1- Insere Inicio\n";
	cout<< "2- Insere Fim\n";	
	cout<< "3- Ordenar BubbleSort\n";
	cout<< "4- Busca Sequencial\n";	
	cout<< "5- Busca Binaria  \n";
	cout<< "6- Imprime\n";
	cout<< "->";
}
int main(int argc, char** argv) {
	int size=0;
	int op;
	int *vetor;
	int x;
	bool achou;
	vetor=inicializa(vetor);
	
	do{
		menu();
		scanf("%d",&op);
		
		switch(op){
			
			case 1:
				cout<< "Digite o inicio do vetor:";
				scanf("%d",&x);
				vetor=insere_inicio(vetor,x,size);
				break;	
				
			case 2:
				cout<< "Digite o final do vetor:";
				scanf("%d",&x);
				vetor=insere_fim(vetor,x,size);
				break;
				
			case 3:
				cout<<  "vetor ordenando!\n";
				BubbleSort(vetor,size);
				break;
				
			case 4:
				cout<< "Diga o valor para ser buscado:\n";
				scanf("%d",&x);
				achou=busca_seq(vetor,x,size);
				if(achou==true){
					cout<< "Achou o elemento!\n";
				}else{
					cout<< "Nao achou o elemento!\n";
				}
				break;	
											
			case 5:
				cout<< "Informe o valor para a busca:\n";
				scanf("%d",&x);
				achou=busca_bin(vetor,x,size);
				if(achou==true){
					cout<< "Achou o elemento!\n";
				}else{
					cout<< "Nao achou o elemento!\n";
				}
				break;
				
			case 6:
				imprime(vetor,size);	
				break;																				
			default:
				cout<< "Opçao invalida!";														
		}
		
	}while(op>0 && op<7); 
	
	return 0;
}
