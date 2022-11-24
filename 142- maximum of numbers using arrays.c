#include<stdio.h>
void main()
 {
 int a[50],n,i,max;
 printf("RA2211042010038\n");
 printf("enter the value of : ");
 scanf("%d",&n);
 printf("enter the numbers\n");
 for(i=1;i<=n;i++) {
     scanf("%d",&a[i]);
     max=a[1];
     for(i=2;i<=n;i++) {
         if (max<a[i])
         max=a[i];
     }
 }
 printf("Minimum = %d",max);
 } 
