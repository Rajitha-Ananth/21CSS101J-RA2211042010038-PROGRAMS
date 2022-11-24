/*Binita is playing chess. The game will be played on a rectangular grid consisting of N rows and M columns.
Initially, all the cells of the grid are uncolored.
Binita's initial score is zero. At each turn, he chooses some cell that is yet not colored and colors that cell.
The score obtained in this step will be the number of neighboring colored cells of the cell that Binita colored in this step. 
Two cells are neighbors of each other if they share a side between them. The game will end when all the cells are colored.
Finally, the total score obtained at the end of the game will sum up of score obtained in each turn.
Binita wants to know what maximum score he can get. Can you please help him in finding this out?*/

#include<stdio.h>
int main() {
	int n,m,a;
	scanf("%d%d",&n,&m);
	a=2*m*n-m-n;
	printf("%d",a);
	return 0;
}
