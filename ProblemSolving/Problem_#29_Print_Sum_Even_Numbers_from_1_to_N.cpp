#include <iostream>
using namespace std;




void PrintSumEvenNumbers(int Number)
    
{
    int Sum = 0;

    for (int i = 0; i <= Number; i=i+2)
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
    
    PrintSumEvenNumbers(Number);


    return 0;
}