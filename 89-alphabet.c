#include<stdio.h>
void main() {
	char character;
	printf("Enter any character : ");
	scanf("%c",&character);
	if (character >='a' && character <='z' || character>='A' && character<='Z') {
		printf("Given character %c is an alphabet\n",character);
	}
	else {
		printf("Given character %c is not an alphabet\n",character);
	}
}
