#include <stdio.h>
void main()
{
    float height;
    printf("enter height in centimeters:");
    scanf("%f",&height);
    if (height<150.0)
        printf("dwarf\n");
    else if ((height>=150.0) && (height<165.0))
        printf("average heighted\n");
    else if ((height>=165.0) && (height<=195.0))
        printf("tall\n");
    else
        printf("abnormal height\n");
}
