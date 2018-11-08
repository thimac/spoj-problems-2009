#include<stdio.h>

int main() {
	int n, i, j, Voto, maior;

	for(;;) {
		scanf("%d", &n);
		int m[n];
		if(n<=100) {
			if(n>0) {
				for(i=0; i<n; i++) m[i] = 0;

				maior=0;
				for(j=0; j<n; j++)
					for(i=0; i<n; i++) {
						scanf("%d", &Voto);
						m[i] += Voto;
						if(maior < m[i]) maior = m[i];
					}
				printf("%d\n", maior);
			}
			else break;
		}
	}

	return 0;
}

