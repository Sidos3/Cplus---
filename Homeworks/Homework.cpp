#include <iostream>
using namespace std;


int main(){
    
    ///Ex1///

    string Name = "Sidahmed Mohamed", City = "NKTT", Country = "Mauritanie";
    int Age = 23;
    float Monthly_Salary = 5000;
    float Yearly_Salary = Monthly_Salary * 12;
    char Gender = 'M';
    bool Married = true ;

    cout << "**********************************" << endl;
    cout <<"Name = "<< Name << endl;
    cout <<"Age = " << Age << " Years" << endl;
    cout <<"Country = "<< Country << endl;
    cout <<"Monthly Salary = "<< Monthly_Salary << endl;
    cout <<"Yearly Salary = "<< Yearly_Salary << endl;
    cout <<"Gender = "<< Gender << endl;
    cout <<"Married = "<< Married << endl;
    cout << "**********************************" << endl << endl;


    ///Ex2///

    int Number = 20;
    int Number_1 = 30; 
    int Number_2 = 10; 
    int Summe = Number + Number_1 + Number_2;

    cout << Number << " + " << endl;
    cout << Number_1 << " + " << endl;
    cout << Number_2  << endl;
    cout << "_________________________" << endl;
    cout << "Total = " << Summe << endl << endl ;


    /// Ex3 ///

    int age = 25;

    cout << "After 5 Years you will be "<< age + 5 << " years old.\n\n";

    return 0;



}