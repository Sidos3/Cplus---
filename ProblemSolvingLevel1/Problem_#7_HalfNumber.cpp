#include <iostream>
using namespace std;

int ReadNumber()
{
    int Number;

    cout << "Please Enter a number" << endl;
    cin >> Number;
    return Number;

}

float CalculateHalfNumber(int Number)
{
    return (float) Number / 2;
}

void PrintResult(int Number)
{
    string Result = "Half Of " + to_string(Number) + " is " + to_string(CalculateHalfNumber(Number));
    cout <<endl  << Result << endl;
}

int main(){

    PrintResult(ReadNumber());
    return 0;

}
