#include<stdio.h>


int main() {
	int A, D, Atacante, aux, Defensor, Imp, i;

	while(1) {
		scanf("%d %d", &A, &D);
		if(A == 0 || D == 0) break;

		Imp = 0; Atacante = 10000;

		for(i=0; i<A; i++) {
			scanf("%d", &aux);
			if(aux < Atacante) Atacante = aux;
		}

		for(i=0; i<D; i++) {
			scanf("%d", &Defensor);
			if(Atacante < Defensor) Imp++;
		}

		D -= Imp;

		if(D < 2) printf("Y\n");
		else printf("N\n");

	}
	return 0;
}

