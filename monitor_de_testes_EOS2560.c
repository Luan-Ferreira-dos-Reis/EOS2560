//bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include<time.h>
#include<Windows.h>
#include<stdbool.h>

//arquivos de cabeçalho
#include "EOS2560.h"
#include "tarefa.h"
#include "semaforo.h"
#include "temporizador.h"
#include "fila.h"



// assinatura das tarefas implementadas
void codigoTarefa1();
void codigoTarefa2();
void codigoTarefa3();
void codigoTarefa4();


int main(void){
	Tarefa t1, t2, t3, t4;
	criarTarefa(codigoTarefa1, "tarefa 1",  10, 2, &t1);			 										 	 								
	criarTarefa(codigoTarefa2, "tarefa 2", 20, 1, &t2);		
	criarTarefa(codigoTarefa3, "tarefa 3", 15, 3, &t3);	
	criarTarefa(codigoTarefa4, "tarefa 4", 05, 1, &t4);
	Tarefa pilha[4] = {t1,t2,t3,t4};
	int numTarefas = 4;
	
	Semaforo s1;
	criarSemaforo(&s1);
	
	iniciaEOS2560();

	escalonador(&s1, pilha, numTarefas);
	
	return 0;	
}



// código das tarefas
void codigoTarefa1(){
	//while(1){
		printf("executando Tarefa 1\n");
	//}	
}

void codigoTarefa2(){
	//while(1){
		printf("executando Tarefa 2\n");
	//}
}

void codigoTarefa3(){
	//while(1){
		printf("executando Tarefa 3\n");
	//}
}

void codigoTarefa4(){
	//while(1){
		printf("executando Tarefa 4\n");
	//}
}
