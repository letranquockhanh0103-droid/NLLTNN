#include <iostream>
using namespace std;
int main()
{
    double total=20.5;
    double& sum=total;
    cout<<"Sum = "<<sum<<endl;
    sum=18.6;
    cout<<"total = "<<total<<endl;
    return 0;
}