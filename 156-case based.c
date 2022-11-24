//A triple of numbers is said to be poor when two of those numbers are equal but the other number is different from those two numbers.
#include<stdio.h>
int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a==b==c) 
	{
		printf("Yes");
	}
	else if(a==b)
	{
		printf("Yes");
	}
	else if(b==c)
	{
		printf("Yes");
	}
	else if(a==c)
	{
		printf("Yes");
	}
	else 
	{
		printf("No");
	}
	return 0;
}
