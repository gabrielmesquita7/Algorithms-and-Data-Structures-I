#include "lista.h"

int main(){
	const char nomes[41][20] = {{"Miguel"}, {"Davi"}, {"Gabriel"}, {"Arthur"}, {"Lucas"}, {"Matheus"},
			 				{"Pedro"}, {"Guilherme"}, {"Gustavo"}, {"Rafael"}, {"Felipe"}, {"Bernardo"},
							{"Enzo"}, {"Nicolas"}, {"Caua"}, {"Vitor"}, {"Eduardo"}, {"Daniel"}, 
							{"Henrique"}, {"Murilo"}, {"Vinicius"}, {"Samuel"}, {"Pietro"}, {"Leonardo"}, 
							{"Caio"}, {"Heitor"}, {"Lorenzo"}, {"Isaac"}, {"Lucca"}, {"Thiago"}, 
							{"Joao"}, {"Theo"}, {"Bruno"}, {"Bryan"}, {"Breno"}, {"Emanuel"}, 
							{"Ryan"}, {"Yuri"}, {"Benjamin"}, {"Erick"}, {"Fernando"}};
	
	Lista l;
	Item aux;
	FLVazia(&l);

	int j=0;

	srand(time(NULL));
	for(int i=0;i<100;i++){
		j=0;
		j = rand()%40;
		strcpy(aux.val, nomes[j]);  
		LInsert(&l, aux);
	}

	LImprime(&l);
	RemoveSameNames(&l, &aux);
	printf("----------------------------\n\n");
	LImprime(&l);
	
	return 0;
}
