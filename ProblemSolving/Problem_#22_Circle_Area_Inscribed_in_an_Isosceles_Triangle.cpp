#include <iostream>
using namespace std;



float CircleAreaInsecribdInAnIsoscelesTriangle(float A,float B){

    float const PI = 3.14;
    float N,D;

    N = 2 * A - B;
    D = 2 * A + B;

    return (PI * (B*B) / 4) * (N/D);
}

int main(){
    float A,B;

    cin >> A;
    cin >> B;

    cout << "Circle Area = " << CircleAreaInsecribdInAnIsoscelesTriangle(A,B) << endl;


    return 0;
}