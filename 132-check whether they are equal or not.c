#include <stdio.h>
void main() {
    int int1, int2;
    printf("enter two numbers: ");
    scanf("%d%d",&int1,&int2);
    if (int1==int2)
        printf("the numbers are equal\n");
    else
        printf("the numbers are not equal\n");
}
