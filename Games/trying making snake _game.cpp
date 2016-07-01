# include<bits/stdc++.h>
# include<windows.h>
# include<conio.h>
using namespace std;
bool GameOver;
const int width=20;
const int height=20;
int tailX[100],tailY[100];
int tail_len;
int x,y,fx,fy,score;
enum dirr {STOP=0,LEFT,RIGHT,UP,DOWN};
dirr dir;

void setup()
{
 GameOver=false;
 dir=STOP;
 x=width/2;
 y=height/2;
 fx=rand()%width;
 fy=rand()%height;
 score=0;
 
}
int draw()
{
	system("cls");
	
	for(int i=0;i<width+2;i++)
	cout<<"#";
	cout<<endl;
	
	for(int i=0;i<height;i++)
	{
		for(int j=0;j<width;j++)
		{
			if(j==0) cout<<"#";
			
			if(i==y&& j==x)
			cout<<"O";
			else
			if(i==fy && j==fx)
			cout<<"F";
			else
			{
					bool p=false;
				for(int k=0;k<tail_len;k++)
				{
				
					if(tailX[k]==j && tailY[k]==i)
					{
						cout<<"o";
							p=true;
					}
				}
				if(!p)
				cout<<" ";
			}
			
			if(j==width-1)
			cout<<"#";
		}
		cout<<endl;
	}
	
		for(int i=0;i<width+2;i++)
	cout<<"#";
	cout<<endl<<score;
	cout<<endl<<"Your final score is :\n"<<score;
}
void input()
{
	if(_kbhit())
	{
	        switch (_getch())
        {
        case 'a':
            dir = LEFT;
            break;
        case 'd':
            dir = RIGHT;
            break;
        case 'w':
            dir = UP;
            break;
        case 's':
            dir = DOWN;
            break;
        case 'x':
            GameOver = true;
            break;
        }
    }
}

void logic()
{
	int prevX=tailX[0];
	int prevY=tailY[0];
	int prev2x,prev2y;
	tailX[0]=x;
	tailY[0]=y;
	for(int i=1;i<tail_len;i++)
	{
		prev2x=tailX[i];
		prev2y=tailY[i];
		tailX[i]=prevX;
		tailY[i]=prevY;
		prevX=prev2x;
		prevY=prev2y;
		
	}
	switch(dir)
	{
		case LEFT:
			x--;
			break;
		
		case RIGHT:
			x++;
			break;
			
		case UP:
			y--;
			break;
			
		case DOWN:
			y++;
			break;
		
		default:
		break;
			
	}
	if(x>width || x<0 || y<0 || y>height )
	 GameOver=true; 
	 /*if(x>=width) x=0; else if(x<0) x=width-1;
	 if(y>=height) y=0; else if(y<0)  y=height-1;
	 */
	 for(int i=0;i<tail_len;i++)
	 	if(tailX[i]==x && tailY[i]==y)
	 	GameOver=true;
	 	
	 if(x==fx && y==fy)
		{
			score=score+10;
			fx=rand()%width;
			fy=rand()%height;
			tail_len++;
		}
}

int main()
{
	setup();
	while(!GameOver)
	{
		draw();
		input();
		logic();
		Sleep(100);
	}
}
