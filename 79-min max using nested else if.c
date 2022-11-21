#include<stdio.h>
 int main() {
 	int a,b,c,max,min;
 	printf("Enter 3 numbers : ");
  printf("RA2211042010038\n");
 	scanf("%d%d%d",&a,&b,&c);
 	if(a>b && a>c) {
 		max=a;
 		}
 	else if(b>c && b>a) {
 		max=b;
 		}
 	else {
 		max=c;
 	}
 	if(a<b && c<b) {
 		min=a;
 	}
 	else if(b<c && b<a) {
 		min=b;
 	}
 	else {
 		min=c;
 	}
 		printf("The max and min of three numbers are :",max,min);
 		return 0;
 	}
 	
