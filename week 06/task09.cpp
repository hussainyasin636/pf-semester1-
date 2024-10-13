#include <iostream>
using namespace std;
string title(int age, char gender)
{
    string title;
    if ((age >= 16) && (gender == 'm'))
    {
        title = "Mr.";
        return title;
    }
    if ((age < 16) && (gender == 'm'))
    {
        title = "Master";
        return title;
    }
    if ((age >= 16) && (gender == 'f'))
    {
        title = "Ms.";
        return title;
    }
    if ((age < 16) && (gender == 'f'))
    {
        title = "Miss";
        return title;
    }
}

int main()
{
    int age;
    char gender;
    cout << "Enter your age";
    cin >> age;
    cout << "Enter your gender (m/f)";
    cin >> gender;
    cout << "your personal title is" << " " << title(age, gender);
    return 0;
}