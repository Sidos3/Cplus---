#include <iostream>
using namespace std;





int main(){


    short int NumberOfHours;
    float Days;
    float Weeks;



    cout << "Please Enter Number Of Hours" << endl;
    cin >> NumberOfHours;


    Days = NumberOfHours / 24;

    Weeks = Days / 7 ;

    cout << endl;


    cout << Weeks << " Weeks " << endl;
    cout << Days << " Days " << endl;




    return 0;
}