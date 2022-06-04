#ifndef SEMAFORO_H
#define SEMAFORO_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "tarefa.h"
#include "recursos.h"

#define MAX_TAREFAS  4

typedef void(*ptrRecurso)();  // estrutura do semáforo que gerencia uso de um recurso

typedef struct{
	ptrRecurso *recurso; 
}Semaforo;

void iniciaSemaforo(Semaforo s, Tarefa ts);
#endif