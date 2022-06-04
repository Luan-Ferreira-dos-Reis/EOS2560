#include "tarefa.h"

// funções relacionadas a tarefas
void criarTarefa(ptrFunc Xcodigo, char *Xnome, int Xperiodo, int Xprioridade, Tarefa *novaTarefa){
	novaTarefa->codigo = Xcodigo;
	novaTarefa->nome = Xnome;
	novaTarefa->periodo = Xperiodo;
	novaTarefa->prioridade = Xprioridade;
}