#include <iostream>
using namespace std;

void ReadArrayData(int Arr1[100], int& Length)
{

    cout << "Howe many Number do you want to enter ? 1 to 100 " << endl;
    cin >> Length;


    for (int i = 0; i <= Length - 1; i++)
    {

        cout << "Please Enter Number " << i+1 << endl;
        cin >> Arr1[i];

    }

}
void PrintArrayData(int Arr1[100], int Length)
{
    for (int i = 0; i <= Length -1; i++)
    {
        cout << "Number [" << i + 1 << "] : " << Arr1[i] << endl;
    }
    
}
int CalculeArraySum(int Arr1[100], int& Length)
{
    int Sum = 0;

    for (int i = 0; i <= Length-1; i++)
    {
        Sum +=Arr1[i];
    }

    return Sum;
}

float CalculeArrayAverage(int Arr1[100], int& Length)
{
    return (float) CalculeArraySum(Arr1,Length) / Length;
}


int main()
{

    int Arr1[100], Length = 0;

    ReadArrayData(Arr1,Length);
    PrintArrayData(Arr1,Length);

    cout << "*********************" << endl;

    cout << "Sum = " << CalculeArraySum(Arr1,Length) << endl;
    cout << "Average = " << CalculeArrayAverage(Arr1,Length);


    return 0;
}