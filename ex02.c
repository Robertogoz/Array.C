#include <stdio.h>

int main(void) {
    int n, i;
    scanf("%d", &n);
    
    int V[n];
    
    for(i=0;i<n;i++) {
        scanf(" %d", &V[i]);
    }
    for(i=0;i<n;i++) {
        if(V[i]%2 == 0) {
            printf("V[%d] = %d\n", i, V[i]);
        }
    }
}
