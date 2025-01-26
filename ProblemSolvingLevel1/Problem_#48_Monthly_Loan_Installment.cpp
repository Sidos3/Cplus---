#include <iostream>
using namespace std;





int main(){


    float LoanAmount,Month,MonthlyLoanInstallment;

    cout << "Please Enter The LoanAmount" << endl;
    cin >> LoanAmount ;

    cout << "Howe Many Month You Need ?" << endl;
    cin >> Month;

    MonthlyLoanInstallment = LoanAmount / Month;

    cout << endl;

    cout << MonthlyLoanInstallment  << endl;


    return 0;


   }
