#include<stdio.h>

int main() {
	int i, m, j, n, maior, menor, resul, Inst=1, primeiro[10000];

	while(1) {
		scanf("%d %d", &n, &m);
		if(m==0 || n==0) break;

		maior = -200; menor = 200;

		resul = 0;
		j=0;
		
		for(i=0; i<m; i++) {
			scanf("%d", &primeiro[i]);
			resul += primeiro[i];
		}

		for(i=m; i<n; i++){
			scanf("%d", &primeiro[i]);

			if((resul/m) < menor) menor = resul/m;
			if((resul/m) > maior) maior = resul/m;

			resul -= primeiro[j];
			resul += primeiro[i];
			j++;
		}

		if((resul/m) < menor) menor = resul/m;
		if((resul/m) > maior) maior = resul/m;

		printf("Teste %d\n%d %d\n\n", Inst, menor, maior);
		Inst++;
	}

	return 0;

}

