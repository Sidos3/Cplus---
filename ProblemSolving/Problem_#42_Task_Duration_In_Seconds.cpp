#include <iostream>
using namespace std;





int main(){


    short int Days , Hours , Minits , seconds;
    float TaskDuration;





    cout << "Please Enter N° Of Days" << endl;
    cin >> Days;

    cout << "Please Enter N° Of Hours" << endl;
    cin >> Hours;

    cout << "Please Enter N° Of Minits" << endl;
    cin >> Minits;

    cout << "Please Enter N° Of seconds" << endl;
    cin >> seconds;


    TaskDuration = Days * (24 * 60 * 60) + Hours * (60 * 60) + Minits * (60) + seconds;

    cout << endl;

    cout << "Duration Total In Seconds = " << TaskDuration << endl;


    return 0;
}