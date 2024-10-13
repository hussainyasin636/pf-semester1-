#include <iostream>
using namespace std;
bool aresame(int num1,int  num2,int num3)
{ bool aresame;
    if (((num1 = num2) &&( num3))&&(num1==num3))
    {  aresame=true;
        return aresame;
    }
    else
        {  aresame = false;
            return aresame;
        }
}
int main()
{
    int num1, num2, num3;
    cout << "Enter the first number";
    cin >> num1;
    cout << "Enter the second number";
    cin >> num2;
    cout << "Enter the third number";
    cin >> num3;
    cout<<aresame(num1,num2,num3);

    return 0;
}