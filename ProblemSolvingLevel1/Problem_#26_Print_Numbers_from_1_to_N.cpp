#include <iostream>
using namespace std;

void PrintnumberFrom1toN(int Number)
{
    // for ( int i = 1; i <= Number; i++)
    // {
    //     cout << i << endl;
    // }
    int i = 1;
    while (i <= Number)
    {
        cout << i << endl;
        i++;
    }
    
    
}





int main()
{
    int Number;


    cout << "Please Enter a Number" << endl;
    cin >> Number;

    cout << "***************" << endl;
    
    PrintnumberFrom1toN(Number);


    return 0;
}