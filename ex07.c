#include <stdio.h>   //works in gcc but not working on moodle

int main(void) {
	int n, i, j;
	
	do {
		scanf("%d", &n);
	} while (n < 0 || n >= 20);
	
	int V[n];
	
	for(i=0;i<n;i++) {
		scanf("%d", &V[i]);
	}
	
	int m, M[m], boolean=0;
	
	do {
		scanf("%d", &m);	
	} while (m < 0 || m >= 20);
	
	for(j=0;j<m;j++) {
		scanf(" %d", &M[j]);
	}
	
	for(j=0;j<m;j++) {
		boolean = 0;
		for(i=0;i<n && boolean == 0;i++) {
			if(M[j] == V[i]) {
				printf("%d\n", i);
				boolean = 1;
			}
		}
		if (boolean == 0) {
			printf("NOT FOUND\n");
		}
	}
}
