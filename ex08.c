#include <stdio.h>

int main(void) {
	int n, i;
	
	printf("how many students have in class: ");
	scanf("%d", &n); 										// A
	
	float N1[n], N2[n], N3[n], media[n]; 					//B
	
	for(i=0;i<n;i++) {
		media[i] = 0;         								//C
		printf("student %d test 1: ", i);
		scanf(" %f", &N1[i]);
		
		printf("student %d test 2: ", i);
		scanf(" %f", &N2[i]);
		
		printf("student %d test 3: ", i);
		scanf(" %f", &N3[i]);
		
		media[i] += N1[i] + N2[i] + N3[i];
	}
	
	for(i=0;i<n;i++) {
		media[i] = media[i] / 3;
		printf("student %d average: %.2f\n", i, media[i]);   //D
	}
}
