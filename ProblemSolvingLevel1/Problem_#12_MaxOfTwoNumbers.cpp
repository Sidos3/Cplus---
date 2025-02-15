#include <iostream>
using namespace std;



void Readnumbers(int& Num1, int& Num2)
{
    cout << "Please Enter Number 1 ? \n";
    cin >> Num1;

    cout << "Please Enter Number 2 ? \n";
    cin >> Num2;

}

int MaxOf2numbers(int Num1, int Num2)
{
    if (Num1 > Num2)
        return Num1;
    else 
        return Num2;
}
void PrintResult(int Max)
{
    cout << "The Max Of Two Numbers is : " << Max << endl;
}

int main()
{

    int Num1,Num2;
    Readnumbers(Num1,Num2);
    PrintResult(MaxOf2numbers(Num1,Num2));



    return 0;
}