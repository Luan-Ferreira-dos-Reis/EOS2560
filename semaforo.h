#ifndef SEMAFORO_H
#define SEMAFORO_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "tarefa.h"

// estrutura de criação dos semáforos
typedef struct{
	int ocupado;   // status do semáforo
}Semaforo;

// funções relacionadas ao uso de semáforos
void criarSemaforo(Semaforo *s);
void obterSemaforo(Semaforo *s);
void liberarSemaforo(Semaforo *s);

#endif