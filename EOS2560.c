//funções de núcleo

#include "EOS2560.h"

void iniciaEOS2560(){
	printf("iniciando sistema...\n");
}

void escalonador(Semaforo *s, Tarefa pilha[], int numTarefas){
	
	int i;
	for (int i = 0; i < numTarefas; i++){
		obterSemaforo(s);
		printf("tarefa %s obteve semaforo\n", pilha[i].nome);
		s->recurso(pilha[i].codigo);
		liberarSemaforo(s);
		printf("tarefa %s liberou semaforo\n", pilha[i].nome);
	}
	

}

