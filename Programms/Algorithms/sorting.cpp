# include<iostream>

using namespace std;

void swap(int *m,int *n)
{
	int temp;
	temp=*m;
	*m=*n;
	*n=temp;
	
}

int main()
{
	int arr[100];
	cout<<"array elements"<<endl;
	for(int i=0;i<4;i++)
	{
		cin>>arr[i];
	}
	
	int small=arr[0];
		for(int i=0;i<4;i++)
		{
			if(arr[i]<small)
		{
			small=arr[i];
			swap(&small,&arr[i]);
			}
		}
		
	for(int i=0;i<4;i++)
	{
		cout<<arr[i];
	}		
	
	return 0;
}
