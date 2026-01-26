#include<iostream>
using namespace std;
int main(){
    bool found=true; 
    int age = 20; 
    double hours = 45.30; 
    double overTime = 15.00; 
    int count=20; 
    char ch='B';
    cout<<"!found: "<<!found<<endl;
    cout<<"hours>40.00: "<<(hours >40.00)<<endl;
    cout<<"!age: "<<!age<<endl;
    cout<<"!found&&(hours>=0): "<<(!found&&(hours>=0))<<endl;
    cout<<"!(found&&hours>=0): "<<(!(found&&hours>=0))<<endl;
    cout<<"hours + overTime <=75.00: "<<(hours + overTime <=75.00)<<endl;
    cout<<"(count>=0)&&(count<=100): "<<((count>=0)&&(count<=100))<<endl;
    cout<<"('A'<=ch&&ch<='Z'): "<<('A'<=ch&&ch<='Z')<<endl;
    return 0;
}
