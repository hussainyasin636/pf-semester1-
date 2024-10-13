#include<iostream>
using namespace std;
float totalincome(int rows,int columns,string type)
{  float income;
    if(type=="Premiere")
    {
        income=rows*columns*12;
        return income;
    }
    else if(type=="Normal")
    {
        income=rows*columns*7.50;
        return income;
    }
    else if(type=="Discount")
    {
        income=rows*columns*5;
        return income;
    }

}
int main(){
    string type;
    cout<<"Enter the screening Type (Premiere/Normal/Discount) ";
    cin>>type;
    int rows;
    cout<<"Enter the number of rows ";
    cin>>rows;
    int columns;
    cout<<"Enter the number of columns :";
    cin>>columns;
    cout<<totalincome(rows,columns,type);




return 0;}
