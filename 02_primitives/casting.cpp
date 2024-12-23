#include<iostream>
using namespace std;
int main(){

    float teaPrice = 49.99;
    int roundedTeaPrice = (int) teaPrice;

    int teaQuality = 2;
    double totalPrice = teaPrice * teaQuality;

    cout<<totalPrice<<endl;
    return 0;
}