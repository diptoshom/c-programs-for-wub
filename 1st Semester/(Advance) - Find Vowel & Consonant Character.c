#include <stdio.h>

void main(){
    char ch, upperCase, lowerCase;

    printf("Give your character: ");
    scanf("%c", &ch);

    upperCase = (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'); //Assign all Upper Case Vowel Character.
    lowerCase = (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'); //Assign all Lower Case Character.

    /*
    here is, if user giving character of all assigned upper case or lower case vowel character,
    then this 'if' will works but if user Upper Case or lower case consonent character then 'else' will work
    */
    if(upperCase||lowerCase){
        printf("'%c' is vowel character.", ch);
    }else{
        printf("'%c' is consonant character.", ch);
    }
}
