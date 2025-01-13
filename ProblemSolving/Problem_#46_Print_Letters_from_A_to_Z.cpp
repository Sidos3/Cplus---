#include <iostream>
using namespace std;





void PrintUpperCaseLetters(){

    for (int i = 65; i <= 90 ; i++)
    {
        cout << char(i) << endl;
    }
    
}
void PrintLowerCaseLatters()
{
    for (int i = 97; i <= 122 ; i++)
    {
        cout << char(i) << endl;
    }
    
}
int main()
{
    
    cout << "******************" << endl;
    PrintUpperCaseLetters();
    cout << "******************" << endl;
    PrintLowerCaseLatters();

    return 0;
}