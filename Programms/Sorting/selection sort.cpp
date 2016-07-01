# include<iostream>

using namespace std;
int findsmall(int arr[],int j,int n)
{
	int i,k,small=arr[j];
	for(i=j+1;i<n;i++)
	{
		if(arr[i]<small)
		{
		small=arr[i];
		k=i;
		}
	}
	return k;
}
void swap(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
int main()
{
	int arr[]={4,2,6,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	int i,x;
	for(i=0;i<n;i++)
	{
		x=findsmall(arr,i,n);
		swap(&arr[x],&arr[i]);
	}
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
