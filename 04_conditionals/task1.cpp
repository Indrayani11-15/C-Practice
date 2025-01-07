#include<iostream>
#include<string>
using namespace std;
int main(){
    string teaOrder;
    cout<<"Enter your tea order"<<endl;
    getline(cin,teaOrder);

    if(teaOrder == "Green Tea"){
    cout<<"Order confirmed!"<<endl;

    }


    return 0;
}

//Write a program that check if the user wants to order Green Tea. If the user types "Green Tea", the program should confirm their order.