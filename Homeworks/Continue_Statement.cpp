#include <iostream>
using namespace std;






int main()
{
    int Number;
    
    
    

    int Sum = 0;

    for (int i = 1; i <= 5; i++)
    {
        cout << "Please Enter Number " << i << endl;
        cin >> Number;
        if (Number > 50)
        {
            cout << "the number is grater than 50 won't be calculeted." << endl;
            continue;
        }
        Sum +=Number;
    }
    
    cout << "Sum = " << Sum << endl;



    return 0;
}