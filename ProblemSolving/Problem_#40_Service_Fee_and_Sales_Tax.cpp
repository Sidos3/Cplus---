#include <iostream>
using namespace std;





int main(){


    float BillValue, ServiceFee, SalesTax, TotalBillValue;




    cout << "Please Enter BillValue" << endl;
    cin >> BillValue;

    ServiceFee = BillValue * 0.1; 

    TotalBillValue = BillValue + ServiceFee; 

    SalesTax = (TotalBillValue * 0.16) + BillValue + ServiceFee; 

    cout << endl;

    cout << SalesTax << endl;




    return 0;
}