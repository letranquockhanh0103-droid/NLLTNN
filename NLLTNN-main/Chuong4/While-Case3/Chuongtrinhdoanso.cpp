#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    int somay;
    int sodoan;
    bool isGuessed;
    srand(time(0));
    somay=rand()%100;
    isGuessed=false;
    while(!isGuessed){
        cout<<"Xin moi nhap so ban du doan trong khoang tu 0 den 100: ";
        cin>>sodoan;
        cout<<endl;
        if(somay==sodoan)
        {
            cout<<"Chu mung ban da doan dung so!!!"<<endl;
            isGuessed=true;
        }
        else if(sodoan<somay)
        cout<<"Ban can doan so lon hon so ban dang doan.Doan lai nha"<<endl;
        else
        cout<<"Ban can doan so be hon so ban dang doan.Doan lai nha"<<endl;
    }
    return 0;
}