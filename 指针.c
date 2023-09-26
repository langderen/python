#include <stdio.h>
int main(){
	int i=100,j=50,k;
	k=i; 
	i=j,j=k;
	printf("i=%d,j=%d,k=%d",i,j,k);
	return 0;
} 
