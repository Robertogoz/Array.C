#include <stdio.h>

int main(void) {
    int n, i;
    scanf("%d", &n);
    
    float V[n], x;
    
    for(i=0;i<n;i++) {
        scanf(" %f", &V[i]);
    }
    
    scanf("%f", &x);
    
    for(i=0;i<n;i++) {
        if(V[i]< x) {
            printf("V[%d] = %.2f\n", i, V[i]);
        }
    }
}
