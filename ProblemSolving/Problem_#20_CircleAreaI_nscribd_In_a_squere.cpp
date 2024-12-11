#include <iostream>
#include <cmath>
using namespace std;







int main()
{


    const float PI = 3.14;
    float A;
    float Area;




    cout << "Enter A" << endl;
    cin >> A;

    cout << endl;

    // Area = (PI * (A*A)) / 4;
    
    Area = ceil((PI * pow(A,2)) / 4);


    cout << "Circle Area   = " << Area << endl;



    return 0;
}