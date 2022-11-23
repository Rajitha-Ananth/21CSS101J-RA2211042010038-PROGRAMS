#include<stdio.h>
void main() {
    int i,n;
    printf("enter the number of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
	 printf("number is% dand cube of the %d is:%d \n",i,i,(i*i*i));     
    }
 }
