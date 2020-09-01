#include <iostream>
#include <windows.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Creacion de la plataforma*/

using namespace std;

void gotoxy(int x, int y) {
COORD pos = {x, y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}
void cuadro(int x1,int y1,int x2, int y2)
{
	int x;
	int y;
	for (x=x1;x<=x2;x++)
	{
		gotoxy (x,y1);cout<<char (205);
		gotoxy (x,y2);cout<<char (205);
	}
	for (y=y1;y<=y2;y++)
	{
		gotoxy (x1,y);cout<<char (186);
		gotoxy (x2,y);cout<<char (186);
	}
	gotoxy(x1,y1);cout<<char(201);
	gotoxy(x2,y1);cout<<char(187);
	gotoxy(x1,y2);cout<<char(200);
	gotoxy(x2,y2);cout<<char(188);
}
 
