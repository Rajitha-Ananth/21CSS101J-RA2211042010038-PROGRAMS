#include<stdio.h>
void main() {
    char c;
    printf("\n\n");
    printf("RA2211042010038\n");
    for(c=65;c<=122;c=c+1) {
        if(c>90 && c<97) {
            continue;
        }
        printf("|%4d - %c",c,c);
    }
    printf("|\n");
}
