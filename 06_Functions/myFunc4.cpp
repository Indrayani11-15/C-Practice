//Lambda functions
#include<iostream>
using namespace std;

int helloChai(){

}


int main(){

    //lambda
    auto preparedChai = [](int cups){
        cout<<"preparing "<<cups<<" cups of tea"<<endl;
    };

    preparedChai(4);

    return 0;
}


