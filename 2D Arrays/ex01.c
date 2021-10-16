#include <stdio.h>

int main(void) {
	int n, i, j;
	
	do { 
		scanf("%d", &n);
	} while(n<=0||n>10);
	
	float M[n][n];
	
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			scanf("%f", &M[i][j]);
		}
	}
	
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			printf("%.1f ", M[i][j]*2);
		}
		printf("\n");
	}
}
