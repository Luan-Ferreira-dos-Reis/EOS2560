//funções de núcleo

#include "EOS2560.h"

void iniciaEOS2560(){
	printf("iniciando sistema...\n");
}

void escalonador(Semaforo *s, Tarefa pilha[], int numTarefas){
	time_t inicio = time(NULL);
	int i;
	for (int i = 0; i < numTarefas; i++){
		obterSemaforo(s, &pilha[i]);
		iniciarSemaforo(s);
		liberarSemaforo(s);
	}
	
	time_t atual = time(NULL) - inicio;
}

