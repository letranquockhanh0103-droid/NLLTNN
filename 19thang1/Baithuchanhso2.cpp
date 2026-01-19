#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    cout<<setiosflags(ios::fixed)
        <<setiosflags(ios::showpoint)
        <<setprecision(2);
    float temp;
    char chargetemp;
    cout<<" Xin vui long nhap so: ";
    cin>>temp;
    cout<<" Bam 'f' neu so nhap la do F hay bam 'c' neu so nhap la do C: ";
    cin>>chargetemp;
    switch (chargetemp)
    {

        case 'f':
            cout<<"Gia tri nhiet do C la: "<<(5.0/9.0)*(temp-32.0);
        break;
        case 'c':
            cout<<"Gia tri nhiet do F la "<<(9.0/5.0)*(temp+32.0);
        break;
        default:
            cout<<"Khong dung du lieu"<<endl;
    }
    return 0;
}