#include <stdio.h>

int main() {
	double raio, area;
	while(scanf("%lf", &raio) != EOF) {
		area = 3.14159 * raio * raio;
		printf("A=%.4lf\n", area);
	}
	return 0;
}
