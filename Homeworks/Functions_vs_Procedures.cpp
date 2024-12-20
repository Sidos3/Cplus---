#include <iostream>
#include <string>
using namespace std;


void mySumeProcedure() {

    int Num1, Num2;
    /*string name;*/
    cout << "Please Enter Number 1 ?" << endl;
    cin >> Num1;

   /* cout << "enter name" << endl;
    cin.ignore();
    getline(cin, name);*/

    cout << "Please Enter Number 2 ?" << endl;
    cin >> Num2;

    cout << "*********************" << endl;
    cout << Num1 + Num2  << endl;

}

int mySumeFunction() {

    int Num3, Num4;

    cout << "Please Enter Number 1 ?" << endl;
    cin >> Num3;

    cout << "Please Enter Number 2 ?" << endl;
    cin >> Num4;

    cout << "*********************" << endl;
    
    return Num3 + Num4;
}

int main() {


    mySomeProcedure();
    cout << "*********************************************************" << endl;
    cout << mySomeFunction() << endl;




    return 0;
}