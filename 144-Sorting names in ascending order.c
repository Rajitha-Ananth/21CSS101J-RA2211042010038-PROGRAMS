#include<stdio.h>
#include<string.h>
void main()
 {
 char name[30][20],t[20];
 int i,j,n;
 printf("RA2211042010038\n");
 printf(“enter total number of names :”);
 scanf(“%d”,&n);
 printf(“enter the names\n”);
 for(i=0;i<n;i++)
 scanf(“%s”,name[i]);
 for(i=0;i<n;i++)
 for(j=i+1;j<n;j++)
 if (strcmp(name[i],name[j])>0)
 {
 strcpy(t,name[i]);
 strcpy(name[i],name[j]);
 strcpy(name[i],t);
 }
 for(i=0;i<n;i++)
 printf(“%s”,name[i]);
 } 
