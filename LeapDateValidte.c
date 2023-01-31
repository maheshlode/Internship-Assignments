// Online C compiler to run C program online
#include<stdio.h>

void isLeapDate(int date, int month, int year)
{
    // check month
    if(month >=1 && month <=12)
    {
        if((date >= 1 && date <= 31) && (month == 1 || month == 3 || 
            month == 5 || month == 7 ||month == 8 || month == 10 || month == 12))
        {
            printf("date is valid");
        }
        else if((date >= 1 && date <= 30) && (month == 4 || month == 6 || month == 9 || month == 11 ))
        {
            printf("date is valid");
        }
        //else if()
    }
    if((year%4==0 && year%400==0) || (year%100!=0))
    {
        
    }
}
int main() {
    int dd,mm,yy;
    
    isLeapDate(10,2,2020);

    return 0;
}