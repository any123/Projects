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
	friend void operator-(space &s);
		
};

	void operator-(space &s)
		{              
			s.x=-s.x; s.y=-s.y; s.z=-s.z;
		}
	int main()
	{
		space s;
		s.get();
		s.display();
		operator-(s);
		s.display();
	}	


