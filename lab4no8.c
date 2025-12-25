#include <stdio.h>

int main() {
    int score,n,i;
    scanf("%d",&n);
    for (i =0; i < n; i++){
    	scanf("%d", &score);
    	if (score >= 68) {
	   		if (score > 100) {
        		printf("error score\n");
    		}else if (score >= 85) {
                printf("%d(A)",score);
			}else if (score >= 75) {
                printf("%d(B)",score);
			}else {
				printf("%d(C)",score);
        	}
    	}
    	else {
    	    if (score >= 55) {
    	        printf("%d(D)",score);
    		}else if (score < 0){
        	    printf("error score\n");
        	}else
				printf("%d(F)",score);
    	}
    printf("\n");
	}

    return 0;
}

