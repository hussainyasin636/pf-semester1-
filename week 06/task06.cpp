#include <iostream>
using namespace std;
float payable(string day, string month, float total_amount)
{
    float discount;
    float pable;
    if ((day == "sunday") && (month == "october"))
    {

        discount = total_amount * 0.1;
        pable = total_amount - discount;
        return pable;
    }
     else if ((day == "sunday")&&(month!="october"))
    {
        discount = 0.05*total_amount ;
        pable = total_amount - discount;
        return pable;
    }
    else
    {

        return total_amount;
    }
}
int main()
{
    string day;
    string month;
    float total_amount;
    cout << "Enter the  Purchase Day";
    cin >> day;
    cout << "Enter The Purchase Month";
    cin >> month;
    cout << "Enter The price of the dress ";
    cin >> total_amount;
    cout << "Payable amount after discount is " << " " << payable(day, month, total_amount);

    return 0;
}