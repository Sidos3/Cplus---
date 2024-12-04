#include <iostream>
using namespace std;







int main()
{


    const float PI = 3.14;
    float A;
    float Area;




    cout << "Enter A" << endl;
    cin >> A;

    cout << endl;

    Area = (PI * (A*A)) / 4;

    cout << "Circle Area Through diametre  = " << Area << endl;



    return 0;
}