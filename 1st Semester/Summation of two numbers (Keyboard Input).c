#include <stdio.h>

void main(){
    int num1, num2, sum;

    printf("Enter first value: ");
    scanf("%d", &num1);

    printf("Enter second value: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("The summation of %d + %d = %d", num1, num2, sum);
}
