#include <stdio.h>
void main() {
	int marks, distinction_marks = 75;
	printf("RA2211042010038\n");
	printf("Enter marks : ");
	scanf("%d", &marks);
	 if(marks>distinction_marks) { 
		printf("User secured distinction.\n");
	} 
	else { 
		printf("User did not secure distinction.\n");
	}
}
