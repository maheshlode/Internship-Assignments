#include<stdio.h>
#include<string.h>

int isStringPalindrome(char isStringPalindrome[])
{
	int i,length;
	int flag=0;
	
	for(i=0; i<strlen(isStringPalindrome); i++)
	{
		if(isStringPalindrome[i]!=isStringPalindrome[(strlen(isStringPalindrome))-i-1])
		{
			flag=1;
			break;
		}
	}
	
	if(flag)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

void testIsStringPalindromeFunc(char enteredStr[], int expectedOutcome)
{
	if(isStringPalindrome(enteredStr)==expectedOutcome)
	{
		printf("\nTest case is succesfull for the string %s", enteredStr);
	}
	else
	{
		printf("\nTest case is failed for the string %s", enteredStr);
	}
}

void main()
{
	testIsStringPalindromeFunc("abba",1);
	testIsStringPalindromeFunc("abc",1);
	testIsStringPalindromeFunc("123321",1);
}