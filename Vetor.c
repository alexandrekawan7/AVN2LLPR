#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int N;
	
	printf("Digite o tamanho do vetor a ser preenchido: ");
	scanf(" %d", &N);
	
	int V[N];
	int m3 = 0;
	
	for (int i = 0; i < N; i++) {
		printf("Digite o elemento %d do vetor: ", i);
		scanf(" %d", &V[i]);
		
		if (V[i] % 3 == 0) {
			m3++;
		}
	}
	
	printf("Existem %d múltiplos de 3 no vetor\n", m3);
	printf("Os números múltiplos de 3 são: ");
	
	for (int i = 0; i < N; i++) {
		if (V[i] % 3 == 0) {
			printf("%d ", V[i]);
		}
	}
	
	return 0;
}
