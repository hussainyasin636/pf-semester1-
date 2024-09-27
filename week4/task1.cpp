#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void printmaze();
void moveplayer(int x,int y);
int main()

{ 
    int x=4,y =4;

    system("cls");
printmaze();
while (true)
{
moveplayer(2,3);
x= x+2;
if(x== 14){ x=2;

}
}
// 
}
void moveplayer(int x, int y)
{
    gotoxy(x,y);
    cout<<"p";
    Sleep(100);
    gotoxy(x,y);
    cout<<" ";  
    gotoxy(x,y);
    cout<<"p";
}
void printmaze()

{  cout<<"#################################\n";
cout<<"   #                               #\n";
cout<<"   #                               #\n";
cout<<"   #                               #\n";
cout<<"   #                               #\n";
cout<<"   #                               #\n";
cout<<"   #                               #\n";
cout<<"   #                               #\n";
cout<<"   #                               #\n";
cout<<"   #                               #\n";
cout<<"   #                               #\n";
cout<<"   #                               #\n";
   cout<<"#################################\n";
}
void gotoxy(int x,int y)
{  COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);}