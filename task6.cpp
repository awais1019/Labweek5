#include <iostream>
using namespace std;

main(){
int number;
cout <<"Enter number: ";
cin >> number;
if(number==1){
    cout <<"One";
}
if(number==2){
    cout <<"Two";
}
if(number==3){
    cout <<"Three";
}
if(number==4){
    cout <<"Four";
}
if(number==5){
    cout <<"Five";
}
if(number==6){
    cout <<"Six";
}
if(number==7){
    cout <<"Seven";
}
if(number==8){
    cout <<"Eight";
}
if(number==9){
    cout <<"Nine";
}
if(number==10){
    cout <<"Ten";
}
int mNumber = number%10;
int dNumber = number/10;
if(dNumber==2){
    cout <<"Twenty";
}
if(dNumber==3){
    cout <<"Thirty";
}
if(dNumber==4){
    cout <<"Forty";
}
if(dNumber==5){
    cout <<"Fifty";
}
if(dNumber==6){
    cout <<"Sixty";
}
if(dNumber==7){
    cout <<"Seventy";
}
if(dNumber==8){
    cout <<"Eighty";
}
if(dNumber==9){
    cout <<"Ninety";
}
if(mNumber==1){
    cout <<"One";
}
if(mNumber==2){
    cout <<"Two";
}
if(mNumber==3){
    cout <<"Three";
}
if(mNumber==4){
    cout <<"Four";
}
if(mNumber==5){
    cout <<"Five";
}
if(mNumber==6){
    cout <<"Six";
}
if(mNumber==7){
    cout <<"Seven";
}
if(mNumber==8){
    cout <<"Eight";
}
if(mNumber==9){
    cout <<"Nine";
}

}