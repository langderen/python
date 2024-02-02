#include<stdio.h>
int main(){
	int n,i;
	double j,a,b=0.0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		a=0.0;
		for(j=1.0;j<=n-i;j++){
			a=a+1.0/j;
		}
		a=a*2-1;
		b=b+a;
	}
	printf("%0.2f",b);
}
