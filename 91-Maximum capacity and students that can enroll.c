#include<stdio.h>
void main() {
    int n,m,k;
    printf("RA2211042010038\n");
    printf("enter the  no of students who want apply:\n");
    printf("enter the maximum capacity of students:\n");
    printf("enter the no of stduents already registered:\n");
    scanf("%d%d%d",&n,&m,&k);
    if((m-k)>0) {
        printf("Yes");
    }
    else {
        printf("no");
    }
    return 0;
    
}
