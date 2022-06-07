#ifndef EOS2560
#define EOS2560

#include <time.h>

#include "tarefa.h"
#include "semaforo.h"
#include "temporizador.h"
#include "fila.h"

void iniciaEOS2560();
void escalonador(Semaforo *s, Tarefa pilha[], int numTarefas);

#endif