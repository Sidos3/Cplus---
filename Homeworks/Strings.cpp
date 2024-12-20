#include <iostream>
#include <string>
using namespace std;




int main() {

    string Str1, Str2, Str3, Str4;

    cout << "Please Enter your Fullname ?" << endl;
    getline(cin, Str1);

    cout << Str1 << endl;

    cout << "Please Enter String two ?" << endl;
    cin >> Str2;

    cout << Str2 << endl;

    cout << "Please Enter String three ?" << endl;
    cin >> Str3;

    cout << Str3 << endl;
    
    cout << "***************************" << endl;

    cout << "the lenth of full name is " << Str1.length() << endl;

    cout << "Caracter at  0,2,4,7 are " << Str1[0] << " " << Str1[2] << " " << Str1[4] << " " << Str1[7] << endl;

    Str4 = Str2 + Str3;

    cout << Str4 << endl;

    int Result = stoi(Str2) * stoi(Str3);

    cout << Str2 << " * " << Str3 << " = " << Result << endl;

    return 0;
}