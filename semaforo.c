#include "semaforo.h"
#include "tarefa.h" 

// funções para criar semáforo
void criarSemaforo(Semaforo *s){
	s->ocupado = 0;
}

// funções para tarefa obter semáforo
void obterSemaforo(Semaforo *s, Tarefa *t){
	if (s->ocupado == 0){
		s->ocupado = 1;
		s->tarefaExecucao = t;
	}
	else{
		if (t->prioridade < s->tarefaExecucao->prioridade){  // se é prioritário em relação a que ja está em execução a tarefa toma o semáforo
		s->tarefaExecucao = t;
		}
	}
}
 
//função para tarefa liberar semáforo
void liberarSemaforo(Semaforo *s){
	if (s->ocupado == 1){
		s->ocupado = 0;
	}
}

// função de execução do semáforo
void iniciarSemaforo(Semaforo *s){
	if(s->ocupado == 1){
		int tempo = s->tarefaExecucao->periodo;
		while(tempo > 0){
			s->tarefaExecucao->codigo();
			tempo--;
		}	
		s->ocupado = 0;
	}

}