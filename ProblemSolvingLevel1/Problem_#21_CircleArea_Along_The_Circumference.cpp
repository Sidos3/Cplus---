#include <iostream>
#include <cmath>
using namespace std;


float CircleAreaAlongTheCircumference(float L){

    const float PI = 3.14;

    return floor(pow(L,2) / (4 * PI)) ;

}

int main()
{
    float L;
    
    cin >> L;
    
    cout << "Circle Area   = " << CircleAreaAlongTheCircumference(L) << endl;


    return 0;
}