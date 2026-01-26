#include<iostream>
using namespace std;
int main(){
    char kytu;
    cout<<"Xin moi nhap mot ky tu 'A','B','C','D',hay'F': ";
    cin>>kytu;
    switch (kytu)
    {
    case 'A':
        cout<<"Diem so la 4.0";
        break;
    case 'B':
        cout<<"Diem so la 3.0";
        break;
    case 'C':
        cout<<"Diem so la 2.0";
        break;
    case 'D':
        cout<<"Diem so la 1.0";
        break;
    case 'F':
        cout<<"Diem so la 0.0";
        break;
    
    default:
        cout<<"Diem so khong co gia tri";
        break;
    }
    return 0;
}