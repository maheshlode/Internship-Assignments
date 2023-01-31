#include<stdio.h>

int calOccurrenceOfDigits(int num)
{
	int i,ans =0;
	int digits[] = {0,1,2,3,4,5,6,7,8,9};
	int countOfEachDigits[] = {0,0,0,0,0,0,0,0,0,0};
	
	if(num<0)
	{
		num = num * (-1);
	}

	while(num>0)
	{
		ans = num % 10;
		for(i=0;i<=9;i++)
		{
			if(digits[i]==ans)
			{
				countOfEachDigits[i] = countOfEachDigits[i] + 1;
			}
		}
		num = num/10;
	}
	
	return countOfEachDigits;
}

void testcalOccurrenceOfDigits(int num,int  *arr1)
{
	int *countOfDigits = calOccurrenceOfDigits(num);
	int i=0,count=0;
	
	while(i<=9)
	{
		if(arr1[i]!=countOfDigits[i])
		{
			break;
		}
		i++;
		count++;
	}
	
	if(count==10)
	{
		printf("\nTest case is succesfull for %d ",num);
	}
	else
	{
		printf("\nTest case is failed for %d ", num);
	}
}


void main(void)
{
	int num = 123;
	int emptyArray[10] = {0,1,1,1,0,0,0,0,0,0};
	int i;
	
	testcalOccurrenceOfDigits(num,emptyArray);

	int num1 = 111;
	testcalOccurrenceOfDigits(num1,emptyArray);
}