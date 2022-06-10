#ifndef SEMAFORO_H
#define SEMAFORO_H

// estrutura de criação dos semáforos
typedef struct{
	int ocupado;   // status do semáforo
}Semaforo;

// funções relacionadas ao uso de semáforos
void criarSemaforo(Semaforo *s);
void obterSemaforo(Semaforo *s);
void liberarSemaforo(Semaforo *s);

#endif