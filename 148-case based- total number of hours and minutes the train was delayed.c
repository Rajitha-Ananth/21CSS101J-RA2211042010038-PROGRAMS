/*Binita was travelling from Chennai to Delhi in Rajdhani Express. 

The train have arrived at the destination later than the estimated time. 

So, Binita wants to know the total number of hours and minutes the train was delayed.

Can you help Binita in finding the exact hour and time Rajdhani Express was delay on the day of Binita's journey?
*/
#include<stdio.h>
void main() {
	int min;
	scanf("%d",&min);
	printf("%d Hours and %d Minutes",min/60,min%60);
}
