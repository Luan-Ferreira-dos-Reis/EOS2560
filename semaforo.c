#include "semaforo.h"
#include "tarefa.h" 

// funções para criar semáforo
void criarSemaforo(Semaforo *s){
	s->ocupado = false;
}

// funções para tarefa obter semáforo
void obterSemaforo(Semaforo *s){
	if(s->ocupado == false){
		s->ocupado = true;
	}
}

//função para tarefa liberar semáforo
void liberarSemaforo(Semaforo *s){
	if (s->ocupado == true){
		s->ocupado = false;
	}
}

// função de execução do semáforo


