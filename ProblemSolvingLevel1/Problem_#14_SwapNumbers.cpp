#include <iostream>
using namespace std;

void ReadNumbers(int& A,int& B)
{

    cout << "Please Enter The First A" << endl;
    cin >> A;

    cout << "Please Enter The Second B" << endl;
    cin >> B;

}
void SwapNumbers(int &A , int &B) {

    int Swap = A;
    A = B;
    B = Swap;

    cout << "Inside function " << "A= " << A  << " " << "B= " << B << endl;
    

}

int main() {

    int A,B;
    ReadNumbers(A,B);
    cout << "Before Swap " << "A= " << A << " " << "B= " << B << endl;
    
    SwapNumbers(A,B);

    cout << "After Swap " << "A= " << A << " " << "B= " << B << endl;
    
    return 0;
}