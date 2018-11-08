#include<stdio.h>


int main () {

	int n, i, j;

	while(1) {
		scanf("%d", &n);
		if(n==0) break;

		int v[n]; j=0;

		for(i=0; i<n; i++) scanf("%d", &v[i]);

		if(v[n-1] > v[0] && v[0] < v[1]) j++;
		else if(v[n-1] < v[0] && v[0] > v[1]) j++;

		for(i=1; i<n-1; i++) {
			if(v[i-1] > v[i] && v[i] < v[i+1]) j++;
			else if(v[i-1] < v[i] && v[i] > v[i+1]) j++;
		}

		if(v[0] > v[n-1] && v[n-1] < v[n-2]) j++;
		else if(v[0] < v[n-1] && v[n-1] > v[n-2]) j++;

		printf("%d\n", j);
	}

	return 0;
}
