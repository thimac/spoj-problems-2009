#include<stdio.h>

int main() {
	int Entrada, Resultado=0, i;

	for(;;) {
		scanf("%d", &Entrada);
		if(Entrada <= 100)
			if(Entrada > 0) {
				for(i=0; i<Entrada; i++) Resultado += (Entrada-i)*(Entrada-i);
				printf("%d\n",Resultado);
			}
			else break;
	
		Resultado=0;
	}

	return 0;
}

