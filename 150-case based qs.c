/*Nancy bought apples in a fruit shop. The shop keeper specified the bill amount.
Nancy also given some amount to the shop keeper for paying the bill. But she likes to know the quotient 
and remainder after dividing the amount given by her by the bill amount specified by shop keeper.*/
#include<stdio.h>
int main() {
	int a,b;
	int c,d;
	printf("RA2211042010038\n");
	scanf("%d%d",&a,&b);
	c=a%b;
	d=a/b;
	printf("%d\n",d);
	printf("%d\n",c);
}

