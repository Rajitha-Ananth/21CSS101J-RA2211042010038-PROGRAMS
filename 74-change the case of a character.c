#include<stdio.h>
void main() {
    char c;
    printf("RA2211042010038\n");
    printf("enter the value of c");
    scanf("%c",&c);
    if(c>=65&&c<=90)
    {
    c=c+32;
    printf("the output for the character is %c",c);
    }
    else
    {
    c=c-32;
    printf("the output for the character is %c",c);
    }
}
