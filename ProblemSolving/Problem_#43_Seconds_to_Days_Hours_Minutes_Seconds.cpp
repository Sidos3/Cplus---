#include <iostream>
#include <cmath>
using namespace std;

void SecodstoDaysHoursMinutesSeconds(int TotalSeconds)
{
    int SecondsPerDay = (24 * 60 * 60);
    int SecondsPerHour = (60 * 60 );
    int SecondsPerMinute = 60;


    int   NumberOfDays , NumberOfHours , NumberOfMinutes , NumberOfSeconds;

        // Calculate days
    NumberOfDays = floor(TotalSeconds / SecondsPerDay);
    int Remainder = TotalSeconds % SecondsPerDay;

    // Calculate hours
    NumberOfHours = floor(Remainder / SecondsPerHour);
    Remainder = Remainder % SecondsPerHour;

    // Calculate minutes
    NumberOfMinutes = floor(Remainder / SecondsPerMinute);

    // Calculate seconds
    NumberOfSeconds = Remainder % SecondsPerMinute;


    cout << NumberOfDays << ":" << NumberOfHours << ":" << NumberOfMinutes << ":" << NumberOfSeconds << endl;

}



int main(){

   int TotalSeconds;
    
    cout << "Please Enter Number Of Seconds" << endl; 
    cin >> TotalSeconds;

   
    SecodstoDaysHoursMinutesSeconds(TotalSeconds);


    
    return 0;
}


    
