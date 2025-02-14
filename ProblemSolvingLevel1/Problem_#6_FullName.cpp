#include <iostream>
using namespace std;


struct StInfo
{
    string FirstName;
    string LastName;
};

StInfo ReadInfo()
{
    StInfo Info;


    cout << "Please Enter Your Firstname ?" << endl;
    // cin >> Info.FirstName;
    getline(cin,Info.FirstName);
    cout << "Please Enter Your LastName ?" << endl;
    // cin >> Info.LastName;
    getline(cin,Info.LastName);
    return Info;

}

string GetFullName (StInfo Info, bool Reverse)
{
    string FullName = "";

    if(Reverse)
        FullName = Info.LastName + " " + Info.FirstName;
    else
        FullName = Info.FirstName + " " + Info.LastName;
    
    return FullName;
}

void PrintFullName(string FullName)
{
    cout << "Your FullName is " << FullName << endl;
}

int main()
{
    PrintFullName(GetFullName(ReadInfo(),true));

    return 0;
}