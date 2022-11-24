#include<stdio.h>
#include<ctype.h>
void main() {
    char character;
    printf("RA2211042010038\n");
    printf("enter a key");
    character=getchar();
    if (isspace(character)>0) {
        printf("The character is a space ");
    }
    else {
        printf("the cahracter is not a space");
    }
}
