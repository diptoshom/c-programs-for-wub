#include <stdio.h>

void main(){
    int x,y,temp;
    printf("Please give two value: \n");
    scanf("%d %d", &x, &y);

    printf("Before Swapping: %d, %d \n", x,y);

    temp = x;
    x = y;
    y = temp;

    printf("After Swapping: %d, %d", x,y);
}
