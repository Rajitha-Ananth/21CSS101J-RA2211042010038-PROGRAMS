#include<stdio.h>
#include<ctype.h>
void main() {
    char character;
    printf("enter a key");
    character=getchar();
    if (isupper(character)>0) {
        printf("The character is an uppercase ");
    }
    else {
        printf("the cahracter is not an uppercase");
    }
}
