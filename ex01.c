#include <stdio.h>

int main(void) {
	int n, i;
	
	scanf("%d", &n);
	
	double V[n];
	
	for(i=0; i<n;i++) {
		scanf(" %lf", &V[i]);
	}
	
	for(i=0; i<n;i++) {
		printf("V[%d] = %.1lf\n", i, V[i]);
	}
	for(i=n-1; i>=0 ;i--) {
		printf("V[%d] = %.1lf\n", i, V[i]);
	}
}
