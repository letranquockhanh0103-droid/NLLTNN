#include<iostream>
using namespace std;
int main(){
    float thunhap;
    float thue;
    cout<<"Dien thu nhap: ";
    cin >> thunhap;
    if(thunhap<=20000.0)
    {
        thue=0.2*thunhap;
    }
    else
    {
        thue=0.025*(thunhap-20000.0)+400.0;

    }
    cout<<"thue la: "<<thue<<endl;
    return 0;
}