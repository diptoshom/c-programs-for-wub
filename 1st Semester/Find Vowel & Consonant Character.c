#include <stdio.h>

void main(){
    char ch;

    printf("Give your character: ");
    scanf("%c", &ch);

    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        printf("'%c' is vowel character.", ch);
    }else{
        printf("'%c' is consonant character.", ch);
    }
}
