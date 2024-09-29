#include<iostream>
#include<windows.h>
using namespace std;
void H();
void U();
void S();
void A();
void I();
void N();
void gotoxy(int x, int y);
int main(){ 
 H();
 U();
 S();
 S();
 A();
 I();
 N();}
void H()
{ gotoxy(10,10);
cout<<"H";
}
void U(){ gotoxy(10,12);
 cout<<"U";}
void S(){ gotoxy(10,14);
          
     cout<<"S";
  gotoxy(10,16);
cout<<"S";     }

void A(){  gotoxy(10,18);
           cout<<"A";
}
void I(){  gotoxy(10,20);
cout<<"I";
}
void N(){  gotoxy(10,22);
           cout<<"N";
}
void gotoxy(int x,int y)
{ COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

