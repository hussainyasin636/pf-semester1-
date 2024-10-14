#include <iostream>
using namespace std;
string error()
{
    return "error";
}
float calculatefruitprice(string fruit, string dayofweek, int quantity)

{
    float price;
    if ((fruit == "banana") && (dayofweek == "Monday") || (dayofweek == "Tuesday") || (dayofweek == "Wednesday") || (dayofweek == "Thursday") || (dayofweek == "Friday"))
    {
        price = 2.50 * quantity;
        return price;
    }
    else if ((fruit == "apple") && (dayofweek == "Monday") || (dayofweek == "Tuesday") || (dayofweek == "Wednesday") || (dayofweek == "Thursday") || (dayofweek == "Friday"))
    {
        price = 1.20 * quantity;
        return price;
    }
    else if ((fruit == "orange") && (dayofweek == "Monday") || (dayofweek == "Tuesday") || (dayofweek == "Wednesday") || (dayofweek == "Thursday") || (dayofweek == "Friday"))
    {
        price = 0.85 * quantity;
        return price;
    }
    else if ((fruit == "grapefruit") && (dayofweek == "Monday") || (dayofweek == "Tuesday") || (dayofweek == "Wednesday") || (dayofweek == "Thursday") || (dayofweek == "Friday"))
    {
        price = 1.45 * quantity;
        return price;
    }
    else if ((fruit == "kiwi") && (dayofweek == "Monday") || (dayofweek == "Tuesday") || (dayofweek == "Wednesday") || (dayofweek == "Thursday") || (dayofweek == "Friday"))
    {
        price = 2.70 * quantity;
        return price;
    }
    else if ((fruit == "pineapple") && (dayofweek == "Monday") || (dayofweek == "Tuesday") || (dayofweek == "Wednesday") || (dayofweek == "Thursday") || (dayofweek == "Friday"))
    {
        price = 5.50 * quantity;
        return price;
    }
    else if ((fruit == "grapes") && (dayofweek == "Monday") || (dayofweek == "Tuesday") || (dayofweek == "Wednesday") || (dayofweek == "Thursday") || (dayofweek == "Friday"))
    {
        price = 3.85 * quantity;
        return price;
    }
    else if ((fruit == "banana") && (dayofweek == "Saturday") || (dayofweek == "Sunday"))
    {
        price = 2.70 * quantity;
        return price;
    }
    else if ((fruit == "apple") && (dayofweek == "Saturday") || (dayofweek == "Sunday"))
    {
        price = 1.25 * quantity;
        return price;
    }
    else if ((fruit == "orange") && (dayofweek == "Saturday") || (dayofweek == "Sunday"))
    {
        price = 0.90 * quantity;
        return price;
    }
    else if ((fruit == "grapefruit") && (dayofweek == "Saturday") || (dayofweek == "Sunday"))
    {
        price = 1.60 * quantity;
        return price;
    }
    else if ((fruit == "kiwi") && (dayofweek == "Saturday") || (dayofweek == "Sunday"))
    {
        price = 3.00 * quantity;
        return price;
    }
    else if ((fruit == "pineapple") && (dayofweek == "Saturday") || (dayofweek == "Sunday"))
    {
        price = 5.60 * quantity;
        return price;
    }
    else if ((fruit == "grapes") && (dayofweek == "Saturday") || (dayofweek == "Sunday"))
    {
        price = 4.20 * quantity;
        return price;
    }
    

}

int main()
{
    string fruit;
    cout << "Enter the fruit name :" << " ";
    cin >> fruit;
    string dayofweek;
    cout << "Enter the day of week ( e.g Monday,tuesday ...) :" << " ";
    cin >> dayofweek;
    int quantity;
    cout << "Enter the quantity of the fruit :" << " ";
    cin >> quantity;
    cout << "The total price of " << " " << fruit << " is " << calculatefruitprice(fruit, dayofweek, quantity);
    

    return 0;
}