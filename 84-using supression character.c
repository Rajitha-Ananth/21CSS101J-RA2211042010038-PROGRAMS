#include <stdio.h>
void main() {
	int a, b;
	printf("Enter an integer : ");
	scanf("%3d%*2d%2d", &a, &b); 
	printf("The values in a and b are : %d, %d\n", a, b);
}  

