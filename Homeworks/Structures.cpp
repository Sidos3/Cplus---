#include <iostream>
#include <string>
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

void ReadData(MyData &Data)
{
    cout << "Please Enter your name " << endl;
    cin >> Data.Name;

    cout << "Please Enter your age " << endl;
    cin >> Data.Age;

    cout << "Please Enter your city" << endl;
    cin >> Data.City;

    cout << "Please enter your Contry" << endl;
    cin >> Data.Country;

    cout << "Please enter your Monthly salary" << endl;
    cin >> Data.Monthly_Salary;

    cout << "Please enter your Gender " << endl;
    cin >> Data.Gender;

    cout << "Are you Married ?" << endl;
    cin >> Data.Married;

    cout << "Please enter your Adress (Kartiye)" << endl;
    cin >> Data.Adress.Kartye;

    cout << "Please enter your phone number" << endl;
    cin >> Data.Info.Phone;

    cout << "Please enter your email" << endl;
    cin >> Data.Info.Email;
}

void PrintData(MyData Data)
{
    cout << "**********************************" << endl;
    cout << "Name = " << Data.Name << endl;
    cout << "Age = " << Data.Age  << endl;
    cout << "Country = " << Data.Country << endl;
    cout << "Monthly Salary = " << Data.Monthly_Salary << endl;
    cout << "Yearly Salary = " << Data.Yearly_Salary << endl;
    cout << "Gender = " << Data.Gender << endl;
    cout << "Married = " << Data.Married << endl;
    cout << "Lkartiye = " << Data.Adress.Kartye << endl;
    cout << "Phone Number = " << Data.Info.Phone << endl;
    cout << "Email = " << Data.Info.Email << endl;
    cout << "**********************************" << endl << endl;
}


int main()
{

    MyData MyData1;
    ReadData(MyData1);
    PrintData(MyData1);



    return 0;
}


