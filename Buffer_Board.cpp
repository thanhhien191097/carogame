#include<iostream>
#include"console.h"
#include<Windows.h>

using namespace std;

// Data has string & color
struct data{
	char string;
	int color;
};

// Array buffer has string & color of Data
data buffer[25][77];

void caro(int x,int y,char c,int mamau=7){
 buffer[y][x].string=c;
 buffer[y][x].color=mamau;
}
void createBuffer()
{
 for(int i=0;i<25;i++)
  for(int j=0;j<77;j++)
   caro(j,i,' ');
}

//DRAW A BOARD

void drawBoard(){
 for(int i=0;i<25;i++)	
 {
  if(i%2==0)
  {
   for(int j=0;j<77;j++)
    if(j%4==0) caro(j,i,197);
    else caro	(j,i,196);
  }
  else
  {
   for(int j=0;j<77;j++)
    if(j%4==0) caro(j,i,179);
  }
 }
}
char Board[12][19];
void createBoard()
{
 for(int i=0;i<12;i++)
  for(int j=0;j<19;j++)
   Board[i][j]=' ';
}

