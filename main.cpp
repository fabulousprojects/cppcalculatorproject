#include <iostream>
#include <string>
using namespace std;

int main() {
    string calcoperator;
    int num1, num2;
    cout<<"What operation would you like to do(+, -, *, /)           ";
    cin >>calcoperator;
    cout <<"Enter your 2 numbers       ";
    cin>>num1>>num2;
    if(calcoperator == "+"){
        cout<<num1+num2<<"\n";
        main();
    }
    else if(calcoperator == "-"){
        cout<<num1-num2<<"\n";
        main();
    }
    else if(calcoperator == "*"){
        cout<<num1*num2<<"\n";
        main();
    }
    else if(calcoperator == "/"){
        if(num2 == 0){
            cout<<"Sorry, we cant divide by 0\n";
            main();
        }
        else{
            cout<<num1/num2<<"\n";
            main();
        }
    }
    else{
        cout<<"Please input an valid sign (+,-, *, /)";
    }
}