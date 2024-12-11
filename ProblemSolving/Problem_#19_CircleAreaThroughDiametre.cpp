#include <iostream>
#include <cmath>
using namespace std;




int main(){



    const float PI = 3.14;
    float D;
    float Area;




    cout << "Enter Diametre" << endl;
    cin >> D;

    cout << endl;

    // Area = (PI * (D*D)) / 4;
    Area = ceil((PI * pow(D,2)) / 4);

    cout << "Circle Area Through diametre = " << Area << endl;






    return 0;
}