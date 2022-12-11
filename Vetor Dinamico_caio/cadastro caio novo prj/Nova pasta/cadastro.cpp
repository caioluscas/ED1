#include "cadastro.h"

cad* cadastro(cad * p, int ncad){
	fflush(stdin);
	if(ncad == 1){
		p = (cad*) malloc(ncad * sizeof(cad));
	}else if(ncad > 1){
		p = (cad*) realloc(p, ncad * sizeof(cad));
	}
	
	int x = ncad - 1;
	p[x].end = (char*) malloc (sizeof(char*));
	cout << "Nome: ";
	gets(p[x].end);
	fflush(stdin);
	
	p[x].nome = (char*) malloc (sizeof(char*));
	cout << "\nEndereço: ";
	gets(p[x].nome);
	fflush(stdin);
	
	cout << "\nRG: ";
    scanf("%d",&p[x].rg);
    fflush(stdin);
    
    cout << "\nCPF: ";
    scanf("%d",&p[x].cpf);
    fflush(stdin);
    
    return p;
}



void Exibir( int ncad, cad* p){
    for (int i = 0; i < ncad; i++)
    	//printf("%s | %s | %s | %s", &u[i-1].nome, &u[i-1].rg, &u[i-1].cpf, &u[i-1].end);
        cout <<"\nNome: "<<p[i].nome<<" Endereço: "<<p[i].end<<" RG: "<<p[i].rg<<" CPF: "<<p[i].cpf;
}


void Quantidade (int qtd){
	printf("\nQuantidade de números cadastrados: %d",qtd);
}

cad * removerult(cad * p, int *n){
	if(*n>0){
		p = (cad*) realloc (p, (*n - 1) * sizeof(cad));
		*n = *n - 1;
		cout << "Removido!";
	}
	else{
		cout << "Sem usuários para remover!";
	}
	return p;
}

cad* arquivo(cad* u, int *n)
{
	FILE *arq;
	if ((arq = fopen("arquivo.txt","w")) == NULL)
	{
		printf("Erro na abertura do arquivo\n"); 
		return 0;
	}
	for(int i=0; i<*n; i++)
	{
		fprintf(arq, "%s | %s | %s | %s", &u[i-1].nome, &u[i-1].rg, &u[i-1].cpf, &u[i-1].end); 
	}
}
