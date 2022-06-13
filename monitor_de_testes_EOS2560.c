//bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include<time.h>
#include<Windows.h>
#include<stdbool.h>
#include<pthread.h>

//arquivos de cabeçalho
#include "EOS2560.h"
#include "tarefa.h"
#include "semaforo.h"
#include "temporizador.h"
#include "fila.h"
#include "escalonador.h"

// assinatura das funções das tarefas implementadas
void codigoTarefa0(void *arg);
void codigoTarefa1(void *arg);
void codigoTarefa2(void *arg);
void codigoTarefa3(void *arg);
void codigoTarefa4(void *arg);
void codigoTarefa5(void *arg);
void codigoTarefa6(void *arg);
void codigoTarefa7(void *arg);

int varG;
Semaforo s;


int main(void){
	Tarefa t0, t1, t2, t3, t4, t5, t6, t7;
	
	criarTarefa(codigoTarefa0, "tarefa 0", 3, 10, &t0);
	criarTarefa(codigoTarefa1, "tarefa 1",  1, 20, &t1);			 										 	 								
	criarTarefa(codigoTarefa2, "tarefa 2", 2, 10, &t2);		
	criarTarefa(codigoTarefa3, "tarefa 3", 5, 30, &t3);	
	criarTarefa(codigoTarefa4, "tarefa 4", 3, 25, &t4);
	criarTarefa(codigoTarefa5, "tarefa 5",  1, 25, &t5);			 										 	 								
	criarTarefa(codigoTarefa6, "tarefa 6", 2, 25, &t6);		
	criarTarefa(codigoTarefa7, "tarefa 7", 5, 25, &t7);
		

	Tarefa pilha0[4] = {t0,t1,t2,t3};
	Tarefa pilha1[4] = {t4,t5,t6,t7};
	
	//iniciaEOS2560(pilha, 4);
	cooperacao(pilha1, 4);
	return 0;	
}

void codigoTarefa0(void *arg){
	while(1){
		varG++;
		printf("executando Tarefa 0 varG = %d \n", varG);
		Sleep(500);
	}
}

// código das tarefas
void codigoTarefa1(void *arg){
	while(1){
		varG++;
		printf("executando Tarefa 1 varG = %d \n", varG);
		Sleep(500);
	}	
}

void codigoTarefa2(void *arg){
	while(1){
		varG--;
		printf("executando Tarefa 2 varG = %d \n", varG);
		Sleep(500);
	}
}

void codigoTarefa3(void *arg){
	while(1){
		if (varG == 10){
			varG = 0;
		}	
		printf("executando Tarefa 3 varG = %d \n", varG);
		Sleep(500);
	}
}

void codigoTarefa4(void *arg){
	printf("executando Tarefa 4 varG = %d \n", varG);
}

void codigoTarefa5(void *arg){

	printf("executando Tarefa 5 varG = %d \n", varG);
}

void codigoTarefa6(void *arg){
	printf("executando Tarefa 6 varG = %d \n", varG);
}

void codigoTarefa7(void *arg){
	printf("executando Tarefa 7 varG = %d \n", varG);
}



