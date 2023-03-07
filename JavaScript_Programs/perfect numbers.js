

// function to find the given number is perfect number or not
function isPerfectNumbers(num)
{
    let sum=0;
    let i=1;

    while(i<=(num/2))
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
        i++;
    }
    if(num<=0)
    {
        return 0;
    }
    if(sum==num)
    {
        //console.log(sum)
        return 1;
    }
    else
    {
        return 0;
    }
}

// function to test result of isPerfectNumbers() function
function testIsPerfectNumbers(num,expectedResult)
{
    if(isPerfectNumbers(num)==expectedResult)
    {
        return "Test case is successfull";
    }
    else
    {
        return "Test case is failed";
    }
}

// function call
console.log(testIsPerfectNumbers(100,1)) // Test case is failed
console.log(testIsPerfectNumbers(6,1)) // Test case is successfull
console.log(testIsPerfectNumbers(28,1)) // Test case is successfull
console.log(testIsPerfectNumbers(-28,1)) // // Test case is failed