#include<iostream>
using namespace std;
bool parityanalysis(int num,int sum)
{  sum = num%10+(num/10)%10+num/100;
if((sum%2==0) && (num%2==0))
{ 
  return true;

}
else if((sum%2==0)&&(num%2!=0))
{

  return false;
}
 

}
int main()
{

int num,sum;
cout<<"Enter  the number";
cin>>num;
cout<<parityanalysis(num,sum);

}
// {  int num;
//   int sum = num%10 + (num/10)%10 + num/100;
//   sum = sum%2;
//   num = num%2;
//   if((sum==num)) 
//   {
//     return true;
//   } 
  
//    else{
//     return 0;
//    }

// }

// int main()
// { int number;
// cout<<"enter the number (three digit only)";
// cin>>number;
// cout<<parityanalysis;
// }