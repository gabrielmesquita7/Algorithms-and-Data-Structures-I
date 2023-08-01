#ifndef LISTA_H 
#define LISTA_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAXTAM 5

typedef struct Item{
	int val;
}Item;

typedef struct Lista{
	Item vet[MAXTAM];
	int first;
	int last;
}Lista;


void FLVazia(Lista *l);
void LInsert(Lista *l, Item d);
int maxSoma(Lista *l);
void LImprime(Lista *l);

#endif