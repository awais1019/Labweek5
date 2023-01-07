#include <iostream>
#include <cmath>
using namespace std;

main(){
int number;
cout <<"Enter three digit number: ";
cin >> number;
int a = number%10;
int b = number/100;
if(a == b){
  cout <<"Number is symmetrical";
}
if(a != b){
  cout <<"Number is not symmetrical";
}



}