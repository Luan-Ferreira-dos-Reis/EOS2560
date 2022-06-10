//funções de núcleo

#include "EOS2560.h"

void iniciaEOS2560(Tarefa pilha[], int numTarefas){
	pthread_t threads[numTarefas];
	printf("iniciando sistema...\n");
	int i;
	for(i = 0; i < numTarefas; i++){
		pthread_create(&(threads[i]), NULL, pilha[i].codigo, NULL);
	}
	
	for(i = 0; i < numTarefas; i++){
		pthread_join(threads[i], NULL);
	}
}


