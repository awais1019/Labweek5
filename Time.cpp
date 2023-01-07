#include<iostream>
#include<cmath>
using namespace std;
main()
{
 int hour,minutes,min;
 cout<<"Enter hours:(from 0  to 23) ";
 cin>>hour;
 cout<<"Enter minutes:(from 0  to 59) ";
 cin>>minutes;
  if(hour<=23)
 {
 if(minutes<45)
  {
  min=minutes+15;
  cout<<hour<<":"<<min<<endl;
  }
 }
 if(hour<23)
 {
 if(minutes>45)
 
 {
 hour=hour+1;
 min=minutes+15;
 min=min-60;
 cout<<hour <<":"<<min<<endl;
 }
 }

 
 if(hour==23)
 {
 if(minutes>=45)
 {
 hour=hour+1;
 hour=hour-24;
 min=minutes+15;
 min=min-60;
 cout<<hour <<":"<<min<<endl;

 }
 }
 
 
 
















}
