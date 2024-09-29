#include<iostream>
#include<windows.h>
using namespace std;
void maze();
void gotoxy(int x, int y);
void moveplayer(int x, int y);

int main()
{ int x= 5;
int y = 7;
system("cls");
   maze();
while(true)
{moveplayer(x,y);
x = x+1;
if(x==21){x=4;}
while(true)
{moveplayer(x,y);
 x= x-1;}

}}
  
  
void moveplayer(int x, int y)
{ gotoxy(x,y);
 cout<<"p";
Sleep(100);
gotoxy(x,y);
cout<<" ";}
void maze()
{ cout<<" ##################################################\n";
 cout<<"  #                                                #\n";
 cout<<"  #                                                #\n";
 cout<<"  #                                                #\n";
 cout<<"  #                                                #\n";
 cout<<"  #                                                #\n";
 cout<<"  #                                                #\n";
 cout<<"  #                                                #\n";
 cout<<"  #                                                #\n";
 cout<<"  #                                                #\n";
 cout<<"  #                                                #\n";
 cout<<"  #                                                #\n";
 cout<<"  #                                                #\n";
 cout<<"  #                                                #\n";
 cout<<"  #                                                #\n";
 cout<<"  #                                                #\n";
 cout<<"  #                                                #\n";
 cout<<"  ##################################################\n";}
void gotoxy(int x,int y)
{COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);}
