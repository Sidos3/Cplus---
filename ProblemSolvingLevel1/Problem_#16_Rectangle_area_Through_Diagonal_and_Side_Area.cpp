#include <iostream>
#include <cmath>

using namespace std;

void ReadNumbers(float &A, float &D)
{ 

    cout << "Please Enter Number A" << endl;
    cin >> A;

    cout << "Plese Enter Number B" << endl;
    cin >> D;

}

float RectangleAreaThroughDiagonalSideArea(float A,float D){

    float Area = A * sqrt(pow(D,2) - pow(A,2));
    return Area;
}
void PrintResult(float Area)
{
    cout << "The Area = " << Area << endl;
}
int main(){
    
    float A,D;
    
    ReadNumbers(A,D);

    PrintResult(RectangleAreaThroughDiagonalSideArea(A,D));
   


    return 0;
}