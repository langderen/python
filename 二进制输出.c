#include <stdio.h>
int main(){
int num = 9;
int i;
for(i=5; i>=0; i--)
{
    printf("%d", (num>>i)&1);
}}

