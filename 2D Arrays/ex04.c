#include <stdio.h>

int main(void) {
	int n, i , j;
	
	scanf("%d", &n);
	
	int M[n][n];
	
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			scanf("%d", &M[i][j]);
		}
	}
	
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}
}
