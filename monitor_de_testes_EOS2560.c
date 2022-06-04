//bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include<time.h>
#include<Windows.h>

//arquivos de cabeçalho
#include "tarefa.h"
#include "recursos.h"
#include "semaforo.h"

// assinatura de inicialização de SO
void iniciaEOS2560();

// assinatura das tarefas implementadas
void codigoTarefa1();
void codigoTarefa2();
void codigoTarefa3();
void codigoTarefa4();


int main(void){
	//criação das tarefas	
	//tn = criarTarefa(ptrFunc Xcodigo, char *Xnome, int Xperiodo, int Xhabilitacao, int Xprioridade);	
	Tarefa t1, t2, t3, t4;
	Tarefa *ptrT1, *ptrT2, *ptrT3, *ptrT4;
	
	
	Tarefa *ptrT1 = criarTarefa(codigoTarefa1, "tarefa 1", 10, 1, 1);	
	impressora(t1 -> codigo);
				 										 	 								
	Tarefa *ptrT2 = criarTarefa(codigoTarefa2, "tarefa 2", 10, 1, 1);	
	impressora(t2 -> codigo);
		
	Tarefa *ptrT3 = criarTarefa(codigoTarefa3, "tarefa 3", 10, 1, 1);
	impressora(t3 -> codigo);
			
	Tarefa *ptrT4 = criarTarefa(codigoTarefa4, "tarefa 4", 10, 1, 1);	
	impressora(t4 -> codigo);	
		
	
	impressora(t3 -> codigo);
	
	
	
	
		
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





	

