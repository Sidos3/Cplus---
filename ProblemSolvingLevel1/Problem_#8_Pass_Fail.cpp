#include <iostream>
using namespace std;

enum enPassFail { Pass = 1, Fail = 0};

int ReadMark()
{
    int Mark;

    cout << "Please Enter a Mark " << endl;
    cin >> Mark;

    return Mark;
}

enPassFail CheckMark(int Mark)
{
    if(Mark >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

void PrintResult(int Mark)
{
    if(CheckMark(Mark) == enPassFail::Pass)
        cout << "Great You Pass" << endl;
    else
        cout << "Sorry You Faild" << endl;
}


int main()
{

    PrintResult(ReadMark());

    return 0;
}