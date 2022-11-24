#include <stdio.h>
void main()  
{  
    int ang1,ang2,ang3,sum;
    printf("RA2211042010038\n");
    printf("enter three angles of triangle:");  
    scanf("%d%d%d",&ang1,&ang2,&ang3);  
    sum =ang1+ ang2+ang3;   
    if(sum==180)   
    {  
        printf("triangle is possible\n");  
    }  
    else  
    {  
        printf("triangle is not possible\n");  
    }  
 } 
