# include<iostream>

using namespace std;

class complex
{
	public:
	int real;
	int img;
		void get(int r,int i)
		{
			real=r;
			img=i;
		}
	complex sum(complex c1,complex c2)
	{
		c2.real=c1.real+c2.real;
		c2.img=c1.img+c2.img;
		return c2;
	}	
};

int main()
{
	complex c1,c2;
	c1.get(3,4);
	c2.get(1,2);
	c2=c2.sum(c1,c2);
	cout<<c2.real<<"+i"<<c2.img;
	
	return 0;
}
