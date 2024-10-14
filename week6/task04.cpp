#include <iostream>
using namespace std;
string error()
{
    return "error";
}
string servicetype(char servicecode)
{
    string servicetype;
    if ((servicecode == 'r') || (servicecode == 'R'))
    {
        servicetype = "regular";
        return servicetype;
    }
    if ((servicecode == 'P') || (servicecode == 'p'))
    {
        servicetype = "premium";
        return servicetype;
    }
}
float billcalculatorforregular(char timeofcall, float numberofminutes)
{
    float regularamount = 10;
    float amountdue;
    if (numberofminutes > 50)
    {
        amountdue = 0.20 * numberofminutes;
        return amountdue;
    }
    else
    {
        return regularamount;
    }
}
float billcalculatorforpremium(char timeofcall, float numberofminutes)
{
    float premiumamount = 25;
    float amountdue;
    if ((timeofcall == 'n') || (timeofcall == 'N'))
    {
        if (numberofminutes > 100)
        {
            amountdue = 0.05 * numberofminutes;
            return amountdue;
        }
        else
        {
            return premiumamount;
        }
    }

    else if ((timeofcall == 'd') || (timeofcall == 'D') && (numberofminutes > 75))
    {
        amountdue = 0.10 * numberofminutes;
        return amountdue;
    }
    else
    {
        return premiumamount;
    }
}
int main()
{
    char servicecode;
    char timeofcall;
    float numberofminutes;
    cout << "Enter the serivice code (R/r for regular,P/p for premium)";
    cin >> servicecode;
    if ((servicecode == 'P') || (servicecode == 'p'))
    {
        cout << "Enter the time of call (D/d for day,N/n for night)";
        cin >> timeofcall;
        cout << "Enter the number of minutes used";
        cin >> numberofminutes;
        cout << "Your service type" << " " << servicetype(servicecode) << endl;
        cout << "Total minutes used =" << " " << numberofminutes << " " << "minutes" << endl;
        cout << "Amount due = " << billcalculatorforpremium(timeofcall, numberofminutes) << "$";
    }
    else if ((servicecode == 'r') || (servicecode == 'R'))
    {
        cout << "Enter the number of minutes used";
        cin >> numberofminutes;
        cout << "Your service type" << " " << servicetype(servicecode) << endl;
        cout << "Total minutes used =" << " " << numberofminutes << " " << "minutes" << endl;
        cout << "Amount due = " << billcalculatorforregular(timeofcall, numberofminutes) << "$";
    }
    else
    {
        cout << error();
    }
}
