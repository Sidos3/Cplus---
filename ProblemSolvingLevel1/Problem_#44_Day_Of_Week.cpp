#include <iostream>
using namespace std;

enum enWeekday {Sun=1,Mon=2,Tue=3,Wed=4,Thu=5,Fri=6,Sat=7};

void ShowWeekDayMenu()
{
    cout << "*********************" << endl;
    cout << "       Week Days     " << endl;
    cout << "*********************" << endl;
    cout << "1: Sunday " << endl;
    cout << "2: Monday " << endl;
    cout << "3: Thuesday " << endl;
    cout << "4: Wednesday " << endl;
    cout << "5: Thursday " << endl;
    cout << "6: Friday " << endl;
    cout << "7: Saterday " << endl;
    cout << "*********************" << endl;
    cout << "Please Enter the number of the day." << endl;
}
enWeekday ReadWeekDay()
{
    enWeekday weekday;
    int wd;
    cin >> wd;
    return (enWeekday)wd;

}
string GetWeekDayName(enWeekday weekday)
{
    switch (weekday)
    {

    case enWeekday::Sun:
        cout << "Sunday";
        break;

    case enWeekday::Mon:
        cout << "Monday";
        break;

    case enWeekday::Tue:
        cout << "Thuesday";
        break;

    case enWeekday::Wed:
        cout << "Wednesday";
        break;

    case enWeekday::Thu:
        cout << "Thurdsay";
        break;

    case enWeekday::Fri:
        cout << "Friday";
        break;

    case enWeekday::Sat:
        cout << "Saterday";
        break;

    default:
        cout << "Wrong Day Please Enter a day again :-)";
        break;

    }
}


int main()
{

    ShowWeekDayMenu();

    cout << GetWeekDayName(ReadWeekDay())  << endl;

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
    
    // switch (Day)
    // {

    // case 1:
    //     cout << "it's Sunday";
    //     break;

    // case 2:
    //     cout << "it's Monday";
    //     break;

    // case 3:
    //     cout << "it's Thuesday";
    //     break;

    // case 4:
    //     cout << "it's Wednesday";
    //     break;

    // case 5:
    //     cout << "it's Thursday";
    //     break;

    // case 6:
    //     cout << "it's Friday";
    //     break;

    // case 7:
    //     cout << "it's Saterday";
    //     break;
        
    // default:
    //     cout << "Wrong Day Please Enter a day again :-)";
    //     break;

    // }


    return 0;
}