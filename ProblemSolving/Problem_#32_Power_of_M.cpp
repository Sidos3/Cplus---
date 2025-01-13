#include <iostream>
#include <cmath>
using namespace std;



void PowerOfM(int Number,int M)
{

    int P = 1;

    if (M == 0)
    {
        cout << P << endl;
    }
    else
    {
        for (int i = 1; i <= M; i++)
    {
        P = P * Number;
    }

    cout << P << endl;
    }
    

}




int main(){



    int Number,M;


    cout << "Please enter the Number" << endl;
    cin >> Number;


    cout << "Please Enter M" << endl;
    cin >> M;

    cout << endl;


    PowerOfM(Number,M) ;




    return 0;
}
