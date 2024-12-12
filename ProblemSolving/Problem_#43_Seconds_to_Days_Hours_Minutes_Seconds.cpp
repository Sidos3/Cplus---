#include <iostream>
#include <cmath>
using namespace std;





int main(){




    short int SecondsPerDays , SecondsPerHours , SecondsPerMinuts , TotalSeconds , NumberOfDays ,NumberOfHours,NumberOfMinuts,NumberOfSeconds;
    float Remainder;


    cout << "Please Enter Number Of Seconds" << endl; 
    cin >> TotalSeconds;

    SecondsPerDays = (24 * 60 * 60);
    SecondsPerHours = (60 * 60 );
    SecondsPerMinuts = 60;


    NumberOfDays = floor(TotalSeconds/SecondsPerDays);

    Remainder = NumberOfDays % SecondsPerDays;

    NumberOfHours = floor(Remainder / SecondsPerHours);

    Remainder = NumberOfHours % SecondsPerHours ;

    NumberOfMinuts  = floor(Remainder / SecondsPerMinuts);

    Remainder = NumberOfMinuts % SecondsPerMinuts;

    NumberOfSeconds = Remainder;


    cout << TotalSeconds << ":" << NumberOfHours << ":" << NumberOfMinuts << ":" << NumberOfSeconds << endl;


    
    return 0;
}


    
