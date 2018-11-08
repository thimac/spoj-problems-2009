#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct palavra {
	char p[160];
	char tra_p[160];
}p;

int main() {
	char entrada[160], *ptr;
	int i, n, M, N, j, k, cont;

	scanf("%d", &n);

	for(i=0; i<n; i++) {
		scanf("%d %d", &M, &N);

		p m[M];
		
		getchar();
		for(j=0; j<M; j++) {
			gets(m[j].p); 
			gets(m[j].tra_p);
		}

		for(j=0; j<N; j++) {
			gets(entrada);
			ptr = strtok (entrada," ");
			k=0; cont=0;
			while(ptr != NULL) {
				if(cont!=0) printf(" ");
				k=0;				
				while(1){
					if(strcmp(ptr, m[k].p) == 0) {
						printf("%s", m[k].tra_p);
						break;
					}
					else if(k == M-1) {
						printf("%s", ptr);
						break;
					}
					k++;
				}
				cont++;
				ptr = strtok (NULL," ");
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}


