#include<stdio.h>



int main() {
	int n, i, y, x, j, maior[3], ins=1, resultado[3];


	for(;;) {
		scanf("%d", &n);
		if(n==0) break;

		int jogos[n];

		for(i=0; i<n; i++) {
			scanf("%d %d", &x, &y);
			jogos[i] = x - y;
		}

		maior[0] = maior[1] = maior[2] = 0;
		resultado[0] = resultado[1] = resultado[2] = 0;

		for(i=1; i<=n; i++)
			for(j=i; j<=n; j++) {
				if(j==i) {
					resultado[0] = jogos[j-1];
					resultado[1] = i;
					resultado[2] = j;
				}
				else {
					resultado[0] += jogos[j-1];
					resultado[1] = i;
					resultado[2] = j;
				}

				if(resultado[0] > maior[0]) {
					maior[0] = resultado[0];
					maior[1] = resultado[1];
					maior[2] = resultado[2];
				}
				else if(resultado[0] == maior[0]) 
					if((resultado[2] - resultado[1]) > (maior[2] - maior[1])) {
						maior[0] = resultado[0];
						maior[1] = resultado[1];
						maior[2] = resultado[2];
					}
			}
		if(maior[0] > 0)
			printf("Teste %d\n%d %d\n\n", ins, maior[1], maior[2]);

		else printf("Teste %d\nnenhum\n\n", ins);
		ins++;
	}


	return 0;
}
