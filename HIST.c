#include<stdio.h>

int main() {
	int n, cont, i, numero, j;
	int achou = 0;

	while(1) {
		scanf("%d", &n);
		if(n==0) break;
		
		int vetor[n];
		for(i=0; i<n; i++) vetor[i] = 0;

		cont=0;
		for(i=0; i<n; i++) {
			scanf("%d", &numero);

			for(j=0; j<n; j++)  if(vetor[j] == numero) {cont += j+1; achou = 1; break;}

			if(achou == 0) cont += i+numero;

			for(j=n-1; j>0; j--) vetor[j] = vetor[j-1];
			vetor[0] = numero;
			achou = 0;
		}

		printf("%d\n", cont);
	}
	return 0;
}

