#include <iostream>
using namespace std;
float calculateperimeter(char shap,float value)
{ 
    
    if (shap == 's')
    {
        float perimeter;
        perimeter = 4 * value;
        return perimeter;
    }
    else if (shap == 'c')
    {
        float perimeter;
        perimeter = 6.28 * value;
        return perimeter;
    }

    else if (shap == 't')
    {
        float perimeter;
        perimeter = 3 * value;
        return perimeter;
    }
    else if (shap == 'h')
    {
        float perimeter;
        perimeter = 6 * value;
        return perimeter;
    }
   
}

int main()
{ 
    char shap;
    cout << "Enter the shape(s for square,t for triangle,c for circle,h for hexagon)";
    cin >> shap;
    float value;
    cout << "Enter the value";
    cin >> value;
    cout << "the perimeter is" << calculateperimeter(shap,value);
}
