/*Tharun wants to print a document with "N" pages double-sided, where two pages of data can be printed on one sheet of paper.
Can to tell him for printing N pages at least how many sheets of paper he needs?*/

#include<stdio.h>
int main() {
	int a;
  printf("RA2211042010038\n");
	scanf("%d",&a);
	if((a%2)==0)
	{
		printf("%d",(a/2));
	}
	else
	{
		printf("%d",((a/2)+1));
	}
	return 0;
}
