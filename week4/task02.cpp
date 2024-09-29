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
{ gotoxy(64,10);
cout<<"H";
}
void U(){ gotoxy(66,10);
 cout<<"U";}
void S(){ gotoxy(68,10);
          
     cout<<"S";
     gotoxy(70,10);
cout<<"S";}

void A(){  gotoxy(72,10);
           cout<<"A";
}
void I(){  gotoxy(74,10);
cout<<"I";
}
void N(){  gotoxy(76,10);
           cout<<"N";
}
void gotoxy(int x,int y)
{ COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

