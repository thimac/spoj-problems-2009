#include<stdio.h>

typedef struct jogador{ int c, v;}jg;

int main() {
	int jogadores, cartas, carta, i, j, entra, maior, lixo[13];
	jg jgrs[10000];

	while(1) {
		scanf("%d %d", &cartas, &jogadores);
		if(cartas == 0 || jogadores == 0) break;

		for(i=0; i<jogadores; i++) jgrs[i].c = jgrs[i].v = 0;
		for(i=0; i<13; i++) lixo[i] = 0;
		j = 0; maior = 0;

		while(cartas > 0) {
			scanf("%d", &carta);

			entra=0;
			for(i=0; i<jogadores; i++) {
				if(carta == jgrs[j].c) {
					jgrs[j].v++;
					cartas--; entra=1; break;
				}
				else if(carta == jgrs[i].c) {
					jgrs[j].c = carta;
					jgrs[j].v += jgrs[i].v+1;
					jgrs[i].v = jgrs[i].c = 0;
					cartas--; entra=1; break;
				}
			}

			for(i=0; i<13; i++)
				if(carta == i+1 && lixo[i] > 0) {
					jgrs[j].c = i+1;
					jgrs[j].v += lixo[i]+1;
					lixo[i] = 0;
					cartas--; entra=1; break;
				}
			

			if(maior < jgrs[j].v) maior = jgrs[j].v;

			if(entra == 0) {
				lixo[carta-1]++;
				cartas--;
				if(j == jogadores-1) j=0;
				else j++;
			}
		}
		printf("%d ", maior);
		for(i=0; i<jogadores; i++)
			if(jgrs[i].v == maior) printf("%d ", i+1);
		printf("\n");
		
	}
	return 0;
}
