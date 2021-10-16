#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int t=5;
	
	int M[t][t], i, j;
	
	srand(time(NULL));
	
	for(i=0;i<t;i++) {
		for(j=0;j<t;j++) {
			M[i][j] = rand()%101+10;
		}
	}
	
	for(i=0;i<t;i++) {
		for(j=0;j<t;j++) {
			printf("%d\t", M[i][j]);
		}
		printf("\n");
	}
}
