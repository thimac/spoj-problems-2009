#include<stdio.h>

int main() {
	int v, a, x, y, i, maior, instancia=1, vetor[100];

	while(1) {
		scanf("%d %d", &a, &v);

		maior = 0;

		if(a==0 || v==0) break;
		else{
			for(i=0; i<a; i++) vetor[i]=0;

			for(i=0; i<v; i++) {
				scanf("%d %d", &x, &y);
				vetor[x-1]++; vetor[y-1]++;
				if(vetor[x-1] > maior) maior = vetor[x-1];
				if(vetor[y-1] > maior) maior = vetor[y-1];
			}

			printf("Teste %d\n", instancia);
			for(i=0; i<a; i++) if(maior == vetor[i]) printf("%d ", i+1);
			printf("\n\n");
			instancia++;
		}

	}
	return 0;
}

