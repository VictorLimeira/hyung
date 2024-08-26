#include <stdio.h>

int main() {
	char nome_empregado[50];
	double salario, total_vendas, bonus_salario;

	scanf("%49s\n", nome_empregado);
	scanf("%lf\n", &salario);
	scanf("%lf\n", &total_vendas);

	bonus_salario = total_vendas * 0.15;

	printf("TOTAL = R$ %.2lf\n", salario + bonus_salario);

	return 0;
}
