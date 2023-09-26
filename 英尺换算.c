#include <stdio.h>

int main() 
{
    int high = 0;
    printf("输入你的身高：");
    scanf("%d", &high);
    int chi = high / 30.48;
    int cun = (high - chi * 30.48) / 2.54;
    printf("你的身高为：%d尺%d寸\n", chi, cun);
    getch();
    return 0;
}
