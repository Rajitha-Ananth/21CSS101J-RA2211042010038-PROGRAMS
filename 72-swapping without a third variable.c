#include <stdio.h>
int main() {
    int a,b,c;
    printf("RA2211042010038\n");
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    printf("a and b before swapping%d%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a and b after swapping%d%d",a,b);
    return 0;
}
