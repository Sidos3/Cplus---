#include <iostream> 
using namespace std;



int main(){

    float Mark1,Mark2,Mark3;
    float Sum;
    float Avg;




    cout << "Please Enter The First Mark" << endl;
    cin >> Mark1;

    cout << "Please Enter The Second Mark" << endl;
    cin >> Mark2;

    cout << "Please Enter The Third Mark" << endl;
    cin >> Mark3;

    cout << endl;

    Sum = Mark1 + Mark2 + Mark3;

    Avg = Sum / 3 ;

    cout << "The Average Of Entered Marks = " << Avg << endl;



    return 0;
}