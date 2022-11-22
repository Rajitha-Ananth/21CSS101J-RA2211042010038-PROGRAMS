#include <stdio.h>    
void main ()    
{    
    int arr[100][100],i,j;
    printf("RA2211042010038\n");
    for (i=0;i<3;i++)    
    {    
        for (j=0;j<3;j++)    
        {    
            printf("Enter a[%d][%d]:",i,j);                
            scanf("%d",&arr[i][j]);    
        }    
    }    
    printf("printing the elements\n");     
    for(i=0;i<3;i++)    
    {
      printf("\n"); 
      for (j=0;j<3;j++)  
      {    
        printf("%d\t",arr[i][j]); 
      }
    }
}
