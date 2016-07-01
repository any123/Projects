# include<iostream>

using namespace std;

class complex
{
	int real;
	int img;
	public:
		
		void get(int r,int i)
		{
			real=r;
			img=i;
		}
		friend complex sum(complex c1,complex c2);
		
};

complex sum(complex c1,complex c2)
{
	c2.real=c2.real+c1.real;
	c2.img=c2.img+c1.img;
	cout<<c2.real<<"+i"<<c2.img;
}

int main()
{
	
	complex c1,c2;
	c1.get(3,4);
	c2.get(1,3);
	c2=sum(c1,c2);
	return 0;
}
