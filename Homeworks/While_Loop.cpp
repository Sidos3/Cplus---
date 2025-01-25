#include <iostream>
using namespace std;



int ReadNumberInRange(int From, int To)
{
    int Number;

    cout << "Please Enter a Number " << endl;
    cin >> Number;

    while (Number < From || Number > To)
    {
        cout << "Wrong Number" << endl;
        cout << "Please Enter a Number between 18 and 30" << endl;
        cin >> Number;
    }
    
    return Number;
}





int main ()
{


    cout << "Number = " << ReadNumberInRange(18,30) << endl;


    return 0;
}