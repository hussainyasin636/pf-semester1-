#include<iostream>
using namespace std;
void vote();
int main()
{ 
vote();

}
void vote()

{ int age;
 cout<<"enter your age";
cin>>age;
if(age >= 18)
{ cout<<"you are eligible to vote"<<endl;
}
else if(age<18)
{cout<<"you cannot vote"<<endl;
}


}