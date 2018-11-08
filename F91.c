#include<stdio.h>

int f91(int n);

int main (){

	int n, num;

	while(1) {
		scanf("%d", &n);
		if(n==0) break;
		num = n;

		n = f91(n);
		printf("f91(%d) = %d\n", num, n);
	}

	return 0;
}

int f91(int n) {
	if(n<=100) f91(f91(n+11));
	else if(n>=101) return (n-10);

	return;
}

