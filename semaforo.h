#ifndef SEMAFORO_H
#define SEMAFORO_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "tarefa.h"


// ponteiro da função
typedef void(*ptrFunc)(); 

// estrutura de criação dos semáforos
typedef struct{
	int ocupado;  
	Tarefa *tarefaExecucao; 
}Semaforo;

// funções relacionadas ao uso de semáforos
void criarSemaforo(Semaforo *s);
void obterSemaforo(Semaforo *s, Tarefa *t);
void liberarSemaforo(Semaforo *s);
void iniciarSemaforo(Semaforo *s);

#endif