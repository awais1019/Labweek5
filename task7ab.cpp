#include<iostream>
#include<cmath>
#include<windows.h>
using namespace std;
float volume(float,float,float,float);
float contribution_of_p1,contribution_of_p2;
main()
{

 float range,flow_rate_of_p1,flow_rate_of_p2;
 float result;
 float hour;
 cout<<"enter range of pool:";
 cin>>range;
 cout<<"enter flow of rate of p1:";
 cin>>flow_rate_of_p1;
 cout<<"enter flow of rate of p2:";
 cin>>flow_rate_of_p2;
 cout<<"enter hour:";
 cin>>hour;

 
 result=volume(range,flow_rate_of_p1,flow_rate_of_p2,hour);
 if(result<range)
 {
 cout<<"pool is"<<result<<" % full"<<"  pipe1:"<<contribution_of_p1<<"%"<<"  pipe2:"<<contribution_of_p2<<"%";
 }
 if(result>range)
 {
  cout<<hour<<" hours pool is overflown with "<<result<<" leters:";
 }

}
 float volume(float range,float p1,float p2,float hour)
 {
   
   float full,percentage;
   float p3=p1*hour;
   float p4=p2*hour;
   full=p3+p4;
   percentage=full/range*100;
   contribution_of_p1=p3/full*100;
   contribution_of_p2=p4/full*100;
   if(percentage<range)
    {
      return percentage;
    }
   if(percentage>range)
    {
      percentage=full/range*100;
       percentage=percentage-range;
       return percentage;
    }
       return 0;


 }











 