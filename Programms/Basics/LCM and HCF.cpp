# include<bits/stdc++.h>
 using namespace std;
 
 int main()
 { int i;
 	int t;
 	t=getchar_unlocked();
 	while(t--)
 	{
 		int a,b,m,n;
 		cin>>a>>b;
 		m=a; n=b;
		while(n!=0)
		{
			int c;
			c=n;
			n=m%n;
			m=c;                                   
		}
		cout<<m<<" "<<(a*b)/m<<"\n";  // i have found HCF & then used HCF*LCM=a*B;
 			 	
 	                           
 	}
 }
