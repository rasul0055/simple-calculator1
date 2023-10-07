#include<iostream>
#include<cmath>

using namespace std;

int main(){
    // define variables
    string operations;
    double number1, number2;

    // get user input
    cout<<"Enter First Number: ";
    cin>>number1;

    cout<<"Enter Operation(+, -, *, /): ";
    cin>>operations;

    cout<<"Enter Second Number: ";
    cin>>number2;

    //if else statement checking enetred operations

    if(operations == "+"){
        cout<<"result: "<< number1 + number2<<endl;
    }
    else if(operations == "-"){
        cout<<"result: "<< number1 - number2<<endl;
    }
    else if(operations == "*"){
        cout<<"result: "<< number1 * number2<<endl;
    }
    else if (operations == "/"){
        cout<<"result: "<< number1 / number2<<endl;
    }
    else{
        cout<<"Not a recognize operator!"<<endl;
    }
    return 0;

}