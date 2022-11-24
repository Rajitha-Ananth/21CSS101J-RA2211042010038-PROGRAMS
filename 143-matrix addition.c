#include<stdio.h>
void main()
 {
 int a[10][10],b[10][10],c[10][10];
 int m,n,i,j;
 printf("RA2211042010038\n");
 printf("enter order of the matirix:");
 scanf("%d%d",&m,&n);
 printf("enter the first matrix\n");
 for(i=0;i<m;i++) {
     for(j=0;j<n;j++) {
         scanf("%d",&a[i][j]);
         }
    }
 printf("enter the second martrix\n");
 for(i=0;i<m;i++) {
     for(j=0;j<n;j++) {
         scanf("%d",&b[i][j]);
     }
    }
 for(i=0;i<m;i++) {
     for(j=0;j<n;j++) {
         c[i][j]=a[i][j]+b[i][j];
     }
    }
 printf("first matrix\n");
 for(i=0;i<m;i++) {
     for(j=0;j<n;j++) {
         printf("\t%d",a[i][j]);
         printf("\n");
        }
    }
printf("second matrix\n");
 for(i=0;i<m;i++) {
     for(j=0;j<n;j++) {
         printf("\t%d",b[i][j]);
         printf("\n");
     }
    }
 printf("resultantmatrix\n");
 for(i=0;i<m;i++) {
     for(j=0;j<n;j++) {
         printf("\t%d",c[i][j]);
         printf("\n");
     }
    } 
}
