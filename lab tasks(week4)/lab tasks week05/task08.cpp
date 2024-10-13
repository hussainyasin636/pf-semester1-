#include<iostream>
#include<cmath>
using namespace std;
void one_real_root(float,float);
void two_real_root(float,float,float,float);
void two_complex_roots(float,float,float,float);


int main()
{ float a,b,c,disc;
  cout<<"Enter the value of A :";
  cin>>a;
  cout<<"Enter the value of B :";
  cin>>b;
  cout<<"Enter the value of c:";
  cin>>c;
  disc = pow(b,2)-(4*a*c);
  if(disc==0)
  {

    one_real_root(a,b);
  }
  if(disc>0)
  {

    two_real_root(a,b,c,disc);
  }
  if(disc<0)
  {
    two_complex_roots(a,b,c,disc);
  }
void one_real_root(float a,float b)
{  float root;
  root = -b/(2*a);
  cout<<"solution x is :"<<root<<endl;


}
void two_real_root(float a,float b,float c,float disc)
{
    float  root1,root2;
    root1 = (-b + sqrt(disc))/(2*a);
     root2 = (-b - sqrt(disc))/(2*a);
     cout<<"solution x is"<<root1<<"and x ="<<root2<<endl;


}
void two_complex_roots(float a, float b,float c,float disc)
{
    float imaginary,real;
    imaginary = sqrt(-disc)/(2*a);
    real = -b/(2*a);
    cout<<"complex solution is "<<real<<"+"<<imaginary<<"i";
    cout<<"and x is"<<real<<"-"<<imaginary<<"i";
}


}