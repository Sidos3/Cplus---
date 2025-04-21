#include <iostream>
using namespace std;


void ReadNumbers(float &B,float &H)
{

    cout << "Please Enter Triangle Base B" << endl;
    cin >> B;

    cout << "Please Enter Triangle Height H" << endl;
    cin >> H;

}

float TriangleArea(float B, float H)
{
    float Area = (B / 2) * H ;

    return Area;
}

void PrintResult(float Area)
{
    cout << "Trinagle Area = " << Area << endl;
}


int main(){


    float B,H;
    ReadNumbers(B,H);
    PrintResult(TriangleArea(B,H));


    return 0;
}