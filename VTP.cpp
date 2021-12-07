//Ve Point co toa do tam (x,y) ban kinh r
void drawPoint (int x,int y,int radius){
	circle (x,y,radius);
	floodfill (x,y,getcolor());
}

//Ve Snake
void drawSnake (){
	setfillstyle (1,10);
	int dem = 0;
	for (int i = 0;dem < snakeLength;i++){
			drawPoint(snake[i].x, snake[i].y,5);
			dem++;
		}
	//Xoa dot cuoi cung cua than ran moi khi no di chuyen
	int x = getcolor();
	setfillstyle (1,BACKGROUND);
	drawPoint(snake[snakeLength-1].x0,snake[snakeLength-1].y0,5);
	setcolor (BACKGROUND);
	circle (snake[snakeLength-1].x0,snake[snakeLength-1].y0,5);
	setcolor(x);
	setfillstyle (1,5);
}

//Hien thi thuc an
void drawFood (){
	int x = getcolor();
	int c = rand() % 14 + 1;
		setcolor(c);setfillstyle (SOLID_FILL, c);
		drawPoint(food.x, food.y,5);
	setcolor(x);
	setfillstyle (1,BACKGROUND);
}

//Ve toan bo giao dien game
void drawGame (){
	drawSnake();
	drawFood();
	int x = getcolor ();
	setcolor (2);
	sprintf(score_str,"%d",snakeLength*level*10-level*30);    //Hien thi diem
    settextstyle(4,0,3);
    outtextxy(450,100,"SCORE:");
    setcolor(12);
    outtextxy(600,20,score_str);
	setcolor (x);
}
