#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int t=5, i, j;
	
	int M1[t][t], M2[t][t], M3[t][t];
	
	srand(time(NULL));
	
	for(i=0;i<t;i++) {
		for(j=0;j<t;j++) {
			M1[i][j] = rand()%11;
		}
	}
	
	for(i=0;i<t;i++) {
		for(j=0;j<t;j++) {
			M2[i][j] = rand()%11;
		}
	}
	
	for(i=0;i<t;i++) {
		for(j=0;j<t;j++) {
			M3[i][j] = M1[i][j] + M2[i][j];
		}
	}
	
	printf("Matrix A:\n");
	
	for(i=0;i<t;i++) {
		for(j=0;j<t;j++) {
			printf("%d\t", M1[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\nMatrix B:\n");
	
	for(i=0;i<t;i++) {
		for(j=0;j<t;j++) {
			printf("%d\t", M2[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\nMatrix C = A + B:\n");
	
	for(i=0;i<t;i++) {
		for(j=0;j<t;j++) {
			printf("%d\t", M3[i][j]);
		}
		printf("\n");
	}
	return 0;
}
