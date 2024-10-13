#include<iostream>
using namespace std;
float lowestprice(int numberofkm,string periodofday)
{  float lowestprice;
{ if((periodofday=="Day")&&(numberofkm<25))
  {lowestprice=0.79*numberofkm;
  return lowestprice;}
  if((periodofday=="Day")&&(numberofkm<25))
  {lowestprice=0.90*numberofkm;
  return lowestprice;}

}
 if((numberofkm>=20)&&(numberofkm<=100))
{
    lowestprice=0.09*numberofkm;
    return lowestprice;
}
else if((numberofkm>=100)&&(numberofkm>=20))
{
    lowestprice=0.06*numberofkm;
    return lowestprice;
}



}
int main(){
    int numberofkm;
    cout<<"Enter The Number Of Km You Want to Travel";
    cin>>numberofkm;
    string periodofday;
    cout<<"Enter The Period Of Day You Want To Travel ";
    cin>>periodofday;
    cout<<"Lowest Price For "<<numberofkm<<"  Kilometers "<<"Is "<<" "<<lowestprice(numberofkm,periodofday)<<"EUR";

return 0;
}