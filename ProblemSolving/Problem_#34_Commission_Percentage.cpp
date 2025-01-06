#include <iostream>
using namespace std;







int main()
{

    int TotalSales;

    cout << "Please Enter Your TotalSales " << endl;
    cin >> TotalSales;

    if (TotalSales >= 1000000)
    {
        float Commission = TotalSales * (1.0 / 100);
        cout << Commission << endl;
    }
    else if (TotalSales >= 500000 )
    {
        float Commission = TotalSales * (2.0 / 100);
        cout << Commission << endl; 
    }
    else if (TotalSales >= 100000)
    {
        float Commission = TotalSales * (3.0 / 100);
        cout << Commission << endl;
    }
    else if (TotalSales >= 50000)
    {
        float Commission = TotalSales * (5.0 / 100);
        cout << Commission << endl;
    }
    else
    {   
        cout << TotalSales << endl;
        cout << "you dont have a commission";
    }
    

    return 0;
}