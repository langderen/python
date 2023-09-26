#include <stdio.h>

int main() {
	double m, n = 0;
	printf("请输入您当月的利润(万元)：");
	scanf("%lf", &n);
	if (n <= 10) {
		m = n * 0.1;
	} else if (n <= 20) {
		m = (n - 10) * 0.075 + 1;
	} else if (n <= 40) {
		m = (n - 20) * 0.05;
	} else if (n <= 60) {
		m = (n - 40) * 0.03;
	} else if (n <= 100) {
		m = (n - 60) * 0.015;
	} else {
		m = (n - 100) * 0.01;
	}
	printf("奖金总数为：%lf\n", m);
	return 0;
}