#include <iostream>
using namespace std;








int main()
{

    int Num1,Num2;
    char Operation;


    cout << "Please Enter Number 1" << endl;
    cin >> Num1;

    cout << "Please Enter Number 2" << endl;
    cin >> Num2;

    cout << "Please Enter The Operation" << endl;
    cin >> Operation;


    // if (Operation == "+")
    // {
    //     cout << Num1 + Num2 ;
    // }
    // else if (Operation == "-")
    // {
    //     cout << Num1 - Num2 ;
    // }
    // else if (Operation == "*")
    // {
    //     cout << Num1 * Num2;
    // }
    // else if (Operation == "/")
    // {
    //     cout << Num1 / Num2 ;
    // }
    // else
    // {
    //     cout << "Try A Nother Way :)";
    // }
    
    switch (Operation)
    {
        
    case '+':
        cout << Num1 + Num2 ;
        break;

    case '-':
        cout << Num1 - Num2 ;
        break;

    case '*':
        cout << Num1 * Num2 ;
        break;

    case '/':

        if(Num2 !=0){

            cout << Num1 / Num2 ;

        }

        else{

            cout << "Divesed by zero not mash";

        }


        break;

    default:
        cout << "Try A Nother Way :-)";
        break;

    }



    return 0;
}