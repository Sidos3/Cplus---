#include <iostream>
#include <string>
using namespace std;

struct Stinfo
{
    string FirstName;
    string LastName;
    int Age;
    string PhoneNumber;
};

void Readinfo (Stinfo &Info)
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

void Printinfo(Stinfo Info)
{
    cout << "****************************************" << endl;
    cout << "First Name : " << Info.FirstName << endl; 
    cout << "last name : " << Info.LastName << endl;
    cout << "Age : " << Info.Age << endl;
    cout << "Phone Number : " << Info.PhoneNumber << endl;
    cout << "****************************************" << endl;
}

int main(){

    Stinfo Personne1;
    Readinfo(Personne1);
    Printinfo(Personne1);

    Stinfo Personne2;
    Readinfo(Personne2);
    Printinfo(Personne2);

    return 0;
}