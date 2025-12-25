#include<stdio.h>
int main(){
	int i,j,col,row;
	char c;
	
	scanf ("%c %d %d",&c,&col,&row);
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			printf("%c",c);
		}
		printf("\n");
	}
}
