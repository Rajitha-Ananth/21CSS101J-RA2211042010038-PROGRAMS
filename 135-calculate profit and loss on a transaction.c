#include <stdio.h>
void main()  
{  
    int cpprice,spprice, profit; 
    printf("enter cost price");  
    scanf("%d",&cpprice);  
    printf("enter selling price");  
    scanf("%d", &spprice);  
    if(spprice>cpprice) 
    {  
        profit=spprice-cpprice;  
        printf("profit amount: %d\n",profit);  
    }  
    else if(cpprice>spprice)
    {  
        profit=cpprice-spprice;  
        printf("loss amount: %d\n",profit);  
    }  
    else
    {  
        printf("no profit no loss\n");  
    }  
}  
 
