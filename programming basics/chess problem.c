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
    
    int inputArray[]={queen,horse};
    
//	for(i=0;i<2;i++)
//	{
//		printf("%d\t",inputArray[i]);
//	}
	
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
        	if(array[i][j]==inputArray[i])
        	{
        		printf("");
			}
		}
        printf("\n");
    }
    
    for(i=0;i<8;i++)
    {
    		
	}
    return 0;
}