#include <iostream>
using namespace std;




void PrintFactorialOfNumbers(int Number)
    
{
    // int Sum = 0;
    int Factorial = 1;

    for (int i = Number; i >= 1; i--)
    {

            Factorial = Factorial * i;
            // Sum = Sum + Factorial;

    }
    cout << Factorial << endl;
    // cout << Sum << endl;

}

int main()
{
    int Number;


    cout << "Please Enter a Number" << endl;
    cin >> Number;

    cout << "***************" << endl;
    
    PrintFactorialOfNumbers(Number);


    return 0;
}