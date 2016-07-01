# include<bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin>>t;
	while(t--)
	{	int arr[100],k=0,temp[100];
		int i,n;   cin>>n;
		int num;
		for(i=0;i<10;i++) 
		arr[i]=i;
		k=9;
		for(i=10;i<n;i++)
		{
			num=i;
			int x=num/10;
			int y=num%10;
			
			while(num>9)
			{
				if(fabs(x-y)==1)
				arr[k++]=num;
				num=num/10;
			}
			
		}
	
		
		
		for(i=0;i<k;i++)
		temp[i]=arr[i];
		
		sort(temp,temp+k);
		int count=0;
		int test=temp[k-1];
		while(test)
		{
			test=test/10;
			count++;
		}
		for(i=0;i<10;i++)
		{
			temp[i]=temp[i]*pow(10,count-1);
		}
		
		sort(temp,temp+k);
		cout<<"K is: "<<k<<endl;
		
		for(i=0;i<k;i++)
		if(temp[i]%10==0 && temp[i]!=10)
		temp[i]/=10;
		for(i=0;i<k;i++)
		cout<<temp[i]<<" ";
		
	}
}
