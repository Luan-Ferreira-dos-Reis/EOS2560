#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include<time.h>
#include<Windows.h>

#include "tarefa.h"

// assinaturas dos códigos das tarefas

void imprimeSequencia(int *num);
void sequenciaAleatoria();
void imprimeLetras();
void exibeMensagem();
void emiteSom();

int main(void){
	
// variáveis auxiliares na execução do teste
	srand(time(NULL));
	int *ptr;
	int numero = rand()%1000;
	ptr = &numero;
	
	
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
	
	Tarefa t4 = {.codigo = sequenciaAleatoria,
				 .nome = "Sequencia Aleatoria",
				 .periodo = 10,
				 .habilitacao = 0,
				 .prioridade = 1						
				 							};
				 							
	Tarefa t5 = {.codigo = emiteSom,
				 .nome = "emite som",
				 .periodo = 10,
				 .habilitacao = 0,
				 .prioridade = 1						
				 							};
	
	while(ciclos < 10){
		if(tempo > 0 && tempo <= 20){
			printf("%s\n: ", t1.nome);
			t1.codigo(ptr);
		}
		if(tempo > 20 && tempo <= 40){
			printf("%s\n: ", t2.nome);
			t2.codigo();
		}
		if(tempo > 40 && tempo <= 60){
			printf("%s\n: ", t3.nome);
			t3.codigo();
		}
		if(tempo > 60 && tempo <= 80){
			printf("%s\n: ", t4.nome);
			t4.codigo();
		}
		if(tempo > 80 && tempo <= 100){
			printf("%s\n: ", t5.nome);
			t5.codigo();
		}
		
		tempo++;
		if (tempo == 100){
			ciclos++;
			tempo = 0;	
		}
	Sleep(500);		
	}
	

	return 0;
}


// implementação das funções das tarefas

void imprimeSequencia(int *num){
	printf("%d\n " ,*num);
	*num += 1;
}



void imprimeLetras(){
	Sleep(100);
	int l1,l2,l3,l4;
	int num = rand();
	
	l1 = num%10000;
	l2 = num%1000;
	l3 = num%100;
	l4 = num%10;
	
	printf("%c%c%c%c\n", l1,l2,l3,l4);
}

void exibeMensagem(){
	Sleep(100);
	int num = rand();
	num = num%3;
	if(num == 0){
		printf("bom dia!\n");	
	}
	if(num == 1){
		printf("como vai?\n");
	}
	else{
		printf("até logo\n");
	}
}


void sequenciaAleatoria(){
	Sleep(100);
	int num = rand()%100;
	printf("%d\n " ,num);
}

void emiteSom(){
	int freq = 20 + rand()%20000;
	printf("frequencia: %d\n", freq);
	Beep(freq, 1000);
}