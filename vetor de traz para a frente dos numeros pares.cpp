#include <stdio.h>

int main(){
	int z, vet[11], t=10;
	
	for(z=0;z<11;z++){
		vet[z]=t;
		t++;
		printf("o numero crecente do vetor e: %d\n", vet[z]);
	}
	
	printf("\n\n");
	
	for(z=10;z>=0;z=z-2){
		printf("%d",vet[z]);
		printf("\n\n");
	}
	
	printf("\n\n");
	return(0);
}