/*Fazil frequently uses Hexadecimal notation in his work.
In hexadecimal notation, besides the ten digits 0, 1, …9 the six letters A, B, C, D, E and F are used to represent the values 10, 11, 12, 13, 14, …15 respectively.
In this problem, you are given two letters X and Y.
When X and Y are seen as hexadecimal numbers, which is larger?*/

#include<stdio.h>
int main() {
	char x,y;
	scanf("%c %c",&x,&y);
	if(x>y)
	{
		printf(">");
	}
	else if(x==y) 
	{
		printf("=");
	}
	else 
	{
		printf("<");
	}
}

