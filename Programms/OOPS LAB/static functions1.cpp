# include<iostream>
using namespace std;

class play
{
	static int a;
	static int b;
public:
	static void count()
	{
		
		b++;
		cout<<b<<" "<<a<<endl;
	}
};

int play::a;
int play::b;
int main()
{
	play p1,p2;
	p1.count();
	p2.count();
	cout<<sizeof(p1);
	return 0;
}
