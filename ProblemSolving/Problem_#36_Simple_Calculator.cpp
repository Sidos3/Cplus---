#include <iostream>
using namespace std;








int main()
{

    int Num1,Num2;
    string Operation;


    cout << "Please Enter Number 1" << endl;
    cin >> Num1;

    cout << "Please Enter Number 2" << endl;
    cin >> Num2;

    cout << "Please Enter The Operation" << endl;
    cin >> Operation;


    if (Operation == "+")
    {
        cout << Num1 + Num1 ;
    }
    else if (Operation == "-")
    {
        cout << Num1 - Num2 ;
    }
    else if (Operation == "*")
    {
        cout << Num1 * Num2;
    }
    else if (Operation == "/")
    {
        cout << Num1 / Num2 ;
    }
    else
    {
        cout << "Try A Nother Way :)";
    }
    
    
    return 0;
}