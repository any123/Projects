# include<bits/stdc++.h>

using namespace std;
int max(float A[],int n)
{   int curr,max_ele=0,j;
	for(int i=0;i<n;i++)
	{	curr=A[i];
	    if(A[i]>max_ele) 
		{max_ele=A[i]; j=i;}
	
	}

	return j;
}
int main()
{
	int n; cout<<"Enter the number of elements:\n"; cin>>n;
	int P[n],W[n]; float ratio[n];
	
	for(int i=0;i<n;i++)cin>>P[i];
	for(int i=0;i<n;i++)cin>>W[i];
	for(int i=0;i<n;i++)
	{
		ratio[i]= (float)P[i]/(float)W[i];
	}
		for(int i=0;i<n;i++)
	{
		cout<<ratio[i]<<" ";
	}cout<<endl;
	int curr_w=0,given_w;
	cin>>given_w;
	static int sum;
	while(curr_w<given_w)
	{   int i=max(ratio,n);
		if(W[i]>(given_w - curr_w))
		{
			sum=sum+ratio[i]*(given_w - curr_w);
			curr_w+=(given_w - curr_w);
			cout<<sum<<" ";
		}
		else
		{
			sum=sum+ratio[i]*W[i];
			curr_w=curr_w+W[i];
			cout<<sum<<" ";
		}
		W[i]=0; P[i]=0; ratio[i]=0;
		
	}
	
	cout<<endl<<"The maximum profit is: "<<sum;
		
}
