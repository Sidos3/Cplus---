#include <iostream>
using namespace std;

void PrintnumberFromNto1(int Number)
{
    for ( int i = Number; i >= 1; i--)
    {
        cout << i << endl;
    }
    
}



int main()
{
    int Number;


    cout << "Please Enter a Number" << endl;
    cin >> Number;

    cout << "***************" << endl;
    
    PrintnumberFromNto1(Number);


    return 0;
}