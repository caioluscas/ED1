#include "Lista_Enc_Si.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Lista * l;
	l = inicializa();
	libera(l);
	l = insere_inicio(l,45);
	l = insere_inicio(l,7);
	
	l = retira(l,79);
	
	l = insere_inicio(l,90);
	l = insere_inicio(l,2);
	
	imprime(l);
	return 0;
}
