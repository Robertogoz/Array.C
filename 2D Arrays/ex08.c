#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int t=5, i, j;
	
	int M[t][t];
	
	srand(time(NULL));
	
	for(i=0;i<t;i++) {
		for(j=0;j<t;j++) {
			M[i][j] = rand()%10+1;
		}
	}
	
	for(i=0;i<t;i++) {
		for(j=0;j<t;j++) {
			printf("%d\t", M[i][j]);
		}
		printf("\n");
	}
	
	int N;
	
	printf("Enter an integer: ");
	scanf("%d", &N);
	
	if(N==0) {
		for(i=0;i<t;i++) {
			for(j=0;j<t;j++) {
				if(i==j) {
					M[i][j] = 0;
				}
				printf("%d\t", M[i][j]);
			}
			printf("\n");
		}
	} else if(N%2 == 0) {
		for(i=0;i<t;i++) {
			for(j=0;j<t;j++) {
				if(i<j) {
					M[i][j] = 0;
				}
				printf("%d\t", M[i][j]);
			}
			printf("\n");
		}
	} else {
		for(i=0;i<t;i++) {
			for(j=0;j<t;j++) {
				if(i>j) {
					M[i][j] = 0;
				}
				printf("%d\t", M[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
