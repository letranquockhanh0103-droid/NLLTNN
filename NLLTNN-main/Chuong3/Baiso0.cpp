#include<iostream>
using namespace std;
int main(){
    char grade;
    cout<<"Nhap chu: ";
    cin >> grade;
    switch (grade)
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

