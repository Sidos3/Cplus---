#include <iostream>
using namespace std;

enum MyFevoriteColor
{
    black,white,green
};
enum Gender
{
    Male,Female
};
enum Status
{
    Single,Married
};

int main()
{
    Gender MyGender;
    Status MyStatus;
    MyFevoriteColor MyColor;
    MyGender = Gender::Male;
    MyStatus = Status::Single;
    MyColor = MyFevoriteColor::black;


    string Name;
    string City;
    string Country;
    unsigned short int Age;
    float Monthly_Salary;
    float Yearly_Salary ;
    

    cout << "Please Enter your name " << endl;
    cin >> Name;

    cout << "Please Enter your age " << endl;
    cin >> Age;

    cout << "Please Enter your city" << endl;
    cin >> City;

    cout << "Please enter your Contry" << endl;
    cin >> Country;

    cout << "Please enter your Monthly salary" << endl;
    cin >> Monthly_Salary;

   

    cout << "**********************************" << endl;
    cout << "Name = " << Name << endl;
    cout << "Age = " << Age << " Years" << endl;
    cout << "Country = " << Country << endl;
    cout << "Monthly Salary = " << Monthly_Salary << endl;
    cout << "Yearly Salary = " << Monthly_Salary * 12 << endl;
    cout << "Gender = " << MyGender << endl;
    cout << "Married = " << MyStatus << endl;
    cout << "My Fevorite Color = " << MyColor << endl;
    cout << "**********************************" << endl << endl;



    return 0;
}


