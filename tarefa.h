#ifndef TAREFA_H
#define TAREFA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ponteiro da função
typedef void(*ptrFunc)(); 

// estrutura para criação de tarefas
typedef struct{
  ptrFunc codigo;             // código da tarefa
  char *nome;                 // nome da tarefa
  int periodo;                // periodo disponível de execução 
  int habilitacao;           // habilitação para executar
  int prioridade              // nível de prioridade
}Tarefa;

// assinatura de funções
Tarefa *criarTarefa(ptrFunc Xcodigo, char *Xnome, int Xperiodo, int Xhabilitacao, int Xprioridade);

#endif