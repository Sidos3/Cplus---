#include <iostream>
#include <cmath>
using namespace std;


float CircleAreaNscribdInASquere(float A){

    const float PI = 3.14;

    return ceil((PI * pow(A,2)) / 4);
}




int main()
{
    float A;
    cin >> A;

    cout << "Circle Area   = " << CircleAreaNscribdInASquere(A) << endl;



    return 0;
}