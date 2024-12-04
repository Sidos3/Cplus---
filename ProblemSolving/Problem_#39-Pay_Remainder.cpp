#include <iostream>
using namespace std;





int main(){


    float TotalBill,CachPaid,Remainder;



    cout << "Please Enter TotalBill" << endl;
    cin >> TotalBill;

    cout << "Please Enter CachPaid" << endl;
    cin >> CachPaid;


    Remainder = CachPaid - TotalBill ;


    cout << endl;

    cout << "Remainder = " << Remainder << endl;



    return 0;
}