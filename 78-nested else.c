#include <stdio.h>
void main() {
	int a, b, c;
	printf("RA2211042010038\n");
	printf("Enter three integer values : ");
	scanf("%d %d %d", &a, &b, &c);
	if (a>b && a>c) {
		printf("%d is greater than %d and %d\n",a,b,c);
	} 
	else if(b>a && b>c ) {
		printf("%d is greater than %d and %d\n",b,a,c);
	}
	else {
		printf("%d is greater than %d and %d\n",c,a,b);
	}
}
