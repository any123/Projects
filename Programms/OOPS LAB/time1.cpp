# include<iostream>
# include<stdlib.h>

using namespace std;

class times
{
	int hr;
	int min;
public:
	void get(int h,int m)
	{
		hr=h;
		min=m;
	}
	
	void display()
	{
		cout<<hr<<" "<<min<<endl;
	}
 void add(times t1,times t2)
 {
 	hr=t2.hr+t1.hr;
 	min=t2.min+t1.min;
 	if(min>60)
 	{
 		min=min-60;
 		hr++;
 	}
 }
};

int main()
{
	times t1,t2,t3;
	
	t1.get(4,25);
	t2.get(1,45);
	t3.add(t1,t2);
	t3.display();
	return 0;
}
