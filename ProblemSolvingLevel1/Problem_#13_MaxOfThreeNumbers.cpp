#include <iostream>
using namespace std;



void Readnumbers(int& Num1, int& Num2, int& Num3)
{
    cout << "Please Enter Number 1 ? \n";
    cin >> Num1;

    cout << "Please Enter Number 2 ? \n";
    cin >> Num2;

    cout << "Please Enter Number 3 ? \n";
    cin >> Num3;

}

int MaxOf3numbers(int Num1, int Num2, int Num3)
{
    if (Num1 > Num2)
        if (Num1 > Num3)
            return Num1;
        else
            return Num3;
    else
        if(Num2 > Num3)
            return Num2;  
        else
            return Num3;
}

void PrintResults(int Max)
{
    cout << "The Max Of Two Numbers is : " << Max << endl;
}

int main()
{

    int Num1,Num2,Num3;
    Readnumbers(Num1,Num2,Num3);
    PrintResults(MaxOf3numbers(Num1,Num2,Num3));



    return 0;
}