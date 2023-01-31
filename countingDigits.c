#include <stdio.h>
#include <stdlib.h>


int printDigits(int iNum);
void testNoofDigits(int expectedNumOfDigits, int );
int count = 0;

int main()
{
    int num = 123456789;
    
    int noOfDigits = printDigits(num);
    
    printf("Number of digits are :%d\n",count);
    testNoofDigits(noOfDigits, num);

    return 0;
}

void testNoofDigits(int digits, int n)
{
    if(digits == 1 && (n >= 0 && n <= 9)) {
        printf("test case for 1 digit is succesfull\n");
    }
    else if(digits == 2 && (n >= 10 && n <= 99)) {
        printf("test case for 2 digits is succesfull\n");
    }
    else if(digits == 3 && (n >= 100 && n <= 999)) {
        printf("test case for 3 digits succesfull\n");
    }
    else if(digits == 4 && (n >= 1000 && n <= 9999)) {
        printf("test case for 4 digits succesfull\n");
    }
    else if(digits == 5 && (n >= 10000 && n <= 99999)) {
        printf("test case for 5 digits succesfull\n");
    }
    else if(digits == 6 && (n >= 100000 && n <= 999999)) {
        printf("test case for 6 digits succesfull\n");
    }
    else if(digits == 7 && (n >= 1000000 && n <= 9999999)) {
        printf("test case for 7 digits succesfull\n");
    }
    else if(digits == 8 && (n >= 10000000 && n <= 99999999)) {
        printf("test case for 8 digits succesfull\n");
    }
    else if(digits == 9 && (n >= 100000000 && n <= 999999999)) {
        printf("test case for 9 digits succesfull\n");
    }
    else if(digits == 9 && (n >= 1000000000)) {
        printf("test case for failed for 10 digits\n");
    }
	else
	{
		printf("Test case failed");
	}
}

int printDigits(int iNum)
{
    while(iNum!=0)
    {
        iNum = iNum /10;
        count++;
    }
    
    return count;
}