#include <iostream>
#include <cmath>
using namespace std;



int  PowerOfM(int Number,int M)
{

    int P = 1;

    if (M == 0)
    {
        cout << P << endl;
    }
    else
    {
    
    //     for (int i = 1; i <= M; i++)
    // {
    //     P = P * Number;
    // }
    int i = 1;
    while (i <= M)
    {
        P = P * Number;
        i++;
    }
    return P;

    }

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
