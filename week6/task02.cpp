#include<iostream>
using namespace std;
string calculateactivity(float marks1,float marks2,float marks3,float marks4,float marks5)
{ float percentage;
    float obtainedmarks = (marks1 + marks2+marks3+marks4+marks5);
     percentage = (obtainedmarks/500)*100 ;
 string grade;
 if((percentage>=90)&&(percentage<=100))
 {  grade = "A+";
    return  grade;
 }
 else if((percentage>=80)&&(percentage<=90))
 {  grade= "A";
    return grade;
 }
 else if((percentage>=70)&&(percentage<=80))
 {  grade = "B+";
    return grade;

 }
 else if((percentage>=60)&&(percentage<=70))
 {  grade ="B";

    return grade;
 }
else if((percentage>=50)&&(percentage<=60))
{   grade = "C";
     return grade;
}
else if((percentage>=40)&&(percentage<=50))
{     grade = "D";
    return grade;

}

}

int main(){ 
    float marks1,marks2,marks3,marks4,marks5;
    string name;
    float percentage;
    
    string grade;
    
    cout<<"Enter the name of the student";
    cin>>name;
    cout<<"Enter the marks for english ";
    cin>>marks1;
    cout<<"Enter the marks for  maths";
    cin>>marks2;
    cout<<"enter the marks for chemistry ";
    cin>>marks3;
    cout<<"Enter the marks for social science";
    cin>>marks4;
    cout<<"Enter the marks for biology";
    cin>>marks5;

    cout<<"Your percentage = "<<" "<<percentage<<"%"<<endl;
    cout<<"your grade ="<<" "<<calculateactivity( marks1, marks2, marks3, marks4, marks5);
 

 




return 0;
}