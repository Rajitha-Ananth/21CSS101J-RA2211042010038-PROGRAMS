#include<stdio.h>
#include<ctype.h>
void main() {
    char character;
    printf("RA2211042010038\n");
    printf("enter a key");
    character=getchar();
    if (islower(character)>0) {
        printf("The character is a lower alphabet");
    }
    else {
        printf("the cahracter is not a lower alphabet");
    }
}
