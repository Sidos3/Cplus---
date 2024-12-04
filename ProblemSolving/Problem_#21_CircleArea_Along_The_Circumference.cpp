#include <iostream>
using namespace std;




int main()
{


    const float PI = 3.14;
    float L;
    float Area;




    cout << "Enter L" << endl;
    cin >> L;

    cout << endl;

    Area = (L*L) / (4 * PI);

    cout << "Circle Area   = " << Area << endl;



    return 0;
}