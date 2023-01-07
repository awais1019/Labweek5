#include<iostream>
#include<cmath>
#include<windows.h>
using namespace std;
bool cond(int);
main()
{
 
 int num;
 bool result;
 cout<<"enter number:";
 cin>>num;
 result=cond(num);
 if (result==true)
 {
  cout<<"evenish";
 }
 if (result==false)
 {
  cout<<"oddish";
 }
  
 
  
}
   
  
bool cond(int num)
{
 int num1=num%10;
 int num2=num/10;
 int num3=num2%10;
 int num4=num2/10;
 int num5=num1+num3+num4;
  if(num5%2==0)
  {
   return true;
  }
  if(num5%2!=0)
    {
    return false;
    }
    return 0;
}
 





