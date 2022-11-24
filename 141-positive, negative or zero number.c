#include<stdio.h>
 void main()
 {
     int n;
     printf(“enter the numbers: “);
     scanf(“%d”,&n);
     if (n>0) {
         printf(“The given number is Positive”);
     }
     else if (n<0) {
         printf(“The given number is Negative”);
         }
         else {
             printf(“The given number is Zero”);
             }
    getch();
 } 
