#include <iostream>
#include <cmath>
using namespace std;


int TaskDuration(int Days, int Hours, int Minuts, int Seconds)
{
    return round(Days * (24 * 60 * 60) + Hours * (60 * 60) + Minuts * (60) + Seconds);
}


int main(){


    int Days , Hours , Minuts , Seconds;
    


    cout << "Please Enter N° Of Days" << endl;
    cin >> Days;

    cout << "Please Enter N° Of Hours" << endl;
    cin >> Hours;

    cout << "Please Enter N° Of Minits" << endl;
    cin >> Minuts;

    cout << "Please Enter N° Of seconds" << endl;
    cin >> Seconds;

    cout << endl;

    cout << "Duration Total In Seconds = " << TaskDuration(Days,Hours,Minuts,Seconds) << endl;


    return 0;
}