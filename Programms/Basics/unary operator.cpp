# include<iostream>

using namespace std;

class space
{
	int x,y,z;
	public:
		void get()
		{
			cin>>x>>y>>z;
		}
		void display()
		{
			cout<<x<<" "<<y<<" "<<z<<endl;
		}
		void operator -()
		{
			x=-x; y=-y; z=-z;
		}
		
};

int main()
{
	space s;
	s.get();
	s.display();
	-s;
	s.display();
}
