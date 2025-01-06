#include<iostream>
using namespace std;
int main(){
   int teaCups;
   cout<<"Enter the number of cups of tea you have: "<<endl; 
   cin>>teaCups;
   if(teaCups>20){
    cout<<"You will get Gold Badge"<<endl;
   }else if(teaCups>=10 && teaCups <=20){
    cout<<"You will get Silver Badge"<<endl;
   }else{
    cout<<"No badge for you :("<<endl;
    
   }


    return 0;
}