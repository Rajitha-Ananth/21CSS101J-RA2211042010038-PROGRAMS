#include<stdio.h>
void main() {
	char character;
	printf("RA2211042010038\n");
	printf("Enter any character : ");
	scanf("%c",&character);
	if (character >='a' && character <='z' || character>='A' && character<='Z') {
		printf("Given character %c is an alphabet\n",character);
	}
	else {
		printf("Given character %c is not an alphabet\n",character);
	}
}
