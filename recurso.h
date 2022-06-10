#ifndef RECURSO_H
#define RECURSO_H

// ponteiro da função
typedef void(*ptrFunc)(); 

// estrutura para criação de tarefas
typedef struct{
  char *nome;                 // nome do recurso
  ptrFunc codigo;             // código da tarefa
}Recurso;

#endif