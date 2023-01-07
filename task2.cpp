#include<iostream>
#include<cmath>
using namespace std;
float pquad(float a,float b,float c);
float nquad(float a,float b,float c);
main()
{
 float a,b,c,x1,x2;
 cout<<"enter the value of a:";
 cin>>a;
 cout<<"enter value of b:";
 cin>>b;
 cout<<"enter value of c:";
 cin>>c;
 x1=pquad(a,b,c);
 cout<<"positive value of x is:"<<x1<<endl;
 x2=nquad(a,b,c);
 cout<<"negative value of x is:"<<x2;
}













float pquad(float a,float b,float c)
{
 float powb=pow(b,2);
 float product=4*a*c;
 float ans=sqrt(powb-product);
 float pro2=2*a;
 float result=(-b+ans)/pro2;
 return result;
}
float nquad(float a,float b,float c)
{
 float powb=pow(b,2);
 float product=4*a*c;
 float ans=sqrt(powb-product);
 float pro2=2*a;
 float result=(-b-ans)/pro2;
 return result;
}