#include <stdio.h>

int main() 
{
    int high = 0;
    printf("���������ߣ�");
    scanf("%d", &high);
    int chi = high / 30.48;
    int cun = (high - chi * 30.48) / 2.54;
    printf("������Ϊ��%d��%d��\n", chi, cun);
    getch();
    return 0;
}
