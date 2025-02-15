#include <iostream>
#include <string>
using namespace std;


void ReadNumbers(float& A, float& B)
{
    cout << "Enter A" << endl;
    cin >> A;

    cout << "Enter B" << endl;
    cin >> B;
}
float CalculateRectangleArea(float A, float B) {
    return A * B;
}

void PrintResults(float Area)
{
    cout << "Rectangle Area is " << Area << endl;
}

int main() {

    float A,B;
    ReadNumbers(A,B);
    PrintResults(CalculateRectangleArea(A,B));


    return 0;
}