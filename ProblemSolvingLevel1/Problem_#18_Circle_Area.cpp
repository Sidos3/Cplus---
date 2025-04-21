#include <iostream>
#include <cmath>
using namespace std;


float ReadRadios ()
{

    float R;

    cout << "Please Enter Radios R" << endl;
    cin >> R;

    return R;


}

float CircleArea(float R)
{

    const float PI = 3.1415926535897932384626433832795;

    float Area = PI * pow(R,2);

    return Area;

}

void PrintResult(float Area)
{
    cout << "The circle Area = " << Area << endl;
}


int main(){

PrintResult(CircleArea(ReadRadios()));
return 0;

    }