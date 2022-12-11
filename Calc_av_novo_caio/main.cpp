#include <iostream>
#include <locale> //habilitar padr�es de caracter de teclado Ptb
#include "calculadora.h"
#include "calculadora_av.h"
using namespace std;
	
	/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
	
	void menus(){
		cout<< "Escolha o menu:\n";
		cout<< "0 - Menu TESTE" <<endl;
		cout<< "1 - MENU CALCULADORA" <<endl;
		
	}
	
	void menu_teste(){
		cout << "Escolha op��o:\n";
		cout << "1- Potencia" << endl;
		cout << "2- Raiz" << endl;
		cout << "3- � primo?" <<endl;
		cout << "4- Ver se � �mpar ou par" <<endl;
	}
	
	void menu(){
		cout << "Escolha op��o:\n";
		cout << "1- Soma" << endl;
		cout << "2- Subtra��o" << endl;
		cout << "3- Multiplica��o" << endl;
		cout << "4- Divis�o" << endl;
		cout << "5- Potencia" << endl;
		cout << "6- Raiz" << endl;
		
		cout << "Qq outra para sair.\n";
		cout << "Op��o: ";
	}
	
	float ler_numero(int i){
		cout << "Informe N" << i <<": ";
		float tmp;
		cin >> tmp;
		return tmp;
	}
	
	
	
	void mostra_resultado(float res){
		cout << "Resultado: " << res << endl;
	}
	
	int main(int argc, char** argv) {
		setlocale(LC_ALL, "Portuguese");
	
		//criar condi��es de calcular opera��es aritm�ticas entre n1 e n2...
		int op(1); //obter op�ao de menu
		float n1, n2; //n�meros para opera��es da calculadora
		
		
	do{
		//Mostra as op��es de menus
		menus(); 
		cin >> op;
		//2- ler op��o e chamar a fun��o desejada na bib calculadora - passar n1 e n2... back-end
		float tmp;
		if(op==0){
			menu_teste();
			cin >>op;
			switch(op){
				case 1:
					n1 = ler_numero(1);
					n2 = ler_numero(2);
					tmp = potencia(n1, n2);
					mostra_resultado(tmp);
					break;
					
				case 2:
					n1 = ler_numero(1);
					tmp = raiz(n1);
					mostra_resultado(tmp);
					break;
					
				case 3:
					bool tmp;
					n1 = ler_numero(1);
					tmp = primo(n1);
					if(tmp == true){
						printf("� primo\n");
					}else{
						printf("N�o � primo\n");
					}
					break;
					
				case 4:
					
					n1 = ler_numero(1);
					tmp = imparPar(n1);
					if(tmp == true){
						printf("Par!\n");
					}
					else{
						printf("�mpar!\n");
					}
					break;
			
					
				default: cout<<"Op��o inv�lida, fim do programa!"<<endl;
					
			}
		}else if(op==1){
			
		
		
		do{
	
			//1- apresentar menu de op��es p escolha de opera��es: 1-soma,2-subtra��o,3-multiplica��o,4-divis�o
			menu();	
			cin >> op;
			switch(op){
				case 1: //soma
					n1 = ler_numero(1);
					n2 = ler_numero(2);
					//invocar soma da biblioteca
					tmp = soma(n1, n2);
					mostra_resultado(tmp);
					break;
				case 2: //subtracao
					n1 = ler_numero(1);
					n2 = ler_numero(2);
					//invocar subtracao da biblioteca
					tmp = subtracao(n1, n2);
					mostra_resultado(tmp);
					break;
				case 3: //multiplicacao
					n1 = ler_numero(1);
					n2 = ler_numero(2);
					//invocar multiplicacao da biblioteca
					tmp = multiplicacao(n1, n2);
					mostra_resultado(tmp);
					break;
				case 4:	//divisao
					n1 = ler_numero(1);
					n2 = ler_numero(2);
					//invocar divisao da biblioteca
					tmp = divisao(n1, n2);
					mostra_resultado(tmp);
					break;
					
				case 5:
					n1 = ler_numero(1);
					n2 = ler_numero(2);
					tmp = potencia(n1,n2);
					mostra_resultado(tmp);
					break;
					
				case 6:
					n1 = ler_numero(1);
					tmp = raiz(n1);
					mostra_resultado(tmp);
					
					break;
				default: cout << "Op��o inv�lida e fim de programa!\n";
			}
				
		}while(op>=1 && op<=4);
		}
	}while(op>=0 && op<=1);
		
		cout << "Fim de programa!\n";
		system("pause");
		
		return 0;
	}
