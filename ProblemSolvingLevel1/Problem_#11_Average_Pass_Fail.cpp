#include <iostream> 
using namespace std;

enum enPassFail {Pass = 1, Fail = 2};

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

enPassFail CheckAverage(float Average)
{
    if (Average >= 50)
        return enPassFail::Pass;
    else 
        return enPassFail::Fail;
}

void PrintResults(float Average)
{
    cout << "The Average Of Entered Marks = " << Average << endl;
    if (CheckAverage(Average) == enPassFail::Pass)
        cout << "You Passed" << endl;
    else
        cout << "You Faild" << endl;
}




int main(){

    int Mark1,Mark2,Mark3;
    ReadMarks(Mark1,Mark2,Mark3);
    PrintResults(CalculateAverage(Mark1,Mark2,Mark3));




    return 0;
}