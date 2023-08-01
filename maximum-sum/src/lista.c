#include "lista.h"

int maxSoma(Lista *l){
	int max_soma=0;
    int soma_atual = 0;
        
    for(int i=0;i<MAXTAM;i++){
        soma_atual = soma_atual + l->vet[i].val;
        if(soma_atual < 0){
        	soma_atual =0;
		}
		if(max_soma < soma_atual){
		  max_soma = soma_atual;
		}
	}
return max_soma;

}

void FLVazia(Lista *l){
	l->first = 0;
	l->last  = 0;
}

void LInsert(Lista *l, Item d){
	if (l->last >= MAXTAM){
		printf("LISTA CHEIA!\n");
	}else{
		l->vet[l->last] = d;
		l->last ++;
	}
}

void LImprime(Lista *l){
	for(int i=l->first; i<l->last; i++)
		printf("%d\t", l->vet[i].val);
	printf("\n");
}






