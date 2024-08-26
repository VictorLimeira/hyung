#include <stdio.h>

int main() {
	int id_produto, qtd_produto;
	double valor_unidade, total_compra;

	total_compra = 0.0;

	while(scanf("%d\n%d\n%lf", &id_produto, &qtd_produto, &valor_unidade) != EOF) {
		total_compra += qtd_produto * valor_unidade;
	}
	
	printf("VALOR A PAGAR: R$ %.2lf\n", total_compra);
	
	return 0;
}
