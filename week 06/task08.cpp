#include <iostream>
using namespace std;
float priceafterdiscount(string day, string month, float total_amount)
{
    float discount;
    float payable;
    if ((day == "sunday") || (month == "october") || (month == "march") || (month == "august"))
    {
        discount = 0.1* total_amount;
        payable = total_amount - discount;
        return payable;
    }
    else{
        payable = total_amount;
        return payable;

    }
}

int main()
{
    string day;
    string month;
    float total_amount;
    cout << "Enter the purchase day";
    cin >> day;
    cout << "Ehter the purchase month";
    cin >> month;
    cout << "Enter the price of the dress";
    cin >> total_amount;
    cout << "price after discount is" << " " << priceafterdiscount(day, month, total_amount);
    return 0;
}