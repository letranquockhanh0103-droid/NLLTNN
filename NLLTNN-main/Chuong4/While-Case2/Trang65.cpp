#include<iostream>
using namespace std;
const int linhcanh = -999;
int main()
{
    int number;
    int sum=0;
    int count=0;
    cout<<"Xin moi nhap day so ket thuc bang "<<linhcanh<<endl;
    cin>>number;
    while (number!=linhcanh)
    {
        sum+=number;
        count++;
        cin>>number;
    }
    cout<<"So phan tu nhap la "<<count<<" co trong la "<<sum<<endl;
    if(count!=0)
        cout<<"Gia tri trung binh la "<<sum/count<<endl;
    else
        cout<<"Khong co du lieu"<<endl;
    return 0;
}