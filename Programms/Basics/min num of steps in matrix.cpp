# include<iostream>
# include<math.h>
# include<algorithm>
int main()
{
	int t;
		int a[500][500],w,i,j,n,k=0,steps,x;
	std::cin>>t;
	while(t--)
	{	

		std::cin>>n;
		w=n*n;
		int p[w],q[w];
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				std::cin>>a[i][j];
				x=a[i][j];
				p[x-1]=i;
				q[x-1]=j;
				
			}
		}
	steps=0;
		for(i=0;i<w-1;i++)
		{
			steps=steps+fabs(p[i+1]-p[i]) + fabs(q[i+1]-q[i]);
		}
		std::cout<<steps<<"\n";
		
	}
	
}
