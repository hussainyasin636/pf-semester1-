#include<iostream>
#include<windows.h>
using namespace std;
void printmaze();
void gotoxy(int,int);
void moveplayer(int,int);
int main()
{ int x = 5,y = 6;
  system("cls");
   printmaze();
   while(true)
             {  moveplayer(x,y);
                 x = x+1;
                 if(x==49)

{x=5;
}


                                    }
}
void moveplayer(int x,int y)
{
   gotoxy(x,y);
    cout<<"P";
    Sleep(106);
    gotoxy(x,y);
    cout<<"  ";}
void printmaze()
{      cout<<"###################################################\n";
       cout<<"#                                                 #\n";
       cout<<"#                                                 #\n"; 
       cout<<"#                                                 #\n"; 
       cout<<"#                                                 #\n"; 
       cout<<"#                                                 #\n"; 
       cout<<"#                                                 #\n"; 
       cout<<"#                                                 #\n";  
       cout<<"#                                                 #\n"; 
       cout<<"#                                                 #\n"; 
       cout<<"#                                                 #\n"; 
       cout<<"#                                                 #\n"; 
       cout<<"#                                                 #\n"; 
       cout<<"#                                                 #\n"; 
       cout<<"#                                                 #\n"; 
       cout<<"#                                                 #\n"; 
       cout<<"#                                                 #\n";  
       cout<<"###################################################\n";}
void gotoxy(int x,int y)
{   
    COORD C ;
    C.X = x;
    C.Y = y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),C);

}
