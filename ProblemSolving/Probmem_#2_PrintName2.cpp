#include <iostream>
#include <string>
using namespace std;


string PrintName() {

    string name;

    cout << "Please Enter his/her name" << endl;
    cin >> name;

    return name;
}

int main() {

    PrintName();

    return 0;
}