#include <iostream>
#include <windows.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
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
void celdas(int x1,int y1,int x2,int y2)
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
void diviciones(int x1,int y1,int x2,int y2){

	int x,y;
	for (x=x1;x<=x2;x++)
	{
		gotoxy (x,y1);cout<<char (196);
	}
//	gotoxy (x1,y1);cout<<char (186);
//	gotoxy (x2,y1);cout<<char (186);
}
void divicion(int x1,int y1,int x2,int y2){

	int x,y;
	for (y=y1;y<=y2;y++)
	{
		gotoxy (x1,y);cout<<char (179);		
	}
//	gotoxy (x1,y1);cout <<char(205);
//	gotoxy (x1,y2);cout <<char(205);
	
}
main() {
	int x,c,d,e,s,i;
	int g,h,j,k,l,m,n,o,p;
	char a,w;
//	cuadro(1,1,78,31);	
//	celdas(10,5,30,14);
	diviciones(10,8,30,14);
	diviciones(10,11,30,14);
	divicion(17,5,5,14);
	divicion(23,5,5,14);
	gotoxy (40,6);cout<<"Jugador numero [1] marca :" ;cin>>a;
	cout<<endl;
	gotoxy (40,7);cout<<"Jugador numero [2] marca :";cin>>w;	
	cout<<endl;
for(i=1;i<=9;i++)
{
	gotoxy (40,9);cout<<"Jugador 1 :"<<a<<"";
	gotoxy(40,11);cout<<"En donde desea colocar su marca :";
	cin>>e;
		switch (e)
				{
					case 1:
						gotoxy (14,7);cout<<a;
						g=1;
						break;
					case 2:
						gotoxy (20,7);cout<<a;
						h=1;
						break;
					case 3:
						gotoxy (26,7);cout<<a;
						k=1;
						break;
					case 4:
						gotoxy (14,10);cout<<a;
						j=1;
						break;
					case 5:
						gotoxy (20,10);cout<<a;
						l=1;
						break;
					case 6:
						gotoxy (26,10);cout<<a;
						m=1;
						break;
					case 7:
						gotoxy (14,12);cout<<a;
						n=1;
						break;
					case 8:
					 	gotoxy (20,12);cout<<a;
					 	o=1;
					 	break;
					case 9:
						gotoxy (26,12);cout<<a;
						p=1;
						break;
}
			if ((g==h)&&(h==k))
			{
                gotoxy(40,20);cout<<"Ganador jugador 1";
                i=10;
            }
            if ((j==l)&&(l==m))
            {
                gotoxy(40,20);cout<<"Ganador jugador 1";
                i=10;
        }
            if ((h==o)&&(o==p))
            {
                gotoxy(40,20);cout<<"Ganador jugador 1";
                i=10;
        }
            if ((g==j)&&(j==h))
            {
                gotoxy(40,20);cout<<"Ganador jugador 1";
                i=10;
            }
            if ((h==l)&&(l==o))
            {
                gotoxy(40,20);cout<<"Ganador jugador 1";
                i=10;
        }
         if ((k==m)&&(m==p))
         {
                gotoxy(40,20);cout<<"Ganador jugador 1";
                i=10;
            }
            if((g==l)&&(l==p))
            {
                gotoxy(40,20);cout<<"Ganador jugador 1";
                i=10;
            }
            if ((k==l)&&(l==n)){
            gotoxy(40,20);cout<<"Ganador jugador 1";
            i=10;
            }   
			i++;
			gotoxy (40,13);cout<<"Jugador 2:"<<w<<"";
			gotoxy(40,15);cout<<"En donde desea colocar su marca :";
			cin>>c;
			switch (c)
				{
					case 1:
						gotoxy (14,7);cout<<w;
					g=2;
						break;
					case 2:
						gotoxy (20,7);cout<<w;
						h=2;
						break;
					case 3:
						gotoxy (26,7);cout<<w;
						k=2;
						break;
					case 4:
						gotoxy (14,10);cout<<w;
						j=2;
						break;
					case 5:
						gotoxy (20,10);cout<<w;
						l=2;
						break;
					case 6:
						gotoxy (26,10);cout<<w;
						m=2;
						break;
					case 7:
						gotoxy (14,12);cout<<w;
						n=2;
						break;
					case 8:
					 	gotoxy (20,12);cout<<w;
					 	o=2;
					 	break;
					case 9:
						gotoxy (26,12);cout<<w;
						p=2;
						break;
			   }
			   	if ((g==h)&&(h==k))
			{
                gotoxy(40,20);cout<<"Ganador jugador 2";
                i=10;
            }
            if ((j==l)&&(l==m))
            {
                gotoxy(40,20);cout<<"Ganador jugador 2";
                i=10;
        }
            if ((h==o)&&(o==p))
            {
                gotoxy(40,20);cout<<"Ganador jugador 2";
                i=10;
        }
            if ((g==j)&&(j==h))
            {
                gotoxy(40,20);cout<<"Ganador jugador 2";
                i=10;
            }
            if ((h==l)&&(l==o))
            {
                gotoxy(40,20);cout<<"Ganador jugador 2";
                i=10;
        }
         if ((k==m)&&(m==p))
         {
                gotoxy(40,20);cout<<"Ganador jugador 2";
                i=10;
            }
            if((g==l)&&(l==p))
            {
                gotoxy(40,20);cout<<"Ganador jugador 2";
                i=10;
            }
            if ((k==l)&&(l==n)){
            gotoxy(40,20);cout<<"Ganador jugador 2";
            i=10;
            }
}
getch();	  

gotoxy(2,25);return 0;					
}


