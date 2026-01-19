#include<iostream>
using namespace std;
int main(){
    int pheptoan;
    double  so1,so2;
    cout<<"Vui long nhap 2 so: ";
    cin>>so1>>so2;
    cout<<"Vui long chon phep toan ";
    cout<<"\n1  phep cong";
    cout<<"\n2  phep nhan";
    cout<<"\n3  phep chia";
    cin>>pheptoan;
    switch (pheptoan)
    {
    case 1:
        cout <<"Tong 2 so la: "<<so1+so2<<endl;
        break;
    case 2:
        cout <<"Tich 2 so la: "<<so1*so2<<endl;
        break;
    case 3:
        cout <<"Thuong 2 so la: "<<so1/so2<<endl;
        break;
    }
    return 0;
}

