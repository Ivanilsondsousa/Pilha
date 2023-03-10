#include <stdio.h>
#include <stdlib.h>
#define tamanho 9

typedef struct tipo_pilha{
	int dados [tamanho];
	int ini;
	int topo;	
}tipo_pilha;

tipo_pilha pilha1;
tipo_pilha pilha2;


void empilha (int elemento, tipo_pilha *p) {
	if (p->topo == tamanho){
		printf("pilha cheia.\n");
		system("pause");		
	}
	else
	{
		p->dados[p->topo] = elemento;
		p->topo++;
	}
	
	
}

int desempilha  (tipo_pilha *p){

	int elemento;
	
	if (p->topo == p->ini) {
		printf("pilha vazia.\n");
		system("pause");
	}
	else
	{
		p->topo--;
		elemento = p->dados[p->topo];
		return elemento;
		
	}

}


void imprimir(tipo_pilha *p){
	int i;
	printf("\n"); 
	for(i=0;i<tamanho;i++){
	printf("%d", p->dados[i]);
		
	}
}

int main () {
	pilha1.topo = 0;
	pilha1.ini = 0;
 
    pilha2.topo = 0;
	pilha2.ini = 0;
		

	

	empilha(1, &pilha1);
	empilha(9, &pilha1);
	empilha(1, &pilha1);
    empilha(4, &pilha1);
	empilha(7, &pilha1);
	empilha(6, &pilha1);
	empilha(4, &pilha1);
	empilha(3, &pilha1);
	empilha(5, &pilha1);
	

	imprimir(&pilha1);
	printf("\n"); 
	
    empilha(desempilha(&pilha1),&pilha2);
	empilha(desempilha(&pilha1),&pilha2);
	empilha(desempilha(&pilha1),&pilha2);
	empilha(desempilha(&pilha1),&pilha2);
	empilha(desempilha(&pilha1),&pilha2);
	empilha(desempilha(&pilha1),&pilha2);
	empilha(desempilha(&pilha1),&pilha2);
	empilha(desempilha(&pilha1),&pilha2);
	empilha(desempilha(&pilha1),&pilha2);


	imprimir(&pilha2);

}

