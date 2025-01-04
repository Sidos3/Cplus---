#include <iostream>
#include <string>
using namespace std;


struct StrInfo
{
    string FirstName;
    string LastName;
    int Age;
    string PhoneNumber;
};

void ReadInfo(StrInfo &Info)
{
    cout << "Please Enter Your Firstname" << endl;
    cin >> Info.FirstName;

    cout << "Please Enter Your lastname" << endl;
    cin >> Info.LastName;

    cout << "Please Ente your Age" << endl;
    cin >> Info.Age;

    cout << "Please enter your phonenumber" << endl;
    cin >> Info.PhoneNumber;
}

void Printinfo(StrInfo Info)
{
    cout << "****************************************" << endl;
    cout << "First Name : " << Info.FirstName << endl; 
    cout << "last name : " << Info.LastName << endl;
    cout << "Age : " << Info.Age << endl;
    cout << "Phone Number : " << Info.PhoneNumber << endl;
    cout << "****************************************" << endl;
}

void ReadPersonsInfo(StrInfo persone[2])
{
    ReadInfo(persone[0]);
    ReadInfo(persone[1]);
}

void PrintPersonesInfo(StrInfo persone[2])
{
    Printinfo(persone[0]);
    Printinfo(persone[1]);
}


int main()
{

    StrInfo persone[2];

    ReadPersonsInfo(persone);
    PrintPersonesInfo(persone);




    return 0;
}
