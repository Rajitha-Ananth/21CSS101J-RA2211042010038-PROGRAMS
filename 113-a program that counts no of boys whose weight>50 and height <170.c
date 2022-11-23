#include<stdio.h>
void main() {
    int i,count;
    float height,weight;
    count=0;
    printf("enter the weight and height of th boys:\n");
    for(i=0;i<=10;i++) {
        scanf("%f%f",&weight,&height);
        if(weight<50 && height<170) {
            count=count+1;
        }
    }
     printf("the no of boys with weight<50 and height<170= %d\n",count);
}
