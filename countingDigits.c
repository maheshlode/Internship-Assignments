#include <stdio.h>
#include <stdlib.h>

/* Declaring function prototype */
int countNumbersOfDigits(int);
int testNoofDigits(int, int );
int count = 0;

int main()
{
    int num = 123456789;
    
    int noOfDigits = printDigits(num);
    
    printf("Number of digits are :%d\n",count);
    if(testNoofDigits(noOfDigits, num) == 0)
    {
        printf("test case is succesfull\n");
    }
    else
    {
        printf("Test case failed");
    }

    return 0;
}

int testNoofDigits(int digits, int n)
{
    if(digits == 1 && (n >= 0 && n <= 9)) {
        return 0;
    }
    else if(digits == 2 && (n >= 10 && n <= 99)) {
        return 0;
    }
    else if(digits == 3 && (n >= 100 && n <= 999)) {
        return 0;
    }
    else if(digits == 4 && (n >= 1000 && n <= 9999)) {
        return 0;
    }
    else if(digits == 5 && (n >= 10000 && n <= 99999)) {
        return 0;
    }
    else if(digits == 6 && (n >= 100000 && n <= 999999)) {
        return 0;
    }
    else if(digits == 7 && (n >= 1000000 && n <= 9999999)) {
        return 0;
    }
    else if(digits == 8 && (n >= 10000000 && n <= 99999999)) {
        return 0;
    }
    else if(digits == 9 && (n >= 100000000 && n <= 999999999)) {
        return 0;
    }
    else if(digits == 9 && (n >= 1000000000)) {
        return 0;
    }
	else
	{
		return -1;
	}
}

int countNumbersOfDigits(int iNum)
{
    while(iNum!=0)
    {
        iNum = iNum /10;
        count++;
    }
    
    return count;
}