#include "semaforo.h"
#include "tarefa.h" 

// funções para criar semáforo
void criarSemaforo(Semaforo *s){
	s->ocupado = 0;
}

// funções para tarefa obter semáforo
void obterSemaforo(Semaforo *s){
	if(s->ocupado == 0){
		s->ocupado = 1;
	}
}

//função para tarefa liberar semáforo
void liberarSemaforo(Semaforo *s){
	if (s->ocupado == 1){
		s->ocupado = 0;
	}
}

// função de execução do semáforo


