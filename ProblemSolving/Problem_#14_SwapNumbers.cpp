#include <iostream>
using namespace std;


void SwapNumbers() {

     int Number1,Number2,Swap;


    cout << "Please Enter The First Number" << endl;
    cin >> Number1;

    cout << "Please Enter The Second Number" << endl;
    cin >> Number2;

    cout << endl;

    cout << Number1 << endl;
    cout << Number2 << endl;

    Swap = Number1;
    Number1 = Number2;
    Number2 = Swap;

    cout << Number1 << endl;
    cout << Number2 << endl;

}

int main() {

    SwapNumbers();


    return 0;
}