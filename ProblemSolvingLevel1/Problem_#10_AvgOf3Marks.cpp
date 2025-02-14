#include <iostream> 
using namespace std;

void ReadMarks(int& Mark1, int& Mark2, int& Mark3)
{
    cout << "Please Enter The First Mark" << endl;
    cin >> Mark1;

    cout << "Please Enter The Second Mark" << endl;
    cin >> Mark2;

    cout << "Please Enter The Third Mark" << endl;
    cin >> Mark3;

}

int SumOf3Marks(int Mark1, int Mark2, int Mark3)
{
    return Mark1 + Mark2 + Mark3;
}

float CalculateAverage(int Mark1, int Mark2, int Mark3)
{
    return (float) SumOf3Marks( Mark1,Mark2,Mark3) / 3;
}

void PrintResults(float Average)
{
    cout << "The Average Of Entered Marks = " << Average << endl;
}




int main(){

    int Mark1,Mark2,Mark3;
    ReadMarks(Mark1,Mark2,Mark3);
    PrintResults(SumOf3Marks(Mark1,Mark2,Mark3));




    return 0;
}