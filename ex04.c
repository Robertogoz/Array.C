#include <stdio.h>

int main(void){
    int A[10];
    int i, j;

    for(i=0;i<10;i++){
        scanf("%d", &A[i]);
    }

    for (i = 9; i >= 0; i--){
        printf("%d\n", A[i]);
    }
}