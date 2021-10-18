#include <stdio.h>

int main(void){

    int A[3], B[3];
    int i, j;

    for(i=0;i<3;i++){
        scanf(" %d", &A[i]);
    }

    i=0;
    for(j=0;j<3;j++){
        B[j] = A[i]; 
        printf("Array A number : %d\n", A[i]);
        printf("Array B number : %d\n", B[j]);
        i++;
    }
}
