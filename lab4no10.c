#include <stdio.h>

int main() {
    int score,n,i,a=0,b=0,c=0,d=0,f=0;

    while(1){
    	scanf("%d", &score);
    	if (score == -1)
    		break;
    	if (score >= 68) {
	   		if (score > 100) {
        		printf("error score\n");
    		}else if (score >= 85) {
                printf("%d(A)",score);
                a++;
			}else if (score >= 75) {
                printf("%d(B)",score);
                b++;
			}else {
				printf("%d(C)",score);
				c++;
        	}
    	}
    	else {
    	    if (score >= 55) {
    	        printf("%d(D)",score);
    	        d++;
    		}else if (score < 0){
        	    printf("error score\n");
        	}
			else{
        		printf("%d(F)",score);
				f++;
			}	
    	}
    printf("\n");
	}
	printf("A(%d)\n",a);
	printf("B(%d)\n",b);
	printf("C(%d)\n",c);
	printf("D(%d)\n",d);
	printf("F(%d)\n",f);

    return 0;
}

