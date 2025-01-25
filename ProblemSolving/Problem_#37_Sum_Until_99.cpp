#include <iostream>
using namespace std;







int main()
{
    int Number;
    int Sum = 0;

    cout << "Please Enter Number " << endl;
    cin >> Number;

    
    while (Number != -99)
    {
        Sum +=Number;
        cout << "Please Enter a Number a gain" << endl;
        cin >> Number;
    }
    cout <<"Sum = "<< Sum << endl;



    return 0;
}