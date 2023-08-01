#ifndef LISTA_H 
#define LISTA_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

#define MAXTAM 30
#define MAXC 1024

typedef struct Item{
	char val[20];
}Item;

typedef struct Lista{
	Item vet[MAXTAM];
	int first;
	int last;
}Lista;


void FLVazia(Lista *l);
void LInsert(Lista *l, Item d);
void LImprime(Lista *l);
void MaximaCadeia(FILE *ptr, Lista *l);


#endif