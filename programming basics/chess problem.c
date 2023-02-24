#include<stdio.h>

int main()
{
    int queen=0;
    int horse=0;

    int array[8][8]={{00,01,02,03,04,05,06,07},
    {10,11,12,13,14,15,16,17},
    {20,21,22,23,24,25,26,27},
    {30,31,32,33,34,35,36,37},
    {40,41,42,43,44,45,46,47},
    {50,51,52,53,54,55,56,57},
    {60,61,62,63,64,65,66,67},
    {70,71,72,73,74,75,76,77},};

    int i=0;
    int j=0;

    printf("\nTake this as a chess board where horizontal row represent a-h and vertical column represent 8-1\n");
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter position of the Queen according to above given chess board :");
    scanf("%d",&queen);

    printf("Enter position of the Horse(Knight) according to above given chess board:");
    scanf("%d",&horse);
    
    int inputArray[1][2]={{queen},{horse}};
    
//	for(i=0;i<2;i++)
//	{
//		printf("%d\t",inputArray[i]);
//	}
	
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
        	if(array[i][j]==inputArray[i][j])
        	{
        		printf("%d\t%d",i,j);
			}
		}
//        printf("\n");
    }
    
    // checking where knight attacks the queen or not
    //horse=43;
    //queen=25;
    
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
        	// horse=43 and queen=35
        	/* I am trying to to check the position entered with the chess board position 
				as the queen and horse move on checkboard increment/decrement the counter accordingly in the for loop
				such that when the position satiesfies the particular if() condition then one of them will attack other one
			*/
        	if(array[i][j]==inputArray[horse][queen])
            {
    	        printf("Knight attacks queen");
			}
//			else if(array[i][j]==inputArray[horse][queen])
//			{
//				printf("knight attacks queen");
//			}
		}
    }
    
    // queen position on chess board 00
    int queenRow=0;
    int queenColumn=0;
    
    // horse position on chess board 07
    int horseRow=0;
    int horseColumn=7;
    
    // if queen and horse are in the same row 
    if(queenRow==horseRow)
    {
    	printf("\nqueen attacks knight");
	}
	// if queen and horse are in the same column
	else if(queenColumn==horseColumn)
	{
		printf("\nqueen attacks knight");
	}
	else
	{
		printf("No attack happened");
	}
    return 0;
}