#include<stdio.h>
#include<math.h>
float main() {
    float a,b,c,d,e;
    float root1,root2;
    printf("RA2211042010038\n");
    printf("enter the value of a,b,c");
    scanf("%f%f%f",&a,&b,&c);
    e=b*b-4*a*c;
    if(e>0)
    {
    d=sqrt(e);
    root1=(-b+d)/2*a;
    root2=(-b-d)/2*a;
    printf("the root1 is %f",root1);
    printf("the root2 is %f",root2);
    }
    else
    {
    printf("the roots are imaginary");
    }
    return 0;
}
