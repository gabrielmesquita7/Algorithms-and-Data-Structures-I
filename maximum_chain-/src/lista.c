#include "lista.h"

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

void MaximaCadeia(FILE *ptr, Lista *l){
	bool ok = true;
	char INPUT[MAXTAM][20]; //input
	char OUTPUT[MAXTAM][20]; //output
	int x = 0, counter = 0, y = 0;
	char buff[MAXC] = "";
	char *token = NULL;
	const char *delim = " ";
	Item aux;

	if (!ptr){
		perror ("abertura do arquivo falhou\n");
	}

	while(fgets(buff, MAXC, ptr) != NULL){
		size_t len = strlen(buff);
		if (len == MAXC - 1 && buff[len-1] != '\n'){
			fputs ("error: linha muito longa.\n", stderr);
		}
		if (counter == 0){ //linha 0
			for (token = strtok(buff, delim); token; token = strtok(NULL, delim)){
				strcpy(aux.val,token);
				LInsert(l, aux);
			}
		}
		if (counter == 1){ //linha 1
			for (token = strtok(buff, delim); token; token = strtok(NULL, delim)){
				strcpy(INPUT[x],token);
				x++;
			}
		}
		counter++;
	}
	fclose (ptr);
	//IMPRIME A LISTA E O INPUT
	for(int i=0;i<x;i++){
		printf("%s\t", INPUT[i]);
	}
	printf("\n");
	LImprime(l);
	//LOGICA MAIOR CADEIA
	for(int j=1;j<x;j++){
		if(ok == false){
			break;
		}
		for(int i=1;i<MAXTAM;i++){
			if(strcmp(INPUT[j], l->vet[i].val) == 0){
				strcpy(OUTPUT[y],l->vet[i].val);
				y++;
				ok = true;
				break;
			}else{
				ok = false;
			}
		}
	}
	printf("Cadeia: \n");
	for(int i=0;i<y;i++){
		printf("%s\t", OUTPUT[i]);
	}
	printf("\n");
}

void LImprime(Lista *l){
	for(int i=l->first; i<l->last; i++)
		printf("%s\t", l->vet[i].val);
	printf("\n");
}






