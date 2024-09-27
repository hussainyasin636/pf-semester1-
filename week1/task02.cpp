#include<iostream>
using namespace std;
int c = 89;
int main(){  int a,b,c;
cout<<"Enter the value of a:";
cin>>a;
cout<<"Enter the value of b:";
cin>>b;
c = a+b;
cout<<"The sum is:";
cout<<c;
cout<<"\nthe value of global c is:"<<::c;
// scope resolution operator

}