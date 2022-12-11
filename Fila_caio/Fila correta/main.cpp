#include <iostream>
#include <stdlib.h>
#include "fila.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

void menu(){
	cout << "Stack options:" <<endl;
	cout << "1- Enqueue" <<endl;
	cout << "2- Dequeue" <<endl;
	cout << "3- Size" <<endl;
	cout << "4- isEmpty" <<endl;
	cout << "5- Front" <<endl;
	cout << "6- Print" <<endl;
	cout << "7- Free" << endl;
	cout << "Other to quit" << endl;
	cout << "? ";
}



int main(int argc, char** argv) {
	
	unsigned int op(0);
	fila f;
	inicio_fila(&f);
	int x;
	
	do{
		menu();
		cin >> op;
		
		switch (op){
			
			case 1:
				cout << "Number to insert: ";
				cin >> x;
				cout << endl; //????
				enqueue(x, &f);
				break;
				
			case 2:
				x = dequeue(&f);
				if (x != -99)
					cout << "Removed: " << x << endl;
				break;
				
			case 3:
				cout << "Queue size: " << size(&f) << endl;
				break;	
			
			case 4:
				if (isEmpty(&f))
					cout << "Stack is empty!" << endl;
				else 	
					cout << "Stack is not empty!" << endl;
				break;
			
			case 5:
				x = front(&f);
				if (x != -99)
					cout << "At front: " << x << endl;
				break;
				
			case 6:
				print(&f);
				break;
			
			case 7:
				kill_stack(&f);
				cout << "Free stack executed!" << endl;
				break;
		
			default: 
				cout<<"Option is not valid!\n";
		
		}cout << endl;
		
	}while(op > 0 && op < 8);	
	
	cout << "End of Stack Program!" << endl;
	kill_stack(&f);
		
	return 0;
}
