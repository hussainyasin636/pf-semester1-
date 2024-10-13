 #include<iostream>
using namespace std;
void sum(int num1, int num2);
void mult(int num1, int num2);
void divi(int num1, int num2);
void sub(int num1, int num2);
main()
{ 
int num1,num2;
char OP ;
cout<<"Enter the first number";
cin>>num1;
cout<<"Enter the second number";
cin>>num2;
cout<<"Enter OP";
cin>>OP;
if (OP == '+')
{
 sum(num1, num2);
}
if (OP == '*')
{
 mult(num1,num2);
}
if (OP=='/')
{
 divi(num1, num2);

}
if (OP=='-')
{
 sub(num1,num2);
}
}
void sum(int num1, int num2)
{
 cout<<"sum is"<<num1 + num2;
}
void mult(int num1, int num2)
{ cout<<"product is"<<num1*num2;
}
void divi(int num1, int num2)
{ cout<<"answer is"<<num1/num2;
}
void sub(int num1, int num2)
{
 cout<<"answer is"<<num1-num2;

}
