#include <iostream>
using namespace std;


void ReadsGrades(float Grade[3])
{
    cout << "Please Enter grade 1 ?" << endl;
    cin >> Grade[0];

    cout << "Please Enter grade 2 ?" << endl;
    cin >> Grade[1];

    cout << "Please Enter Grade 3 ?" << endl;
    cin >> Grade[2];
}


float PrintAvg(float Grade[3])
{
    return ((Grade[0] + Grade[1] + Grade[2]) / 3);
}


int main(){

    float Grade[3];

    ReadsGrades(Grade);

    cout << "*****************" << endl;
    cout << "The Everage of three grades = " << PrintAvg(Grade) << endl;



    return 0;
}