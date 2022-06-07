#ifndef TAREFA_H
#define TAREFA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ponteiro da função
typedef void(*ptrFunc)(); 

// estrutura para criação de tarefas
typedef struct{
  char *nome;                 // nome da tarefa
  ptrFunc codigo;             // código da tarefa
  int periodo;                // periodo disponível de execução 
  int prioridade              // nível de prioridade
}Tarefa;

// assinatura de funções
void criarTarefa( ptrFunc Xcodigo, char *Xnome, int Xperiodo, int Xprioridade, Tarefa *novaTarefa);

#endif