#include <iostream>
#include <cmath>
using namespace std;



float CircleAracircleDescribedAroundanArbitraryTriangle(float A, float B, float C) {

    const float PI = 3.14;
    float P = (A + B + C) / 2;

    return round(PI * pow((A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C))), 2));

}




int main()
{
    float A, B, C;

    cout << "Please Enter A " << endl;
    cin >> A;

    cout << "Please Enter B " << endl;
    cin >> B;

    cout << "Please Enter C " << endl;
    cin >> C;

    cout << "Area = " << CircleAracircleDescribedAroundanArbitraryTriangle(A, B, C) << endl;

    return 0;

}