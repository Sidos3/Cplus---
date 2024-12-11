#include <iostream>
#include <cmath>
using namespace std;




int main(){



    const float PI = 3.14;
    float R;
    float Area;




    cout << "Enter Rayon Of The Circle" << endl;
    cin >> R;

    cout << endl;


    Area = ceil(PI * pow(R,2));


    cout << "The Area Of The Circle = " << Area << endl;


    return 0;

    }