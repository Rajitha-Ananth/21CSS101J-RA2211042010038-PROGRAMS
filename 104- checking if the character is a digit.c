#include<stdio.h>
#include<ctype.h>
void main() {
    char character;
    printf("enter a key");
    character=getchar();
    if (isdigit(character)>0) {
        printf("The character is a digit");
    }
    else {
        printf("the cahracter is not a digit");
    }
}
