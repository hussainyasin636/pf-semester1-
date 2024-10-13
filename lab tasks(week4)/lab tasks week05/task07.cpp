#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int b;
  cout << "enter the horizontal distance (in feet)";
  cin >> b;
  int angle;
  cout << "Enter the angle of elevation";
  cin >> angle;
  int height;
  height = b * angle / 57.3;
  cout << "the height is" << height << endl;
}
