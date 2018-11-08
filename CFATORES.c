#include<stdio.h>

int main() {
	int n, cont, i, num, numero;

	for(;;) {
		scanf("%d", &n);

		if(n == 0) return 0;

		i = 2; num = 0; cont = 0; numero = n;
		while(n != 1) {
			if(n%i == 0){ 
				n /= i;
				if(num != i) {cont++; num=i;}
			}
			else i++;
		}

		printf("%d : %d\n", numero, cont);
	}
	return 0;
}

