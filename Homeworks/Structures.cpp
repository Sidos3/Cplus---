#include <iostream>
using namespace std;


struct MyInfo
{
    string Phone;
    string Email;
};

struct MyAdress
{
    string Kartye;
};

struct MyData
{
    string Name;
    string City;
    string Country;
    short int Age;
    float Monthly_Salary;
    float Yearly_Salary = Monthly_Salary * 12;
    char Gender;
    bool Married ;
    MyAdress Adress;
    MyInfo Info;
};


int main()
{
    MyData MyData1;


    cout << "Please Enter your name " << endl;
    cin >> MyData1.Name;

    cout << "Please Enter your age " << endl;
    cin >> MyData1.Age;

    cout << "Please Enter your city" << endl;
    cin >> MyData1.City;

    cout << "Please enter your Contry" << endl;
    cin >> MyData1.Country;

    cout << "Please enter your Monthly salary" << endl;
    cin >> MyData1.Monthly_Salary;

    cout << "Please enter your Gender " << endl;
    cin >> MyData1.Gender;

    cout << "Are you Married ?" << endl;
    cin >> MyData1.Married;

    cout << "Please enter your Adress (Kartiye)" << endl;
    cin >> MyData1.Adress.Kartye;

    cout << "Please enter your phone number" << endl;
    cin >> MyData1.Info.Phone;

    cout << "Please enter your email" << endl;
    cin >> MyData1.Info.Email;

    cout << endl;

    cout << "**********************************" << endl;
    cout << "Name = " << MyData1.Name << endl;
    cout << "Age = " << MyData1.Age  << endl;
    cout << "Country = " << MyData1.Country << endl;
    cout << "Monthly Salary = " << MyData1.Monthly_Salary << endl;
    cout << "Yearly Salary = " << MyData1.Yearly_Salary << endl;
    cout << "Gender = " << MyData1.Gender << endl;
    cout << "Married = " << MyData1.Married << endl;
    cout << "Lkartiye = " << MyData1.Adress.Kartye << endl;
    cout << "Phone Number = " << MyData1.Info.Phone << endl;
    cout << "Email = " << MyData1.Info.Email << endl;
    cout << "**********************************" << endl << endl;



    return 0;
}


