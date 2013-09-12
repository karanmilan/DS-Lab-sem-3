#include <stdio.h>
void player1();
void display();
void player2();
char tictac [3][3];
void main()
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			tictac[i][j]='-';
		}
	}
	char ele;
	printf("Please enter the element to be chosen by player 1 'X' or 'O'\n");
	scanf("%c",&ele);	
	char p1,p2;
	if(ele=='x'||'X')
		p1='X';
		p2='O';
	else
		p1='O';
		p2='X';
	
}
void player1()
{
	
