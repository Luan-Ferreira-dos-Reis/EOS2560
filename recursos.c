//simulação de recursos 

#include "recursos.h"

//recurso de imprimir
void impressora(ptrFunc codigo){
	printf("impressora: ");
	codigo();
	printf("\n");
}