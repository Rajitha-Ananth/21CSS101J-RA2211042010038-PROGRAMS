#include <stdio.h>
#include <string.h>
void main()
{
   char str1[100],tmp;
   int l,a,b,i;
   printf("RA2211042010038\n");
   printf("enter a string:");
   scanf("%s",&str1);
   l=strlen(str1);
   a=0;
   b=l-1;
   for(i=a;i<b;i++)
   {
       tmp=str1[i];
       str1[i]=str1[b];
       str1[b]=tmp;
       b--;
   }
   printf("Reversed string is: %s\n",str1);
}
