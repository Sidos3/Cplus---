#include <iostream>
using namespace std;






void Alphabetnestedforloop()
{
    for (int  i = 65; i <= 90; i++)
    {

        for (int j = 65; j <= 90; j++)
        {
            cout << char(i) << char(j) << endl;
        }


        cout << "__________________" << endl;
    }
    
}

void Starsfromtentoone()
{
    for (int  i = 10; i >= 1 ; i--)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << "*" ;
        }
        cout <<  endl;

    }
    
}

void Numberlikestarsfromtentoone()
{
    for (int  i = 10; i >= 1 ; i--)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout <<  endl;

    }
    
}

void Numberlikestarsfromonetoten()
{
    for (int  i = 1; i <= 10 ; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout <<  endl;

    }
}

void Alphabetlikestars()
{
    for (int i = 65; i <= 70; i++)
    {
        for (int j = 65; j <= i ; j++)
        {
            cout << char(j) << " ";
        }
        
        cout << endl;
    }
    
}

void Tentoten()
{
    for (int  i = 1; i <= 10 ; i++)
    {

        for (int j = i; j <= 10; j++)
        {
            cout << j  << " ";
        }

        cout <<  endl;

    }
}

int main()
{


    Alphabetnestedforloop();
    Starsfromtentoone();
    Numberlikestarsfromtentoone();
    Numberlikestarsfromonetoten();
    Alphabetlikestars();
    Tentoten();


    
    return 0;
}