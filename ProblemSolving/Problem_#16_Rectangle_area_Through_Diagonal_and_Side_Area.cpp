#include <iostream>
#include <cmath>

using namespace std;




int main(){

    float A;
    float D;
    float Area;



    cout << "Enter A" << endl;
    cin >> A;

    cout << "Enter D" << endl;
    cin >> D;

    cout << endl;


    Area = A * sqrt(pow(D,2) - pow(A,2));

    cout << "Area = " << Area << endl;


    return 0;
}