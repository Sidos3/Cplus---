#include <iostream>
#include <string>
using namespace std;




int main(){


    string Str1 = "43.22";
    int N1 = 20;
    double N2 = 33.5;
    float N3 = 55.23;


    double to_double = stod(Str1);

    float to_float = stof(Str1);

    int to_int = stoi(Str1);

    string Str2 = to_string(N1);

    string Str3 = to_string(N2);

    string Str4 = to_string(N3);



    //int N4 = N3;     // premiere methode

   int N4 = int(N3);    // dexieme methode
   
   //int N4 = (int)N3;   // troisieme methode


    cout << to_double << endl;
    cout << to_float << endl;
    cout << to_int << endl;
    cout << Str2 << endl;
    cout << Str3 << endl;
    cout << Str4 << endl;
    cout << N4 << endl;






    return 0;
}