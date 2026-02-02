#include <iostream>
#include <iomanip>
using namespace std;
const int N=5;
int main()
{
    int counter;
    int number;
    int zeros=0;
    int odds=0;
    int evens=0;
    cout<<"Vui long nhap so "<<N<<" so am, so duong hay so 0 "<<endl;
    cout<<"So ban nhap: ";
    for(counter=1;counter<=N;counter++)
    {
        cin>>number;
        cout<<number<<" ";
        switch(number%2)
        {
            case 0:
                evens++;
                if(number==0)
                    zeros++;
                break;
            case 1:
            case -1:
                odds++;
        }
    }
    cout<<endl;
    cout<<"Co "<<evens<<" so chan, "<<"trong do co "<<zeros<<" la so 0."<<endl;
    cout<<"Tong so le la: "<<odds<<endl;
    return 0;
}