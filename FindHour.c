#include <stdio.h>

/* Global variable declaration */
int actualHour = 0;

void main(void)
{
    int fasterMinutes;
    printf("Enter value of X(X is minutes clock that runs faster per hour)");
    scanf("%d",&fasterMinutes);

    int hour, minutes;
    printf("Enter Hour and Minutes(HH:MM)");
    scanf("%d%d",&hour,&minutes);

    while(hour>0)
    {
        if(minutes-fasterMinutes < 0 )
        {
            minutes = 60 - fasterMinutes;
            hour = hour - 2;
            actualHour++;
        }
        else
        {
            minutes = minutes-x;
			hour = hour-1;
			actualHour++; 
        }

        printf("Actual Hour is: %d", actualHour);
    }
}