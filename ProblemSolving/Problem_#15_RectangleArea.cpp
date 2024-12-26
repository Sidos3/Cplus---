#include <iostream>
#include <string>
using namespace std;

float RectangleArea(float A, float B) {
    return A * B;
}



int main() {

    float A, B;

    cout << "Enter A" << endl;
    cin >> A;

    cout << "Enter B" << endl;
    cin >> B;

    cout << "Rectangle Area = " << RectangleArea(A,B) << endl;


    return 0;
}