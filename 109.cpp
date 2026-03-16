#include <iostream>
using namespace std;
int main()
{
    int *numAddr;
    int miles;
    int dist;
    dist=158;
    miles=22;
    numAddr=&miles;
    cout<<"Địa chỉ chứa numAddr: "<<numAddr<<endl;
    cout<<"Giá trị của pointer trỏ bởi numAddr: "<<*numAddr<<endl;
    numAddr=&dist;
    cout<<"Địa chỉ chứa numAddr: "<<numAddr<<endl;
    cout<<"Giá trị của pointer trỏ bởi numAddr: "<<*numAddr<<endl;
    return 0;
}