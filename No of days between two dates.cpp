#include <iostream>
using namespace std;


class Date
{
	public:
		long int dd,mm,yy;
	
	public:
		Date();
		Date(long int, long int, long int);
		int countLeapYearsDays(Date&);
		int countDaysBetTwoDates(Date&);	
};

Date::Date()
{
	dd=0;
	mm=0;
	yy=0;
}

Date::Date(long int day, long int month, long int year)
{
	dd = day;
	mm = month;
	yy = year;
}

int Date::countDaysBetTwoDates(Date& dat1)
{
	int daysInMonths[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	
	int num = dat1.yy*365 + dat1.dd;
	
	for(int i =0; i<=dat1.mm; i++)
	{
		num = num + daysInMonths[i];
	}
	
	num = num + countLeapYearsDays(dat1);
	return (num);
	
//	int num2 = dat2.yy*365 + dat2.dd;
//	
//	for(int i =0; i<=dat2.mm; i++)
//	{
//		num2 = num2 + daysInMonths[i];
//	}
//	
//	num2 = num2 + countLeapYearsDays(dat1);
//	
//	return (num2 - num);
}
	
int Date::countLeapYearsDays(Date& date1)
{
	int years = date1.yy;
	if(date1.mm == 2)
	{
		years--;
	}
	
	return (years/4)-(years/100)+(years/400);
}

int main()
{
	Date date1 = Date(1,2,2020);
	Date date2 = Date(29,2,2020);
	
	int firstDate = date1.countDaysBetTwoDates(date1);
	int secondDate = date2.countDaysBetTwoDates(date2);

	if(date1.dd <=0 && date2.dd <=0 && date1.mm <=0 && date2.mm <=0 && date1.yy <=0 && date2.yy <=0)
	{
		cout<<"Date format is invalid"<<endl;
	}
	else if(date1.yy > date2.yy)
	{
		cout<<"difference : "<<firstDate - secondDate<<endl;
	}
	else 
	{
		cout<<"difference : "<<secondDate - firstDate<<endl;
	}

	return (0);
}


