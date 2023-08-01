#ifndef LISTA_H 
#define LISTA_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<time.h>

#define MAXTAM 100

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
void RemoveSameNames(Lista *l, Item *d);
void LImprime(Lista *l);
void Swap(Item *a, Item *b);

#endif