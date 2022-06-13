#include "escalonador.h"

void cooperacao(Tarefa pilha[], int numTarefas){
	int i;  
    struct timeval tempo_inicio;  //estruturas para aferir o tempo
    struct timeval tempo_atual;
    float tempo_execucao;

    //executa a funcao de cada tarefa no tempo solicitado para execucao
    for(i = 0; i < numTarefas; i++){
    	gettimeofday( &tempo_inicio, NULL );  // tempo inicial de execucao
		while(tempo_execucao < pilha[i].periodo){
			pilha[i].codigo(0);
			gettimeofday( &tempo_atual, NULL );
			//calcula tempo de execução
	    	tempo_execucao = (float)(tempo_atual.tv_sec - tempo_inicio.tv_sec);  
	    	tempo_execucao += (tempo_atual.tv_usec - tempo_inicio.tv_usec)/(float)1000000;	
		}
	}
}