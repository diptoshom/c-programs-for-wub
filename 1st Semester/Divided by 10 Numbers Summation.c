#include <stdio.h>

void main(){
    int i, sum;
    sum=0;
    for(i=0; i<=100; i++){
        if(i%10==0){
            sum = sum +i;
            printf("%d \n", sum);
        }
    }
}
