#include<stdio.h>
#include<ctype.h>
void main() {
    char character;
    printf("enter a key");
    character=getchar();
    if (isspace(character)>0) {
        printf("The character is a space ");
    }
    else {
        printf("the cahracter is not a space");
    }
}
