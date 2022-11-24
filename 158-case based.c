/*In the Attacking war game, Amit and Arun will have a battle using their monsters.
The health and strength of Amit's monster are A and B, respectively, and those of Arun's monster are C and D, respectively.
The two monsters will take turns attacking, in the order Amit's, Arun's, Amit's, Arun's, 
Here, an attack decreases the opponent's health by the value equal to the attacker's strength. 
The monsters keep attacking until the health of one monster becomes 0 or below. 
The person with the monster whose health becomes 0 or below loses, and the other person wins.*/

#include<stdio.h>
int main() {
	int a,b,c,d,e,f;
  printf("RA2211042010038\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	e=a+b;
	f=c+d;
	if(e>f)
	{
		printf("Yes");
	}
	else 
	{
		printf("No");
	}
}

