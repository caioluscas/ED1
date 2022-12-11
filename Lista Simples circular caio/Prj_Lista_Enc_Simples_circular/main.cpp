#include "Lista.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu(){
	cout << "\nLista Encadeada Simples com Métodos Auxiliares\n";
	cout << "1 - Inserir no inicio\n";
	cout << "2 - Inserir no fim\n";
	cout << "3 - Imprime inicio\n";
	cout << "4 - Imprime fim\n";
	cout << "5 - Tamanho\n";
	cout << "6 - Ocorrencia\n";
	cout << "7 - Buscar\n";
	cout << "8 - Remove inicio\n";
	cout << "8 - Remove fim\n";
	cout << "9 - Remove valor solicitado\n";
	cout << "10 - Imprimir Recursivo\n"; //B
	cout << "11 - Retira recursivo\n";   //B
	cout << "12 - Libera Recursivo\n";
	cout << "13 - Libera Recursivo 2\n";
	cout << "14 - IsEmpty?\n";
	cout << "15 - Free\n";
}
int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	Lista* l; /* declara uma lista não inicializada */
 	l = inicializa(); /* inicializa lista como vazia */
 	int op(0), x;
 	
 	do{
 		menu();
 		cin >> op;
 		switch(op){
 			case 1:
 				cout <<"\nDiga um valor para inserir no inicio: ";
 				cin >> x;
 				l = insere_inicio(l, x);
 				break;
 				
 			case 2:
 				cout <<"\nDiga um valor para inserir no fim: ";
 				cin >> x;
 				l = insere_fim(l, x);
 				break;
 				
 			case 3:
 				imprime_inicio(l);
 				break;
 				
 			case 4:
 				imprime_fim(l);
 				break;
 				
 			case 5:
 				cout <<" Tamanho: " << size(l)<<"\n";
 				break;
 				
 			case 6:
 				/*cout<< "Diga o numero para ver suas ocorrências: ";
 				cin >> x;
 				ocorrencia(l,x);*/
 				break;
 				
 			case 7:
 				cout << "Diga um valor para ser buscado: ";
 				cin >> x;
 				busca(l,x);
 				break;
 				
 			case 8:
 				l = remove_inicio(l);
 				break;
 			case 9:
 				l = remove_fim(l);
 				break;
 			case 10:
 				
 				break;
 				
 			case 11:
 				
 				break;
 			default:
 				cout <<"Opção inválida!";
 				
		 }
	 }while(op>0 && op<11);
	return 0;
}

