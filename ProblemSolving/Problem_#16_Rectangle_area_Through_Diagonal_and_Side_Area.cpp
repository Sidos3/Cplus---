#include <iostream>
#include <cmath>

using namespace std;


float RectangleArea(float A,float D){

    return A * sqrt(pow(D,2) - pow(A,2));

}

int main(){
    
    float A,D;
    
    cin >> A;
    cin >> D;

    cout << "Area = " << RectangleArea(A,D) << endl;


    return 0;
}