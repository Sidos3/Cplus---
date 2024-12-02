#include <iostream>
using namespace std;


int main(){
    
    ///Ex1///

    string Name;
    string City ; 
    string Country ;
    int Age ;
    float Monthly_Salary ;
    float Yearly_Salary = Monthly_Salary * 12;
    char Gender ;
    bool Married = true ;

    cout << "Please Enter your name "<< endl;
    cin >> Name;

    cout << "Please Enter your age "<< endl;
    cin >> Age;

    cout << "Please Enter your city" << endl;
    cin >> City;

    cout << "Please enter your Contry"<< endl;
    cin >> Country;

    cout << "Please enter your Monthly salary"<< endl;
    cin >> Monthly_Salary;

    cout << "Please enter your Gender "<< endl;
    cin >> Gender;

    cout << "Are you Married ?"<< endl;
    cin >> Married;

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

    int Number;
    int Number_1 ; 
    int Number_2 ; 
    
    cout << "Enter the first number"<< endl;
    cin >> Number;

    cout << "Enter the second number "<< endl;
    cin >> Number_1;

    cout << "Enter the third number"<< endl;
    cin >> Number_2;

    cout << Number << " + " << endl;
    cout << Number_1 << " + " << endl;
    cout << Number_2  << endl;
    cout << "_________________________" << endl;
    cout << "Total = " << Number + Number_1 + Number_2 << endl << endl ;


    /// Ex3 ///

    int age ;
    cout << "Enter your age" << endl;
    cin >> age ;

    cout << "After 5 Years you will be "<< age + 5 << " years old.\n\n";

    return 0;



}