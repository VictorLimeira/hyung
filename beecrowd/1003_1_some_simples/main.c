#include <stdio.h>

int main() {
	int a, b, x;
	while(scanf("%d\n%d", &a, &b) != EOF) {
		x = a + b;
		printf("SOMA = %d\n", x);
	}
	return 0;
}
