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

void ReadPersonsInfo(StrInfo persone[100],int& NumberOfpersone)
{
    cout << "Please Enter your number of personne you want bettwen ? 1 and 100" << endl;
    cin >> NumberOfpersone;

    for (int i = 0; i <= NumberOfpersone - 1; i++)
    {
        cout << "Please person's info " << i+1 << endl;
        ReadInfo(persone[i]);
    }
    
}

void PrintPersonesInfo(StrInfo persone[100],int NumberOfpersone)
{
    for (int i = 0; i <= NumberOfpersone - 1; i++)
    {
        cout << "person's " << i+1 << " info : " << endl;
        Printinfo(persone[i]);
    }
    
}


int main()
{

    StrInfo persone[100] ;
    int NumberOfpersone = 0;


    ReadPersonsInfo(persone,NumberOfpersone);
    PrintPersonesInfo(persone,NumberOfpersone);




    return 0;
}
