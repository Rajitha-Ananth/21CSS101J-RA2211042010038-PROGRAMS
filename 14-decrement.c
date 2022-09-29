#include <stdio.h>

int main() {
    int i_temp_variable,j_temp_variable;
    printf("enter the value of i_temp_variable:");
    scanf("%d",&i_temp_variable);
    j_temp_variable=--i_temp_variable+5;
    printf("%d",j_temp_variable);
    return 0;
}
