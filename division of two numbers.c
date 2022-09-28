#include <stdio.h>
float main() {
    float number1,number2,result;
    printf("Enter two integers:");
    scanf("%f %f",&number1,&number2);
    result=number1/number2;
    printf("%f",result);
    return 0;
}
