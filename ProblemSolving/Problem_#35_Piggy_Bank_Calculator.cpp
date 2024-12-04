#include <iostream>
using namespace std;





int main(){

    float Pennies,Nickets,Dimes,Quarters,Dollar;
    float Total,Dollars;
    

    cout << "Please Enter Pennies " << endl;
    cin >> Pennies;

    cout << "Please Enter Nickets " << endl;
    cin >> Nickets;

    cout << "Please Enter Dimes " << endl;
    cin >> Dimes;

    cout << "Please Enter Quarters " << endl;
    cin >> Quarters;

    cout << "Please Enter Dollars " << endl;
    cin >> Dollar;

    Nickets = Pennies * 5;
    Dimes = Pennies * 10;
    Quarters = Pennies * 25;
    Dollar = Pennies * 100;

    Total = Pennies + Nickets + Dimes + Quarters + Dollar ;
    Dollars = Total / 100;

    cout << endl;

    cout << Total << " Pennies" << endl;
    cout << Dollars << " Dollars" << endl;





    return 0;
}