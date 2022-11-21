#include<stdio.h>
int main()
{
	int row,j;
  printf("RA2211042010038 \n");
	for(row='A';row<='D';row++)
	{
		for(j='A';j<=row;j++)
		{
			printf("%c", j);
		}
		printf("\n");
	}
	return 0;
}		
