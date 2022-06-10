#include "semaforo.h"
#include "tarefa.h" 

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
		free(s->tarefaExecucao);
	}
}

// função de execução do semáforo
void iniciarSemaforo(Semaforo *s){
	int tempoDisponivel = s->tarefaExecucao->periodo; //tempo disponivel para executar a tarefa
	clock_t tempo;
	tempo = clock(); // inicio da execucao
	printf("%d\n", tempo);
	if(s->ocupado == 1){
		while(tempo < tempoDisponivel){
			s->tarefaExecucao->codigo();
			tempo = clock() - tempo;
		}	
		s->ocupado = 0;
	}

}

