#include <iostream>
using namespace std;



int main()
{

    int Mark;


    cout << "Please Enter a Mark " << endl;
    cin >> Mark;

    if (Mark >= 50)
    {
        cout << "Pass";
    }
    else
    {
        cout << "Fail";
    }


    return 0;
}