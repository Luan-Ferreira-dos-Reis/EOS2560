#include "tarefa.h"

Tarefa *criarTarefa(ptrFunc Xcodigo, char *Xnome, int Xperiodo, int Xhabilitacao, int Xprioridade){
	Tarefa novaTarefa;
	Tarefa *ptrTarefa = &novaTarefa;
	
	novaTarefa.codigo = Xcodigo;
	novaTarefa.nome = Xnome;
	novaTarefa.periodo = Xperiodo;
	novaTarefa.habilitacao = Xhabilitacao;
	novaTarefa.prioridade = Xprioridade;
	
	return ptrTarefa;
}