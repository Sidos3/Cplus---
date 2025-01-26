#include <iostream>
#include <cmath>
using namespace std;



void PowerofNumber(int Number)
{
    cout << round(pow(Number,2)) << endl;
    cout << round(pow(Number,3))<< endl;
    cout << round(pow(Number,4)) << endl;
}

int main(){

    int Number;

    cout << "Enter A Number " << endl;
    cin >> Number;

    PowerofNumber(Number);



    return 0;
}