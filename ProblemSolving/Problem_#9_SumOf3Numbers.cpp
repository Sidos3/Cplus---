#include <iostream>
using namespace std;



int main(){


    int Number; 
    int Number_1 ; 
    int Number_2 ; 
    int Sum;


        cout << "Enter the first number"<< endl;
        cin >> Number;

        cout << "Enter the second number "<< endl;
        cin >> Number_1;

        cout << "Enter the third number"<< endl;
        cin >> Number_2;

        Sum = Number + Number_1 + Number_2;

        cout << endl;

        cout << Number << " + " << endl;
        cout << Number_1 << " + " << endl;
        cout << Number_2  << endl;
        cout << "_________________________" << endl;
        cout << "Total = " << Sum << endl << endl ;




    return 0;
}