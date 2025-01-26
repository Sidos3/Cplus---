#include <iostream>
using namespace std;





void PrintUpperCaseLetters(){

    // for (int i = 65; i <= 90 ; i++)
    // {
    //     cout << char(i) << endl;
    // }
    int i = 65;
    while (i <= 90)
    {
        cout << char(i) << endl;
        i++;
    }
    
}
void PrintLowerCaseLatters()
{
    // for (int i = 97; i <= 122 ; i++)
    // {
    //     cout << char(i) << endl;
    // }
    int i = 97;
    while (i <= 122)
    {
        cout << char(i) << endl;
        i++;
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