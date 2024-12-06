#include <iostream>
using namespace std;





int main(){


    float LoanAmount,MonthlyPayment,LoanInstalmentMonths;

    cout << "Please Enter The LoanAmount" << endl;
    cin >> LoanAmount ;

    cout << "Please Enter The MonthlyPayment" << endl;
    cin >> MonthlyPayment;



    LoanInstalmentMonths = LoanAmount / MonthlyPayment;

    cout << endl;

    cout << LoanInstalmentMonths << " Months" << endl;


    
    return 0;
}