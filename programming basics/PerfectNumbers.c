#include<stdio.h>

int isPerfectNumber(int n)
{
	int sum=0;
	int i,j;
	
	if(n>0)
	{
		for(i=1; i<=n; i++)
	    {
	        sum = 0;
	        for(j=1; j<i; j++)
	        {
	            if(i % j == 0)
	            {
	            	sum = sum + j;
	            }
	        }
	        if(sum == i)
	        {
	            return 1;
    		}
		}
	}	
	else
    {
    	return 0;
	}
	return (i);
}

void testIsPerfectNumber(int num)
{
	//int count = isPerfectNumber(num);
	int i;
	for(i=1; i<=num; i++)
	{
		if(i==6 || i==28)
		{
			if(isPerfectNumber(i)==1)
			{
				printf("\nTest case is successful for %d ",i);
			}
			else
			{
				printf("\nTest case is failed");
			}
		}
		else
		{
			if(isPerfectNumber(i)==0)
			{
				printf("\nTest case is successful for %d ",i);
			}
			else
			{
				printf("\nTest case is failed");
			}
		}
	}
}

void main(void)
{
	testIsPerfectNumber(100);
}