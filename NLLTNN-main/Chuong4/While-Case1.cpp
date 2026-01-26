#include<iostream>
using namespace std;
int main(){
    int gioihan;
    int tong;
    int sonhap;
    int sodem;
    cout<<"Xin moi nhap gioi han so luong nhap: ";
    cin>>gioihan;
    cout<<endl;
    tong=0;
    sodem=0;
    cout<<"Xin moi nhap "<<gioihan<<" so"<<endl;
    while (sodem<gioihan)
    {
        cin>>sonhap;
        tong+=sonhap;
        sodem++;
    }
    cout<<"Tong cua "<<gioihan<<" la = "<<tong<<endl;
    if(sodem!=0)
        cout<<"Gia tri trung binh = "<<tong/sodem<<endl;
    else   
        cout<<"Khong du du lieu"<<endl;
    return 0;
}