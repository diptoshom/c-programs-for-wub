#include <stdio.h>

void main(){
    char ch, upperCase, lowerCase;

    printf("Give your character: ");
    scanf("%c", &ch);

    upperCase = (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
    lowerCase = (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');

    if(upperCase||lowerCase){
        printf("'%c' is vowel character.", ch);
    }else{
        printf("'%c' is consonant character.", ch);
    }
}
