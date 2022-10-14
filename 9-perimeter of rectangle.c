#include <stdio.h>
float main() {
    printf("RA2211042010038\n");
    float length,breadth,perimeter;
    printf("enter the length and breadth:");
    scanf("%f %f",&length,&breadth);
    perimeter=2*(length+breadth);
    printf("The perimeter is%f",perimeter);
    return 0;
}
