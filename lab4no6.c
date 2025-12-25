#include<stdio.h>
int main(){
	int i,j,n,r;
	scanf("%d %d",&n,&r);
	
	for (i = 0; i < r; i++){
		for (j = 0; j < r; j++){
			printf ("%d",n);
		}
		printf("\n");
	}
}
