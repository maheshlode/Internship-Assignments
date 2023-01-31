#include <iostream>

using namespace std;

int main()
{
	int num;
	int hour=0,minutes=0;
		
	cout<<"Enter the hour of the time :"<<endl;
	cin>>hour;
	
	cout<<"Enter the minute of the time :"<<endl;
	cin>>minutes;

	cout<<"hours"<<endl;

	cout<<"Enter the minute of the time :"<<endl;
	cin>>minutes;
	
	
	if(num)
	{
		minutes = minutes + num;
	}
	
	cout<<"indicating hour and minutes"<<hour<<":"<<minutes<<endl;
	
	return 0;
}