#include "Lista.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void menu(){
	cout << "\nLista Encadeada Simples com Métodos Auxiliares \n";
	cout<<"1- Inserir valor no inicio" << endl;
	cout<<"2- Inserir valor no final" << endl;
	cout<<"3- Imprimir" << endl;
	cout<<"4- Mostrar Inicio" << endl; 
	cout<<"5- Mostrar Final" << endl;	
	cout<<"6- IsEmpty? " << endl;	
	cout<<"7- Mostar Tamanho" << endl;	
	cout<<"8- Retira um elemento"<<endl;
	cout<<"9- Retira inicio"<<endl;	
	cout<<"10- Retira fim"<<endl;		
	cout<<"11- Buscar valor"<<endl;		
	cout<<"12- Ocorrencias de um valor"<<endl;
	cout<<"13 - Libera com recursividade"<<endl;
	cout<<"14 - Libera com recursividade 2 "<<endl;
	cout<<"15 - Imprime recursivo"<<endl;
	cout<<"16 - Remove recursivo"<<endl;
	cout<<"\n";	
	cout<<"Escolha uma opcao > ";	

}

int main(int argc, char** argv) {
	Lista* l;
	int op(0),x,n;
	l =inicializa(); 
	do{
		menu();
		cin >> op;
		switch(op){
			case 1: 
				cout<< "Informe um valor para ser inserido no inicio: ";
				cin >> x;
				l = insere_inicio(l,x);
				break;
				
			case 2:
				cout<< "Informe um valor para ser inserido no fim: ";
				cin >> x;
				l = inserefim(l,x);
				break;
				
			case 3:
				imprimir(l);
				break; 
			
			case 4:
				mostra_inicio(l);
				break;
			
			case 5:
				mostra_fim(l);
				break;
			
			case 6:
				if(IsEmpty(l)){
					cout<<"Lista vazia!";
				}else{
					cout<"Lista nao e vazia!";
				}
				break;
			
			case 7:
				cout<<"Tamanho: "<<size(l)<<"\n";
				break;
				
			case 8:
				cout <<"Diga o valor para remover: ";
				cin >> x;
				l = retira(l,n);
				break;
				
			case 9:
				l = remove_inicio(l);
				break;
				
			case 10:
				l = remove_fim(l);
				break;
				
			case 11:
				cout<<"Diga um valor para buscar: ";
				cin >> x;
				l = busca(l,n);
				break;
				
			case 12:
				cout<<"Informe o valor: ";
				cin>>n;
				l = ocorrencia(l, n);
				break;
				
			case 13:
				libera_rec(l);
				l = inicializa();
				break;
				
			case 14:
				libera_rec2(l);
				l = inicializa();
				break;
				
			case 15:
				imprime_recursivo(l);
				break;
				
			case 16:
				cout<< "Informe um valor para ser removido recursivamente: ";
				cin >> n;
				l = retira_rec(l,n);
				break;
				
			default:
				cout <<"Opcao invalida!\n";
		}
	}while(op>0 && op<17);
return 0;
}
