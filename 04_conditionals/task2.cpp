//Write a program that checks if a tea shop is open. If the current hour (input by user) is between 8AM and 6PM, the shop is open; otherwise, it's closed.

#include<iostream>
#include<string>
using namespace std;
int main(){
    int teaHour;
    cout<<"Enter the time(0-23): "<<endl;
    cin>>teaHour;
    if(teaHour>=8 && teaHour<18){
        cout<<"tEASHOP IS OPEN"<<endl;
    }else{
        cout<<"Teashop is closed!"<<endl;
    }


    return 0;
}
