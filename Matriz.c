#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	double Vendas[5][4];
	double total = 0.0;
	
	
	printf("Calculadora de vendas: \n\n");

	for (int vendedor = 0; vendedor < 5; vendedor++) {
		printf("Vendas semanais(de um mês) do vendedor %d: \n", vendedor + 1);
		
		for (int semana = 0; semana < 4; semana++) {
			printf("Digite as vendas da semana %d: ", semana + 1);
			scanf(" %lf", &Vendas[vendedor][semana]);
			
			total += Vendas[vendedor][semana];
		}
		
		printf("\n");
	}
	
	printf("O total vendido no mês foi %.2lf\n", total);

	return 0;
}
