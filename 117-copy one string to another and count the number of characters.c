#include<stdio.h>
#include<string.h>
void main() {
    char string1[100],string2[100];
    int i;
    printf("RA2211042010038\n");
    printf("enter a string");
    scanf("%s",string2);
    for(i=0;string2[i]!='\0';i++) {
        string1[i]=string2[i];
        string1[i]='\0';
        printf("%s\n",string1);
    }
    printf("number of characters =%d\n",i);
}
