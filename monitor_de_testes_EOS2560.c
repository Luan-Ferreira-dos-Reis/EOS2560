//bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include<time.h>
#include<Windows.h>
#include<stdbool.h>

//arquivos de cabeçalho
#include "tarefa.h"
#include "semaforo.h"

// assinatura de inicialização de SO
void iniciaEOS2560();

// assinatura das tarefas implementadas
void codigoTarefa1();
void codigoTarefa2();
void codigoTarefa3();
void codigoTarefa4();


int main(void){
	Tarefa t1, t2, t3, t4;
	criarTarefa(codigoTarefa1, "tarefa 1", 10, 2, &t1);			 										 	 								
	criarTarefa(codigoTarefa2, "tarefa 2", 20, 1, &t2);		
	criarTarefa(codigoTarefa3, "tarefa 3", 15, 3, &t3);	
	criarTarefa(codigoTarefa4, "tarefa 4", 5, 1, &t4);
	
	srand(time(NULL));	
	int tempo =  rand()%1000;
	
	Semaforo s1;
	criarSemaforo(&s1);	
	
	obterSemaforo(&s1, &t1);	 	
	iniciarSemaforo(&s1);
	
	
	obterSemaforo(&s1, &t2);	 	
	iniciarSemaforo(&s1);

	
	obterSemaforo(&s1, &t3);	 	
	iniciarSemaforo(&s1);

	
	obterSemaforo(&s1, &t4);	 	
	iniciarSemaforo(&s1);
	
	return 0;	
}


// código das tarefas
void codigoTarefa1(){
	printf("executando Tarefa 1\n");
}

void codigoTarefa2(){
	printf("executando Tarefa 2\n");
}

void codigoTarefa3(){
	printf("executando Tarefa 3\n");
}

void codigoTarefa4(){
	printf("executando Tarefa 4\n");
}
