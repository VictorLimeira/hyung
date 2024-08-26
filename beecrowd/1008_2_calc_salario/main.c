#include <stdio.h>

int main() {
	int func_id, worked_hours;
	double value_hour, salary;
	while(scanf("%d\n%d\n%lf", &func_id, &worked_hours, &value_hour) != EOF) {
		printf("NUMBER = %d\n", func_id);
		salary = worked_hours * value_hour;
		printf("SALARY = U$ %.2lf\n", salary);
	}
	return 0;
}
