#include <iostream>
using namespace std;
bool greaternum(int num1,int num2)
{ 
  
  if(num1 > num2)
  {

    return true;
  }


  { 
    return false;
  }
}
int main()
{ 
  int num1, num2;
  cout << "Enter the first number";
  cin >> num1;
  cout << "Enter the second number";
  cin >> num2;
  cout << greaternum(num1,num2);
}