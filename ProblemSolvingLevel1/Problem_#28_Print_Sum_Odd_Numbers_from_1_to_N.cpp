#include <iostream>
using namespace std;




int PrintSumOddNumbers(int Number)
    
{
    int Sum = 0;

    // for (int i = 1; i <= Number; i=i+2)
    // {
    //         Sum = Sum + i;
    // }

    int i = 1;
    while (i <= Number)
    {
        Sum = Sum + i;
        i= i+2;
    }
    
    return Sum;

}

int main()
{
    int Number;


    cout << "Please Enter a Number" << endl;
    cin >> Number;

    cout << "***************" << endl;
    
    cout << "Sum = " << PrintSumOddNumbers(Number) << endl;


    return 0;
}