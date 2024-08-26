#include <stdio.h>

int main() {
	double a, b, x;
	while(scanf("%lf\n%lf", &a, &b) != EOF) {
		x = (a * 3.5) + (b * 7.5);
		x = x / (3.5 + 7.5);
		printf("MEDIA = %.5lf\n", x);
	}
	return 0;
}
