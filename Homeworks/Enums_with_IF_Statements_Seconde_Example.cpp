#include <iostream>
using namespace std;


enum enCountryChoice { Jordan=1, Tunisa=2, Algeria=3, Oman=4, Egypt=5, Iraq=6, Other=7 };


int main()
{
    cout << "****************************\n";
    cout << "Please Enter the number of your country?\n";
    cout << "(1) Jordan\n";
    cout << "(2) Tunisa\n";
    cout << "(3) Algeria\n";
    cout << "(4) Oman\n";
    cout << "(5) Egypt\n";
    cout << "(6) Iraq\n";
    cout << "(7) Other\n";
    cout << "****************************\n\n";
    cout << "Your Choice? ";
    
    int c;
    enCountryChoice Coutnry;


    cin >> c;
    Coutnry = (enCountryChoice) c;


    if (Coutnry == enCountryChoice::Jordan)
    {
        cout << "Your country is Jordan\n";


    }
    else if (Coutnry == enCountryChoice::Tunisa)
    {
        cout << "Your country is Tunisa\n";
    }
    else if (Coutnry == enCountryChoice::Algeria)
    {
        cout << "Your country is Algeria\n";
    }
    else if (Coutnry == enCountryChoice::Oman)
    {
        cout << "Your country is Oman\n";
    }
    else if (Coutnry == enCountryChoice::Egypt)
    {
        cout << "Your country is Egypt\n";
    }
    else if (Coutnry == enCountryChoice::Iraq)
    {
        cout << "Your country is Iraq\n";
    }
    else
        
    {
    
        cout << "Your country is Other\n";
    };


    return 0;
}
