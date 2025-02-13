#include <iostream>
using namespace std;


struct StInfo
{
    int Age;
    bool HasDriverLicence;
    bool HasRecommendation;
};


StInfo ReadInfo()
{
    StInfo Info;


    cout << "Please Enter Your Age " << endl;
    cin >> Info.Age;

    cout << "Do You have A Drive Licence ?" << endl;
    cin >> Info.HasDriverLicence;

    cout << "Do you Have a Recomendation ?" << endl;
    cin >> Info.HasRecommendation;

    return Info;
}

bool IsAccepted(StInfo Info)
{
    if (Info.HasRecommendation )
    {
        return true;
    }
    else
    {
        return (Info.Age > 21 && Info.HasDriverLicence );
    }
    
}

void PrintResult(StInfo Info)
{
    if(IsAccepted(Info))
        cout <<"\nHired" << endl;
    else
        cout <<"\nRejected" << endl;
}


int main(){

    PrintResult(ReadInfo());
    
    return 0;
}