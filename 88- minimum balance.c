#include<stdio.h>
float main() {
	float balance,minimum_balance=1000;
	printf("RA2211042010038\n");
	printf("Enter balance : ");
	scanf("%f",&balance);
	if (balance>minimum_balance)
	{
		printf("Sufficient balance\n");
	}
	else {
		printf("Balance is low\n");
	}
	return 0;
}
