// function to find differnce between two dates
function findDateDiffernce(firstDate,secondDate)
{
    let differnceInTime=secondDate.getTime()-firstDate.getTime()
    if(differnceInTime<0)
    {
        return "time/days cannot be negative. Enter valid dates"
    }
    
    return Math.floor(differnceInTime/(1000*60*60*24));
}

// function to test result of findDateDiffernce() function
function testFindDateDiffernce(firstDate,secondDate,expectedResult)
{
    let result=findDateDiffernce(firstDate,secondDate);
    if(secondDate<firstDate)
    {
        return "days cannot be negative";
    }
    else if(result===expectedResult)
    {
        return "Test case is successfull";
    }
    else
    {
        return "Test case is failed";
    }
}

const date1=new Date('2022-01-01');
const date2=new Date('2022-02-01');
console.log(testFindDateDiffernce(date1,date2,31)) // Test case is successfull


const date3=new Date('2022-01-01');
const date4=new Date('2022-02-01');
console.log(testFindDateDiffernce(date3,date4,30)) // Test case is failed
// console.log(findDateDiffernce(date3,date4));

const date5 = new Date('2012-01-01');
const date6 = new Date('2020-02-01');
console.log(testFindDateDiffernce(date5,date6,31)) // Test case is failed

const date7 = new Date('2012-01-01');
const date8 = new Date('2000-02-01');
console.log(findDateDiffernce(date7,date8));
console.log(testFindDateDiffernce(date7,date8,31)) // time/days cannot be negative. Enter valid dates 
                                                   // days cannot be negative