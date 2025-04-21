#include <iostream>
#include <cmath>
using namespace std;


float ReadDiameter ()
{

    float D;

    cout << "Please Enter Diameter D" << endl;
    cin >> D;

    return D;


}
float CircleAreaThroughDiametre(float D)
{

    const float PI = 3.1415926535897932384626433832795;

    float Area =  (PI * pow(D,2)) / 4;

    return Area;

}

void PrintResult(float Area)
{
    cout << "Circle Area = " << Area << endl;
}


int main(){

    PrintResult(CircleAreaThroughDiametre(ReadDiameter()));

    return 0;
}