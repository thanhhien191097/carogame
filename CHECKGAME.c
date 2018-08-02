#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
//checkresult
int checkResult(int x ,int y)
{
 int count,i,j,h,c;							
 c=(x-2)/4;
 h=(y-1)/2;
 if(board[h][c]==' ') return 2;
 //check horizontal lines
 count=0;
 for(j=c;j>=0;j--)
	if(board[h][c]!=board[h][j]) break; 
	else 
		count++;
	for(j=c+1;j<19;j++)
		if(board[h][c]!=board[h][j]) break;	
		else 
			count++;
	if(count>=5)
 	{
		if(board[h][c]=='X') return 1;
		else 
			return 0;
	}
 //check vertical lines
	count=0;
	for(int i=h;i>=0;i--)
		if(board[i][c]!=board[h][c]) break;
			else count++;
	for(i=h+1;i<12;i++)
		if(board[i][c]!=board[h][c]) break;
			else count++;
	if(count>=5)
	{
		if(board[h][c]=='X') return 1;
	  	else 
	  		return 0;
	}
 //check the upward cross 
 count=0;
	for(i=h,j=c;i>=0 && j<19;i--,j++)
		if(board[i][j]!=board[h][c]) break;
			else count++;
	for(i=h+1,j=c-1;i<12,j>=0;i++,j--)
		if(board[i][j]!=board[h][c]) break;
			else count++;
	if(count>=5)
	{
	if(board[h][c]=='X') return 1;
	else 
		return 0;
	}
 //the downward cross		
	count=0;
	for(i=h,j=c;i<12 && j<19;i++,j++)
		if(board[i][j]!=board[h][c]) break;
			else count++;
	for(i=h-1,j=c-1;i>=0,j>=0;i--,j--)
		if(board[i][j]!=board[h][c]) break;
		else count++;
	if(count>=5)
	{
		if(board[h][c]=='X') return 1;
		else return 0;
	}
	for(i=0;i<12;i++)
		for(j=0;j<19;j++)
			if(board[i][j]==' ') return 2;
 				return 3;
}
int main(int argc, char** argv) {
	return 0;
}
*/
