#include<stdio.h>

int main() {

	int i, n, g, convar;
	
	scanf("%d", &n);

	while(n!=0) {
		convar = 0;

		for(i=0; i<n; i++) {
			scanf("%d", &g); scanf("%d", &g);
			if(g%2 != 0) g--;

			convar += g;
		}

		printf("%d\n", convar/4);

		scanf("%d", &n);
	}
	return 0;
}

