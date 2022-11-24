#include<stdio.h>
void main() {
    float marks;
    char grade;
    printf("RA2211042010038\n");
    printf("enter the marks obtained");
    scanf("%f",&marks);
    if(marks>=80 && marks<=100) {
        grade="honours";
    }
    else if(marks>=60 && marks<=79) {
        grade="first division";
    }
    else if(marks>=50 && marks<=59) {
        grade="second division";
    }
    else if(marks>=20 && marks<=49) {
        grade="third division";
    }
    else {
        grade="fail";
    }
    printf("%s",grade);
}
