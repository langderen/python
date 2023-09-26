#include <stdio.h>

int main() {
	int i;
	int k, l, m, n;
	printf("输出100-999之间的水仙数。\n");
	for (i = 100; i <= 999; i++) {
		k = i / 100; //分解出百位
		l = (i - (k * 100)) / 10; //分解出十位
		m = (i - 100 * k - 10 * l); //分解出个位
		n = k * k * k + l * l * l + m * m * m;
		if (i == n) {
			printf("水仙数为：%d\n", i);
		}

	}


	return 0;
}


