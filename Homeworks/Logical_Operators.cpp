#include <iostream>
using namespace std;





int main(){





    cout << (12 >= 12)  << "\t" << ! (12 >= 12) << "\t" << (1 && 1)<< "\t" << ((7 == 7) && (7 > 5)) << endl ;
    cout << (12 > 7) << "\t" << ! (12 > 7)<< "\t" << (1 && 0)<< "\t" << ((7 == 7) && (7 < 5)) << endl ;
    cout << (8 < 6) << "\t" << ! (8 < 6)<< "\t" << (0 || 1)<< "\t" << ((7 == 7) || (7 > 5)) << endl ;
    cout << (8 == 8) << "\t" << !  (8 == 8)<< "\t" << (0 || 0)<< "\t" << ((7 < 7) || (7 > 5)) << endl ;
    cout << (12 <= 12) << "\t" << ! (12 <= 12)<< "\t" << (!0)<< "\t" << ! ((7 == 7) && (7 > 5)) << endl ;
    cout << (7 == 5 )<< "\t" << ! (7 == 5 )<< "\t" << !(1 || 0)<< "\t" << ((7 == 7) && !(7 < 5)) << endl ;

    //Ex2


    cout << ((5 > 6 && 7 == 7) || (1 || 0)) << endl; // 1
    cout << (!(5 > 6 && 7 == 7) || (1 || 0)) << endl;  // 1
    cout << (!(5 > 6 && 7 == 7) || !(1 || 0)) << endl; // 1
    cout << (!(5 > 6 || 7 == 7) && !(1 || 0)) << endl; // 0
    cout << (((5 > 6 && 7 <= 8) || (8 > 1 && 4 <= 3)) && 1) << endl; //0
    cout << (((5 > 6 && !(7 <= 8)) && (8 > 1 || 4 <= 3)) || 1) << endl; // 1

    // Ex3 


    




    return 0;
}