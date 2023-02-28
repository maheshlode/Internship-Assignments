
// function to check whether a given string is palindrome or not
function isStringPalindrome(string)
{
    let i;
	let flag=0;
	
    i=0;
    while(i<string.length)
    {
        if(string[i]!=string[(string.length)-i-1])
		{
			flag=1;
			break;
		}
        i++;
    }
	
	if(flag)
	{
        console.log("\ngiven string is not palindrome");
        return false;
	}
	else
	{
        console.log("\ngiven string is palindrome");
        return true;
	}
}

function checkIsStringPalindrome(string, expectedOutput)
{
    if(isStringPalindrome(string)==expectedOutput)
	{
		console.log("Test case is succesfull ");
	}
	else
	{
		console.log("Test case is failed");
	}
}

checkIsStringPalindrome("abcd", false)
checkIsStringPalindrome("aba", false)
checkIsStringPalindrome("nayan", true)
checkIsStringPalindrome("malyalam", true)
checkIsStringPalindrome("123", false)
checkIsStringPalindrome("ababaa", false)



