#include <iostream>
using namespace std;





int main(){

    float const PI = 3.14;
    float A;
    float B;
    float N;    //Nimerateur
    float D;    //Donimerateur    
    float Area;



    cout << "Enter A" << endl;
    cin >> A;

    cout << "Enter B" << endl;
    cin >> B;

    cout << endl;

    N = 2 * A - B;
    D = 2 * A + B;
    
    Area =  (PI * (B*B) / 4) * (N/D);

    cout << "Circle Area = " << Area << endl;




    return 0;
}