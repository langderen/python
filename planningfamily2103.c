#include<stdio.h>
#include<math.h>
int main(){
	int t,f=0;
	int j,m,n,a[30];
	printf("要求最多生几个？你生了几个？");
	scanf("%d %d",&m,&n);
		for(j=0;j<n;j++){
			scanf("%d",&a[j]);
		}
		for(j=0;j<n;j++){
			if(a[j]==1){
				t=j;
				break;
				if(j>=m-1){
					t=j;
					break;
				}
			}
		}
	for(j=0;j<n-t;j++){
		f=f+pow(2,j)*1000;
	}
	printf("%d RMB",f);
}
