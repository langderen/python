#include <stdio.h>

int main() {
	int i;
	int k, l, m, n;
	printf("���100-999֮���ˮ������\n");
	for (i = 100; i <= 999; i++) {
		k = i / 100; //�ֽ����λ
		l = (i - (k * 100)) / 10; //�ֽ��ʮλ
		m = (i - 100 * k - 10 * l); //�ֽ����λ
		n = k * k * k + l * l * l + m * m * m;
		if (i == n) {
			printf("ˮ����Ϊ��%d\n", i);
		}

	}


	return 0;
}


