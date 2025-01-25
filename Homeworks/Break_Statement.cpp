#include <iostream>
using namespace std;




int main()
{

    int arr[10] = {10,20,44,55,33,22,99,88,99,100};

    for (int  i = 0; i < 10; i++)
    {
        if (arr[i] == 100)
        {
            break;
        }
        cout << arr[i] << endl;
    }
    




    return 0;
}