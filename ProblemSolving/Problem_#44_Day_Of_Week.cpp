#include <iostream>
using namespace std;








int main()
{

    int Day;

    cout << "Please Enter a Number Bettwen 1 and 7" << endl ;
    cin >> Day;


    // if (Day == 1)
    // {
    //     cout << "it's Sunday";
    // }
    // else if (Day == 2)
    // {
    //     cout << "it's Monday";
    // }
    // else if (Day == 3)
    // {
    //     cout << "it's Thuesday";
    // }
    // else if (Day == 4)
    // {
    //     cout << "it's Wednesday";
    // }
    // else if (Day == 5)
    // {
    //     cout << "it's Thursday";
    // }
    // else if (Day == 6)
    // {
    //     cout << "it's Friday";
    // }
    // else if (Day == 7)
    // {
    //     cout << "it's Saterday";
    // }
    // else
    // {
    //     cout << "Wrong Day Please Enter a day again :)";
    // }
    
    switch (Day)
    {

    case 1:
        cout << "it's Sunday";
        break;

    case 2:
        cout << "it's Monday";
        break;

    case 3:
        cout << "it's Thuesday";
        break;

    case 4:
        cout << "it's Wednesday";
        break;

    case 5:
        cout << "it's Thursday";
        break;

    case 6:
        cout << "it's Friday";
        break;

    case 7:
        cout << "it's Saterday";
        break;
        
    default:
        cout << "Wrong Day Please Enter a day again :-)";
        break;

    }


    return 0;
}