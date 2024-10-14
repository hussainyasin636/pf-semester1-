#include <iostream>
using namespace std;
int calculateVolleyballGames(string yeartype, int holidays, int hometownvisit)
{
    
    
    int hometownweeknds = (48 - hometownvisit) * 3 / 4;

    if (yeartype == "normal")
    {
        int totalplay = hometownweeknds + holidays*2/3 + hometownvisit;
        return totalplay;
    }
    else if (yeartype == "leap")
    {

        int totalplay = hometownweeknds + holidays*2/3 + hometownvisit;
        totalplay = totalplay * 1.15;
        return totalplay;
    }
}
int main()
{
    string yeartype;
    cout << "Enter the type of the year ";
    cin >> yeartype;
    int holidays;
    int hometownvisit;
    cout << "Enter the number of weeknds (h) ";
    cin >> hometownvisit;
    cout << "Enter the  total number of holidays in a year ";
    cin >> holidays;
    cout << calculateVolleyballGames(yeartype, holidays, hometownvisit);
    return 0;
}