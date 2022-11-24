#include<stdio.h>
void main() {
    char character;
     printf("RA2211042010038\n");
    printf("enter a key");
    character=getchar();
    if (isalpha(character)>0) {
        printf("The character is an alphabet");
    }
    else {
        printf("the cahracter is not an alphabet");
    }
}
