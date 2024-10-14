#include<iostream>
using namespace std;
float priceforapartment(string month,int numberofstays)
{
float discount;
float price;
float finalprice;
if((month=="May")||(month=="October"))
{ if(numberofstays>14)
{
    price=65*numberofstays;
    discount=price*0.1;
    finalprice=price-discount;
    return finalprice;
}
else{
    price=65*numberofstays;
    return price;
}
 
}
 if((month=="June")||(month=="September"))
{
    if(numberofstays>14)
{
    price=68.70*numberofstays;
    discount=price*0.1;
    finalprice=price-discount;
    return finalprice;
}
else{
    price=68.70*numberofstays;
    return price;
}
}
 if((month=="July")||(month=="August"))
{
    if(numberofstays>14)
{
    price=77*numberofstays;
    discount=price*0.1;
    finalprice=price-discount;
    return finalprice;
}
else{
    price=77*numberofstays;
    return price;
}
}


}
float priceforstudio(string month,int numberofstays)
{ 
float discount;
float price ;
float finalprice;

if((month=="May")||(month=="October"))
{ if((numberofstays>7)&&(numberofstays<14))
 {
    
    price=50*numberofstays;
    discount=price*0.05;
    finalprice=price-discount;
    return finalprice;
 }
 else if (numberofstays>14)
 {
    
    price=50*numberofstays;
    discount=price*0.3;
    finalprice=price-discount;
    return finalprice;
 }
 else{
    price=50*numberofstays;
    return price;
 }

}
 if ((month=="June")||(month=="September"))
{
    if(numberofstays>14)
    {
        
        price=75.20*numberofstays;
        discount=price*0.2;
        finalprice=price-discount;
        return finalprice;
    }
    else{
             price=75.02*numberofstays;
             return price;

    }
    

}
if((month=="July")||(month=="August"))
    {
        price=76*numberofstays;
        return price;
    }


}
int main(){
    string month;
    cout<<"Enter the month of stay (e.g May,June,July).... ";
    cin>>month;
    int numberofstays;
    cout<<"Enter the total number of stays ";
    cin>>numberofstays;
    cout<<"Studio"<<" "<<priceforstudio(month,numberofstays)<<"$"<<endl;
    cout<<"Apartment"<<" "<<priceforapartment(month,numberofstays)<<"$"<<endl;

return 0;
}