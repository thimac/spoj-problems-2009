#include<stdio.h>
#include<stdlib.h>

int main() {
	int a, b, *A, *B, i, j, r, ra, rb;

	 A = (int *) malloc(100000 * sizeof(int));
       	 B = (int *) malloc(100000 * sizeof(int));

	while (1) {
		scanf("%d %d", &a, &b);

		if(a==0 || b==0) break;

		for(i=0; i<100000; i++) A[i] = B[i] = 0;

		for(i=0; i<a; i++) {
			scanf("%d", &j);
			A[j] += 1;
		}

		r=ra=rb=0;

		for(i=0; i<b; i++) {
			scanf("%d", &j);
			B[j] += 1;
		}

		for(i=0; i<100000; i++) {
			if(A[i] >= 1 && B[i] == 0) ra++;
			if(B[i] >= 1 && A[i] == 0) rb++;
		}
		
		if(ra >= rb) r = rb;
		else r = ra;

		printf("%d\n", r);
	}

	free(A);
        free(B);

	return 0;
}
