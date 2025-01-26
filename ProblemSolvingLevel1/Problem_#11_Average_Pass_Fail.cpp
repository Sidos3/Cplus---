#include <iostream>
using namespace std;






int main()
{

    int Mark1,Mark2,Mark3;
    

    cout << "Please Enter a Mark 1 " << endl;
    cin >> Mark1;

    cout << "Please Enter a Mark 2 " << endl;
    cin >> Mark2;

    cout << "Please Enter a Mark 3 " << endl;
    cin >> Mark3;


    int Avg = (Mark1 + Mark2 + Mark3) / 3;


    if (Avg >= 50)
    {
        cout << "Average = " << Avg << endl;
        cout << "Pass";
    }
    else
    {
        cout << "Average = " << Avg << endl;
        cout << "Fail";
    }


    return 0;
}