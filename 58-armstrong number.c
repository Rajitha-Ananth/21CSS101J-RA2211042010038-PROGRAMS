#include <stdio.h>
 int main() {
  printf("RA2211042010038\n");
    int num,originalnumber,remainder,result=0;
    printf("Enter a three digit integer:");
    scanf("%d",&num);
    originalnumber=num;
    while(originalNum!= 0) {
        remainder=originalnumber%10;
       result+=remainder*remainder*remainder;
       originalnumber/=10;
    }
    if(result == num)
        printf("%d is an armstrong number", num);
    else
        printf("%d is not an armstrong number", num);
    return 0;
}
