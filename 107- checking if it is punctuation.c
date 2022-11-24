#include<stdio.h>
#include<ctype.h>
void main() {
    char character;
    printf("RA2211042010038\n");
    printf("enter a key");
    character=getchar();
    if (ispunct(character)>0) {
        printf("The character is punctuation mark ");
    }
    else {
        printf("the cahracter is not a punctuation mark");
    }
}
