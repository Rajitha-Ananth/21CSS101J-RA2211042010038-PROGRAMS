#include<stdio.h>
#include<ctype.h>
void main() {
    char character;
    printf("enter a key");
    character=getchar();
    if (islower(character)) {
        putchar(toupper(character));
    }
    else {
        putchar(tolower(character));
    }
}
