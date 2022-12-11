#include <locale.h>
#include "fila.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void menu(){
	cout << "\nMenu\n";
	cout << "1 - Enqueue\n";
	cout << "2 - Dequeue\n";
	cout << "3 - Print\n";
	cout << "4 - Front\n";
	cout << "5 - IsEmpty\n";
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	fila * f = (fila*) malloc(sizeof(fila*));
	int op, x;
	initFila(f);
	
	do{
		menu();
		cin >> op;
			switch(op){
				case 1:
					cout << "Diga um número: ";
					cin >> x;
					enqueue(x, f);
					break;
					
				case 2:
					dequeue(f);
					cout<<"\nFila: ";
					print(f);
					break;
					
				case 3:
					print(f);
					break;
					
				case 4:
					front(f);
					break;
					
				case 5:
					if(IsEmpty(f)){
						cout <<"Vazia!";
					}else{
						cout << "Não é vazia!";
					}
					
					break;
					
				default: cout <<"Opção inválida!";
				break;
				
			}
	}while(op>0 && op<6);
	return 0;
}
