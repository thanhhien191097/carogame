void display(int x,int y){
	
 //Reset
 createBuffer();
 
 //Draw a board into BUFFER
 drawBoard();
 
 //Print "X" and "O" into BUFFER
 for(int i=0;i<12;i++)
  for(int j=0;j<19;j++)
   caro(2+j*4,1+i*2,Board[i][j]);
   
    
 //Make a MOVER with 3 columns, then print it into BUFFER
 caro(x-1,y,buffer[y][x-1].string,176);  /left
 caro(x,y,buffer[y][x].string,176);      //middle
 caro(x+1,y,buffer[y][x+1].string,176);  //right
 
 //BUFFER -> Console (cmd)
 gotoXY(0,0);
 
 for(int i=0;i<25;i++){
	for(int j=0;j<77;j++){
   		TextColor(buffer[i][j].color);
   		putchar(buffer[i][j].string);
  	}
 if(i<24) 
 	putchar('\n');
 }
}
