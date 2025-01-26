#include <iostream>
using namespace std;



int main()
{

    int Age;


    cout << "Please Enter Your Age " << endl;
    cin >> Age;



    if (Age >= 18 && Age <= 45)
    {
        cout << "Valid Age";
    }
    else
    {
        cout << "Invalid Age";
    }


    return 0;
}