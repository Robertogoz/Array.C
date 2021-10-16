#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int t=6;
	
	int M[t][t], i, j, princ=0, sec=0;
	
	srand(time(NULL));
	
	for(i=0;i<t;i++) {
		for(j=0;j<t;j++) {
			M[i][j] = rand()%11;
		}
	}
	
	for(i=0;i<t;i++) {
		for(j=0;j<t;j++) {
			if(i == j) {
				princ += M[i][j];
			} else if(i + j == t-1) {
				sec += M[i][j];
			}
		}
	}
	
	for(i=0;i<t;i++) {
		for(j=0;j<t;j++) {
			printf("%d\t", M[i][j]);
		}
		printf("\n");
	}
	
	printf("Sum of main diagonal elements: %d\n", princ);
	printf("Sum of secondary diagonal elements: %d\n",sec);
	
}
