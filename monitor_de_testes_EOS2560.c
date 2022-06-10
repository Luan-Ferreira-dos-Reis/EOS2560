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

// assinatura das tarefas implementadas
void codigoTarefa0(void *arg);
void codigoTarefa1(void *arg);
void codigoTarefa2(void *arg);
void codigoTarefa3(void *arg);

int main(void){
	Tarefa t0, t1, t2, t3;
	
	criarTarefa(codigoTarefa0, "tarefa 0", 30, 1, &t0);
	criarTarefa(codigoTarefa1, "tarefa 1",  10, 2, &t1);			 										 	 								
	criarTarefa(codigoTarefa2, "tarefa 2", 20, 1, &t2);		
	criarTarefa(codigoTarefa3, "tarefa 3", 50, 3, &t3);	

	Tarefa pilha[4] = {t0,t1,t2,t3};
	
	iniciaEOS2560(pilha, 4);
	
	return 0;	
}

void codigoTarefa0(void *arg){
	while(1){
		printf("executando Tarefa 0\n");
		Sleep(500);
	}
}

// código das tarefas
void codigoTarefa1(void *arg){
	while(1){
		printf("executando Tarefa 1\n");
		Sleep(500);
	}	
}

void codigoTarefa2(void *arg){
	while(1){
		printf("executando Tarefa 2\n");
		Sleep(500);
	}
}

void codigoTarefa3(void *arg){
	while(1){
		printf("executando Tarefa 3\n");
		Sleep(500);
	}
}



