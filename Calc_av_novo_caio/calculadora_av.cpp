#include "calculadora_av.h"
float potencia(float n1, float n2){
	return pow(n1, n2);
}

float raiz (float n1){
	return sqrt(n1);
}

bool primo (int n1){
	int i, c;
	for(i=1; i<n1; i++){
		if(n1%i==0){
			c++;
		}
			
	}
	
	if(c==2){
		return true;
	}else{
		return false;
	}
return false;	
}

bool imparPar(int n1){
	bool b;
	if(n1%2==0){
		b = true;
	}
	else{
		b = false;
	}
	return b;
}
