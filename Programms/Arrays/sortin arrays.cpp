# include<iostream>

using namespace std;

int find_smallest(int **arr,int n)
{	int i;
	int small=*arr[0];
	for(i=0;i<n;i++)
	{
		if(*arr[i]<small)
		{
		small=*arr[i];}
	}
		for(int j=i+1;j<n;j++)
		{
			*arr[j-1]=*arr[j];
		}
	return small;
}

	int main()
	{
		
		int n,*arr,*arr2;
		cout<<"enter the size"<<endl;
		cin>>n;
		cout<<"enter the elemnts"<<endl;
		for(int i=0;i<n;i++)
		cin>>arr[i];
		int k=n;
		for(int j=0;j<n;j++)
		{
			arr2[j]=find_smallest(&arr,k);
			k--;
		}
		
		for(int j=0;j<n;j++)
		{cout<<arr2[j];
			cout<<" ";
		}	
		
		return 0;
		
	}
