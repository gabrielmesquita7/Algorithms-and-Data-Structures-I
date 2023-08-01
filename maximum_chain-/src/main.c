#include "lista.h"


int main(){
	FILE *myfile = fopen ("nucleotide_sequence.txt", "r");
	Lista l;


	FLVazia(&l);
	MaximaCadeia(myfile, &l);


	return 0;
}
