#include <iostream>
using namespace std;




void PrintSumOddNumbers(int Number)
    
{
    int Sum = 0;

    for (int i = 1; i <= Number; i=i+2)
    {

            Sum = Sum + i;

    }
    cout << Sum << endl;

}

int main()
{
    int Number;


    cout << "Please Enter a Number" << endl;
    cin >> Number;

    cout << "***************" << endl;
    
    PrintSumOddNumbers(Number);


    return 0;
}