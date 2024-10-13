#include<iostream>
using namespace std;
string decide(int cost,string brand)
{ if((cost>=1500)&&(brand=="MTJ"))
{
 return "Congratulations! You can buy the dress";


}
else{
    return "sorry to say it doesnt matches your criteria";
}
  

}
int main()
{ int cost;
string brand;
cout<<"Enter the price of the dress";
cin>>cost;
cout<<"Enter the brand of the dress";
cin>>brand;
cout<<decide(cost,brand);

}