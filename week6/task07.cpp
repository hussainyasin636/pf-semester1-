#include <iostream>
using namespace std;
string checkStudentStatus1(int examHour, int examMinute, int studentHour, int studentMinute)
{
  int examtime = examHour * 60 + examMinute;
  int studenttime = 60 * studentHour + studentMinute;
  // int totaltime = examHour1 + studentHour1;
  if((studenttime!=examtime)&&(studenttime+30==examtime))
  {
   return "Too Early !";

  }
  if (examtime==studenttime)
  {
    return " You are on time !";
  }
  // if (examtime=studenttime+30)
  // {
  //   return "too Early!";
  // }
 
  if(examtime<studenttime)
  {
    return "You are Late !";
  }
}

int main()
{
  int examHour;
  int examMinute;
  int studentHour;
  int studentMinute;
  cout << "Enter the Exam Starting Time (hours) " << endl;
  cin >> examHour;
  cout << "Enter the Exam Starting Time (Minutes)" << endl;
  cin >> examMinute;
  cout << "Enter the Student Time  Of Arrival (Hours) " << endl;
  cin >> studentHour;
  cout << "Enter the Student Time  Of Arrival (Minutes)" << endl;
  cin >> studentMinute;

  cout << checkStudentStatus1(examHour, examMinute, studentHour, studentMinute);

  return 0;
}
