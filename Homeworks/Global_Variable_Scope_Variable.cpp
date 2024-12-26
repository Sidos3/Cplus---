#include <iostream>
#include <string>
using namespace std;


int w = 100;

void GlobaVariable()
{
    int w = 200;
    ::w = 3;
    cout << "my variable w = " << w << endl;
}

int main()
{

    int w = 300;
    
    cout << "my main variable = " << w << endl;

    GlobaVariable();
    
    ::w =  980;
    cout << "my global variable = " << ::w << endl;



    return 0;
}