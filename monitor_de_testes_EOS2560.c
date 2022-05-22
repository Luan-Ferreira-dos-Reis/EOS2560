#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include<time.h>

#include "tarefa.h"

void imprimeSequencia(int *num);
void imprimeLetras();
void exibeMensagem(char *mensagem);

int main(void){
	int *ptr;
	int numero = 9;
	ptr = &numero;
	char msg[30] = "mensagem a exibir\n";
	
	int tempo = 0;
	int ciclos = 0;
	
	Tarefa t1 = {.codigo = imprimeSequencia,
				 .nome = "imprime sequencia",
				 .periodo = 10,
				 .habilitacao = 0,
				 .prioridade = 1						
				 							};
				 							
	Tarefa t2 = {.codigo = imprimeLetras,
				 .nome = "imprime letras",
				 .periodo = 10,
				 .habilitacao = 0,
				 .prioridade = 1						
				 							};
				 							
	Tarefa t3 = {.codigo = exibeMensagem,
				 .nome = "exibe mensagem",
				 .periodo = 10,
				 .habilitacao = 0,
				 .prioridade = 1						
				 							};
	
	while(ciclos < 10){
		if(tempo > 0 && tempo <= 20){
			t1.codigo(ptr);
		}
		if(tempo > 20 && tempo <= 40){
			t2.codigo();
		}
		if(tempo > 40 && tempo <= 60){
			t3.codigo(msg);
		}
		if(tempo > 60 && tempo <= 80){
			t1.codigo(ptr);
		}
		if(tempo > 80 && tempo <= 100){
			t2.codigo();
		}
		
		tempo++;
		if (tempo == 100){
			ciclos++;
			tempo = 0;	
		}
		
	}
	

	return 0;
}


// funções testadas

void imprimeSequencia(int *num){
	printf("%d\n " ,*num);
	*num += 1;
}

void imprimeLetras(){
	srand(time(NULL));
	int l1,l2,l3,l4;
	int num = rand();
	
	l1 = num%10000;
	l2 = num%1000;
	l3 = num%100;
	l4 = num%10;
	
	printf("%c%c%c%c\n", l1,l2,l3,l4);
}

void exibeMensagem(char *mensagem){
	printf("%s", mensagem);
}