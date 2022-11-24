#include <stdio.h>
int main()  {  
    int sidea, sideb, sidec;
    printf("RA2211042010038\n");
    printf("enter three sides of triangle: ");  
    scanf("%d%d%d",&sidea,&sideb,&sidec);  
    if(sidea==sideb && sideb==sidec)
    {  
        printf("equilateral triangle\n");  
    }  
    else if(sidea==sideb||sidea==sidec||sideb==sidec);
    {  
        printf("isosceles triangle\n");  
    }  
    else  
    {  
        printf("scalene triangle\n");  
    }  
    return 0;  
} 

