# include<bits/stdc++.h>

using namespace std;

class point
{
	public:
	int x; int y;
		point(int a=0,int b=0)
		{x=a;  y=b;
		}
};

int gcd(int a,int b){
	if(b==0)  return a;
	return gcd(b,a%b);
}
int get_boundary_count(point p,point q)
{
	if(p.x== q.x) return fabs(p.y - q.y)-1;
	
	if(p.y== q.y) return fabs(p.x - q.x)-1;
	
	return gcd( fabs(p.x-q.x), fabs(p.y-q.y))-1;
}
int get_internal_count(point p,point q,point r)
{
	int boundarycount=get_boundary_count(p,q)+get_boundary_count(q,r)+get_boundary_count(r,p)+3;
	
	int area= fabs(p.x*(q.y-r.y) + q.x*(r.y - p.y) + r.x*(p.y -q.y) );
	
	return ( area - boundarycount+2)/2;
}

int main()
{
	point p(0,0);
	point q(5,0);
	point r(0,5);
	
	cout<<"the no. of internal points are : "<<get_internal_count(p,q,r);
}
