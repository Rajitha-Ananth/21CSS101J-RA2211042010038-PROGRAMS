#include<stdio.h>
#include<ctype.h>
void main() {
    char character;
    printf("RA2211042010038\n");
    printf("enter a key");
    character=getchar();
    if (islower(character)) {
        putchar(toupper(character));
    }
    else {
        putchar(tolower(character));
    }
}
