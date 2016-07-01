# include<iostream>
using namespace std;

class play
{
	int a;
	static int b;
public:
	void count()
	{
		
		b++;
		cout<<b<<"times"<<endl;
	}
};

int play::b;

int main()
{
	play p[10];
	for(int i=0;i<10;i++)
	{
		p[i].count();
		
	}
}
