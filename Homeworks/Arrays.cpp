#include <iostream>
#include <string>
using namespace std;


int main()
{

    float Grades[2];

    cout << "Please Enter grade 1 ?" << endl;
    cin >> Grades[0];

    cout << "Please Enter grade 2 ?" << endl;
    cin >> Grades[1];

    cout << "Please Enter Grade 3 ?" << endl;
    cin >> Grades[2];

    cout << "******************" << endl;
    cout << "The Everage of three grades = " << (Grades[0] + Grades[1] + Grades[2]) / 3 << endl;

    return 0;
}