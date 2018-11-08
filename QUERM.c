#include<stdio.h>

int main() {

	int n, i, ganhador, Inst=1;
	
	while(1) {
		scanf("%d", &n);
		if(n==0) break;

		int numero[n];

		for(i=0; i<n; i++) scanf("%d", &numero[i]);

		for(i=1; i<=n; i++) if(numero[i-1] == i){ ganhador=numero[i-1]; break;}

		printf("Teste %d\n%d\n\n", Inst, ganhador);
		Inst++;
	}

	return 0;
}

