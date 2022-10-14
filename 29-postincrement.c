#include <stdio.h>

int main() {
    printf("RA2211042010038\n");
    int i_temp_variable,j_temp_variable;
    printf("enter the value of i_temp_variable:");
    scanf("%d",&i_temp_variable);
    j_temp_variable=5+i_temp_variable++;
    printf("%d",j_temp_variable);
    return 0;
}
