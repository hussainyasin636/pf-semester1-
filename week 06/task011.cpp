#include<iostream>
using namespace std;
string calculatespeed(string slow,string average,string fast,string ultrafast,string extremelyfast,float speed)
{  if(speed<=10) 
{
    return "slow";
}
if ((speed >10)&& (speed<=50))
{
    return "average";
}
if((speed >50)&&(speed<=150))
{
    return "fast";
}
 if((speed>50 )&&(speed<=1000))
 {
    return "very fast";
 }
 else { return "extremely fast";

 }
}


int main(){
    string slow;
    string average;
    string fast;
    string ultrafast;
    string extremelyfast;
    float speed;
    cout<<"Enter the speed";
    cin>>speed;
    cout<<calculatespeed( slow,average,fast, ultrafast,extremelyfast,speed);

return 0;
}
