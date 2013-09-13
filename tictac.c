
#include <stdio.h>
#include <stdlib.h>
void player1();
void display();
void player2();
int flag=0;
void checkcondition();
char tictac [3][3];
char p1,p2;
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
	display();
	if(ele =='x'|| ele =='X')
	{	p1='X';
		p2='O';
	}	
	else if(ele=='o'|| ele=='O')
	{
		p1='O';
		p2='X';
	}
	for(i=0;i<4;i++)
	{
		player1();
		display();
		checkcondition();
		player2();
		display();
		checkcondition();
	}
		player1();
		display();
		checkcondition();
		if(flag==0)
		{
			printf("The game is a draw\n");
			printf("\n");
			printf("\n");
			exit(0);
		}
		
}
void player1()
{
	int a,b;
	printf("Player 1 enter the co-ordinates\n");
	scanf("%d %d",&a,&b);
	
	
			if(tictac[a-1][b-1] == '-')
			{
				tictac[a-1][b-1]=p1;
			}
			else
			{
				printf("position already occupied\n");
				player1();	
			}
}
void player2()
{
	int a,b;
	printf("Player 2 enter the co-ordinates\n");
	scanf("%d %d",&a,&b);

	
			if(tictac[a-1][b-1] == '-')
			{
				tictac[a-1][b-1]=p2;
			}
			else
			{
				printf("position already occupied\n");
				player2();	
			}
}
void checkcondition()
{
	int flag=0;
	int i;
	for(i=0;i<3;i++)
	{
		if((tictac[i][0]==tictac[i][1])&&(tictac[i][1]==tictac[i][2]))
		{
			if(tictac[i][0]==p1)
			{	flag=1;
				break;
			}
			else if(tictac[i][0]==p2)
			{
				flag=2;
				break;
			}
		}
		else if((tictac[0][i]==tictac[1][i])&&(tictac[1][i]==tictac[2][i]))
		{
			if(tictac[0][i]==p1)
			{	flag=1;
				break;
			}
			else if(tictac[0][i]==p2)
			{
				flag=2;
				break;
			}
		}
	}
	if( ((tictac[0][0]==tictac[1][1]) && (tictac[1][1]==tictac[2][2]))   ||   ((tictac[0][2]==tictac[1][1])&&(tictac[1][1]==tictac[2][0])) )
	{
		if(tictac[1][1]==p1)
		{	flag=1;
			
		}
		else if (tictac[1][1]==p2)
		{	flag=2;
			
		}
	}
	
	if(flag==1)
	{
		printf("Player 1 wins the game!! =)\n");
		printf("\n");
		printf("\n");
		exit(0);
	}
	else if(flag==2)
	{
		printf("Player 2 wins the game!! =)\n");
		printf("\n");		
		printf("\n");		
		exit(0);
	}
}
void display()
{
	printf("\t\t    %c | %c | %c\n",tictac[0][0],tictac[0][1],tictac[0][2]);
	printf("\t\t------------------\n");
	printf("\t\t    %c | %c | %c\n",tictac[1][0],tictac[1][1],tictac[1][2]);
	printf("\t\t------------------\n");
	printf("\t\t    %c | %c | %c\n",tictac[2][0],tictac[2][1],tictac[2][2]);
	
	printf("\n");
}
