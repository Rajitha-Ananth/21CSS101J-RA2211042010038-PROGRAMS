#include<stdio.h>
#include<string.h>
void main() {
    int i,j,k;
    char first_name[10];
    char second_name[10];
    char last_name[10];
    char name[100];
    printf("RA2211042010038\n");
    for(i=0;first_name!='\0';i++) {
        name[i]=first_name[i];
    }
    for(j=0;second_name!='\0';j++) {
        name[i+j+1]=second_name[i+j+1];
    }
    for(k=0;last_name!='\0';k++) {
        name[i+j+k+2]=last_name[i+j+k+2];
    }
    printf("%s\n",name);
}
