#include<stdio.h>
int main(){
	int i,n,h,k;
	printf("N=");
	scanf("%d",&n);
	k=(n-1)*4;
	for(h=1;h<=n;h++){
		printf("%4d",h);
	}
	printf("\n");
	for(i=0;i<n-2;i++){
		printf("%4d",k-i);
		for(h=0;h<n-2;h++){
			printf("    ");
		}
		printf("%4d",n+i+1);
	printf("\n");
	}
	for(h=0;h<n;h++){
		printf("%4d",k-i-h);
	}
	
}
