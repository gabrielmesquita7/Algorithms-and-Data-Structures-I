#include "lista.h"

void Swap(Item *a, Item *b){
	Item aux;
	aux = *a;
	*a  = *b;
	*b  = aux;
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

void RemoveSameNames(Lista *l, Item *d){
	//Feito a remoção dos mesmos nomes, todo espaço vazio recebe um booleano com o valor true,
	//dizendo que aquele espaço pode ser feito uma nova insercao
	bool insert = false;
	strcpy(d->val,l->vet[0].val); 
	for(int j=0;j<MAXTAM;j++){
		if(strcmp(l->vet[1].val, " ") != 0){
			for(int i=j+1; i<l->last; i++){
				if(strcmp(d->val, l->vet[i].val) == 0){
					strcpy(l->vet[i].val," ");
					insert = true;
				}else{
					insert = false;
				}
				if(insert == true){
					strcpy(l->vet[i].val,"R");
				}
			}
		}
	strcpy(d->val,l->vet[j+1].val);
	}
}



void LImprime(Lista *l){
	for(int i=l->first; i<l->last; i++)
		printf("%s\t", l->vet[i].val);
	printf("\n");
}






