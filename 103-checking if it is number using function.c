#include<stdio.h>
void main() {
    char character;
    printf("RA2211042010038\n");
    printf("enter a key");
    character=getchar();
    if (isalnum(character)>0) {
        printf("The character is a digit");
    }
    else {
        printf("the cahracter is not a digit");
    }
}
