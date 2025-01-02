#include<iostream>
#include<string>
using namespace std;
int main(){
    int cups;
    double pricePerCup, totalPrice, discountedPrice;

    cout<<"Enter the number of the cups: "<<endl;
    cin>>cups;
    cout<<"Enter the price per cups: "<<endl;
    cin>>pricePerCup;
    totalPrice = cups * pricePerCup;

    //apply 5% discount if total price is above 100

    if(totalPrice>100){
        discountedPrice = totalPrice - (totalPrice - 0.05);
        cout<<"Discounted price is: "<<discountedPrice<<endl;
    }else{
        cout<<"Total price is: "<<totalPrice<<endl;
    }
    



    return 0;
}