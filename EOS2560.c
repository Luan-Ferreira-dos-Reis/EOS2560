//funções de núcleo

#include "EOS2560.h"

void iniciaEOS2560(){
	printf("iniciando sistema...\n");
}

void escalonador(Semaforo *s, Tarefa *ts, int numTarefas){
	time_t inicio = time(NULL);
	int i;
	for (i = 0; i < numTarefas; i++){
		//obterSemaforo(&s, ts[i]);
		ts[i].codigo();
		//liberarSemaforo(&s);
	}
	
	time_t atual = time(NULL) - inicio;
}

