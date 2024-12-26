#include <iostream>
#include <cmath>
using namespace std;

int PowerOfM(int Number,int M)
{
    return round(pow(Number,M));
}




int main(){



    int Number,M;


    cout << "Please enter the Number" << endl;
    cin >> Number;


    cout << "Please Enter M" << endl;
    cin >> M;

    cout << endl;


    cout << PowerOfM(Number,M) << endl;




    return 0;
}
