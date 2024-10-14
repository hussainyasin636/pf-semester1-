#include<iostream>
using namespace std;
string decideactivity(string temperature,string humidity)
{  if((temperature=="warm")&&(humidity=="dry"))
  { string activity;
    return "play tennis";

  }

if((temperature=="warm")&&(humidity=="humid"))
{
    return "swim";
}
if((temperature=="cold")&&(humidity=="dry"))
{
    return "play basketball";
}
if((temperature=="cold")&&(humidity=="humid"))
{

    return "watch Tv";
}
else{
    return "do nothing";
}


}

int main(){
    string temperature;
    string humidity;
    
    cout<<"Enter the temperature";
    cin>>temperature;
    cout<<"Enter the humidity";
    cin>>humidity;
    cout<<"You can "<<" "<<decideactivity(temperature,humidity);

return 0;
}