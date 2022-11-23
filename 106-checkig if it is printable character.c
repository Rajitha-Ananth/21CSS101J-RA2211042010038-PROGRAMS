#include<stdio.h>
#include<ctype.h>
void main() {
    char character;
    printf("enter a key");
    character=getchar();
    if (isprint(character)>0) {
        printf("The character is printable");
    }
    else {
        printf("the cahracter is not printable");
    }
}
