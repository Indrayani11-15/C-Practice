//returntype functionName (parameters){
    //function body
//}

#include<iostream>
using namespace std;

//declaration of funtion
void serveChai(int cups);
void makeChai(){
    cout<<"boiling water, adding tea leaves, straining..."<<endl;
}

void serveChai(string teaType = "Masala Tea"){
    cout<<"Serving "<< teaType <<endl;
}

int checkTemperature(int temperature){
   return temperature;
}

int main(){
   int temp =  checkTemperature(24);
   //cout<<temp<<endl;

//    serveChai(3);
//    makeChai();
    serveChai();
    return 0;

}
//defination of fucntion
void serveChai(int cups){
    cout<<"Serving "<<cups<<" Of chai"<<endl;
}