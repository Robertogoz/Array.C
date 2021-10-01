#include <stdio.h>
#include <math.h>

int main(void) {
	int n, i, j=0;
	
	scanf("%d", &n);
	
	int Y[n], W[n];
	
	float S=0;
	
	for(i=0;i<n;i++) {
		scanf("%d", &Y[i]);
	}
	for(i=0;i<n;i++) {
		scanf("%d", &W[i]);
	}
	for(i=0;i<n;i++) {
		S = S + pow(Y[i], W[j]);
		j++;
	}
	printf("%.0f", S);
	
}

//usar math.h
