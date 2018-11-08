#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, j, n, d;
	char valor;

	while(1) {
		scanf("%d %d", &n, &d);

		if(n==0 || d==0) return 0;

		int numero[n];
		getchar();
		for(i=0; i<n; i++){ 
			scanf("%c", &valor);
			numero[i] = atoi(&valor);
		}
		i=0;
		while(i<n) {
			j = i+1;
			while(numero[j] == -1) j++;

			if(numero[i] < numero[j] && numero[i] != -1) {
		 		numero[i] = -1;
				d--;
				while(numero[i] == -1 && i >= 1) i--;
			}
			else i++;

			if(d==0) break;
		}

		for(i=0; i<n-d; i++) if(numero[i] != -1) printf("%d", numero[i]);
		printf("\n");
	}
	return 0;
}

