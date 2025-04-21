#include <iostream>
#include <cmath>
using namespace std;


float ReadSquareSide()
{

    float A;

    cout << "Please Enter SquareSide A" << endl;
    cin >> A;

    return A;


}


float CircleAreaNscribdInASquere(float A){

    const float PI = 3.1415926535897932384626433832795;

    float Area = (PI * pow(A,2)) / 4;

    return Area;
}


void PrintResult(float Area)
{
    cout << "Circle Area = " << Area << endl;
}

int main()
{

    PrintResult(CircleAreaNscribdInASquere(ReadSquareSide()));
    return 0;
}