#include <stdio.h>

int main(void) {
	int n, i, j, x;
	
	do { 
		scanf("%d", &n);
	} while(n<=0||n>10);
	
	float M[n][n], Mresp[n][n], aux=0;
	
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			scanf("%f", &M[i][j]);
		}
	}
	
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			
			Mresp[i][j] =0;
			
			for(x=0;x<n;x++) {
				aux += M[i][x] * M[x][j];
			}
			
			Mresp[i][j] = aux;
			aux = 0;
		}
	}
		
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			printf("%.1f ", Mresp[i][j]);
		}
		printf("\n");
	}
}
