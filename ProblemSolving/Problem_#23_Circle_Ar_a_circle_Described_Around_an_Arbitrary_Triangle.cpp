#include <iostream>
#include <cmath>
using namespace std;






int main()
{


    const float PI = 3.14;
    float A,B,C,P;

    float Area;




    cout << "Enter A" << endl;
    cin >> A;

    cout << "Enter B" << endl;
    cin >> B;

    cout << "Enter C" << endl;
    cin >> C;


    cout << endl;

    P = (A + B + C) /2;

    Area = round( PI * pow((A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C))), 2));

    cout << "Area = " << Area <<endl;

    return 0;

}