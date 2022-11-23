#include<stdio.h>
void main() {
    char character;
    printf("enter a key");
    character=getchar();
    if (isalnum(character)>0) {
        printf("The character is a digit");
    }
    else {
        printf("the cahracter is not a digit");
    }
}
