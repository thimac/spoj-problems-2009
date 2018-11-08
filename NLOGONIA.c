#include<stdio.h>


int main() {
	int x, y, x1, y1, n, i;

	while(1) {
		scanf("%d", &n);
		if(n==0) break;

		scanf("%d %d", &x, &y);

		for(i=0; i<n; i++) {
			scanf("%d %d", &x1, &y1);

			if(x1 == x || y1 == y) printf("divisa\n");
			else if(x1 > x && y1 > y) printf("NE\n");
			else if(x1 > x && y1 < y) printf("SE\n");
			else if(x1 < x && y1 > y) printf("NO\n");
			else if(x1 < x && y1 < y) printf("SO\n");
		}
	}

	return 0;
}

