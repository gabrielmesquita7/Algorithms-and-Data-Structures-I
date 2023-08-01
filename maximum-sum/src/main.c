#include "lista.h"

int main(){
	int resul,i;
	Lista l;
	Item aux;

	FLVazia(&l);

	for(i=0;i<MAXTAM;i++){
		printf("Digite o valor da lista l[%d]: ", i);
		scanf("%d", &aux.val);
		LInsert(&l, aux);
	}

	printf("-----Lista-----\n");
	LImprime(&l);	

	resul = maxSoma(&l);
	printf("Maxima soma: %d\n", resul);





	return 0;
}
