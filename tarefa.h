#ifndef TAREFA_H
#define TAREFA_H

// ponteiro da função
typedef void(*ptrFunc)(void *arg); 

// estrutura para criação de tarefas
typedef struct{
  char *nome;                 // nome da tarefa
  ptrFunc codigo;             // código da tarefa
  int periodo;                // periodo disponível de execução 
  int prioridade              // nível de prioridade(quanto menor mais prioritário)
}Tarefa;

// assinatura de funções
void criarTarefa( ptrFunc Xcodigo, char *Xnome, int Xperiodo, int Xprioridade, Tarefa *novaTarefa);

#endif