#include<stdio.h>

int queenAttack(int qHorizontalPos,int qVerticalPos,int kHorizontalPos,int kVerticalPos)
{
	if(qHorizontalPos==kHorizontalPos)
	{
		return 1;
	}
	else if(qVerticalPos==kVerticalPos)
	{
		return 1;
	}
	else if((qHorizontalPos-kHorizontalPos)==(qVerticalPos-kVerticalPos))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int knightAttacks(int qHorizontalPos,int qVerticalPos,int kHorizontalPos,int kVerticalPos)
{
	if((kHorizontalPos-qHorizontalPos)==2 || (kHorizontalPos-qHorizontalPos)==-2)
	{
		if((kVerticalPos-qVerticalPos)==1 || (kVerticalPos-qVerticalPos)==-1) 
		{
			return 1;
		}
	}
	else if((kHorizontalPos-qHorizontalPos)==1 || (kHorizontalPos-qHorizontalPos)==-1) 
	{
		if((kVerticalPos-qVerticalPos)==2 || (kVerticalPos-qVerticalPos)==-2)
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
	return 0;
}

int checkValidPosition(int hQueen,int vQueen,int hKnight,int vKnight)
{
	if(hQueen==hKnight && vQueen==vKnight && hQueen==vKnight && vQueen==hKnight)
	{
		return 1;
	}
	if(hQueen>7)
	{
		return 1;
	} 
	else if(hQueen<0)
	{
		return 1;
	}
	else if(vQueen>7)
	{
		return 1;
	}
	else if(vQueen<0)
	{
		return 1;
	}
	if(hKnight>7)
	{
		return 1;
	}
	else if(hKnight<0)
	{
		return 1;
	}
	else if(vKnight>7)
	{
		return 1;
	}
	else if(vKnight<0)
	{
		return 1;
	}
	
	return 0;
}

int main()
{
	int hQueen,vQueen,hKnight,vKnight;
	printf("Enter the horizontal position of the Queen(0-7) :");
	scanf("%d",&hQueen);
	printf("Enter the vertical position of the Queen(0-7) :");
	scanf("%d",&vQueen);
	printf("Enter the horizontal position of the Knight(0-7) :");
	scanf("%d",&hKnight);
	printf("Enter the vertical position of the Knight(0-7) :");
	scanf("%d",&vKnight);
	
	if(checkValidPosition(hQueen,vQueen,hKnight,vKnight)==1)
	{
		printf("\nentered position is not valid");
	}
	else if(queenAttack(hQueen,vQueen,hKnight,vKnight)==1)
	{
		printf("\nQueen attacks knight");
	}
	else
	{
		printf("\nQueen cannot attacks knight");
	}
	if(knightAttacks(hQueen,vQueen,hKnight,vKnight)==1)
	{
		printf("\nKnight attacks queen");
	}
	else
	{
		printf("\nKnight cannot attacks queen");
	}
	
	return 0;	
}
	
	
	