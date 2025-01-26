#include <iostream>
#include <cmath>
using namespace std;

float CircleAreaThroughDiametre(float Diametre){
    const float PI = 3.14;
    return ceil((PI * pow(Diametre,2)) / 4);
}


int main(){



    // Area = (PI * (D*D)) / 4;
    float Diametre;
    cin >> Diametre;

    cout << "Circle Area Through diametre = " << CircleAreaThroughDiametre(Diametre) << endl;



    return 0;
}