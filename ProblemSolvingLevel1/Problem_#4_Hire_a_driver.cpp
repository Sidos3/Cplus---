#include <iostream>
using namespace std;





int main(){

    int Age;
    bool DriverLicence;



    cout << "Please Enter Your Age " << endl;
    cin >> Age;

    cout << "Do You have A Drive Licence True / False" << endl;
    cin >> DriverLicence;
    
    if (Age >= 21 && DriverLicence == true)
    {
        cout << "Hired" ;
    }
    else
    {
        cout << "Rejected" ;
    }
    
    return 0;
}