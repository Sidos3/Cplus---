#include <iostream>
#include <cmath>
using namespace std;


float CircleArea(float Rayon){

    const float PI = 3.14;

    return ceil(PI * pow(Rayon,2));

}

int main(){
    float Rayon;
    cin >> Rayon;
    cout << "The Area Of The Circle = " << CircleArea(Rayon) << endl;
    return 0;

    }