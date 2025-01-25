#include <iostream>
using namespace std;




int PrintFactorialOfNumbers(int Number)
    
{
    
    int Factorial = 1;

    // for (int i = Number; i >= 1; i--)
    // {

    //         Factorial = Factorial * i;

    // }

    int i = Number;
    while (i >= 1)
    {
        Factorial = Factorial * i;
        i--;
    }
    
    return Factorial;


}

int main()
{
    int Number;


    cout << "Please Enter a Number" << endl;
    cin >> Number;

    while (Number < 0)
    {
        cout << "Wrong Number !" << endl;
        cout << "The number Must be posetif :-) " << endl;
        cin >> Number;
    }
    
    cout << "***************" << endl;
    
    cout << "Factirial = " << PrintFactorialOfNumbers(Number) << endl;


    return 0;
}