#include <stdio.h>

void main(){

    int i, sum;

    sum = 0;
    for(i=0; i<=100; i++){
    sum=sum+i;
    printf("+%d", i);
    }
    printf("\nHere is summation of series = %d", sum);
}
