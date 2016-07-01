# include<bits/stdc++.h>
using namespace std;

void printclose(int arr[],int n,int x)
{
	int res_l,res_r;
	int l=0,r=n-1,diff=INT_MAX;
	
	while(r>l)
	{
		if(abs(arr[l]+arr[r]-x)<diff)
		{
			res_l=l;   res_r=r;
			diff=abs(arr[l]+arr[r]-x);
		}
		 if(arr[l]+arr[r]>x)               //because array is sorted so last elemsnts would be larger
		 r--;
		 else
		 l++;
	}
	cout<<"closest pair is "<<arr[res_l]<< " and "<<arr[res_r];
}

int main()
{
	int arr[]={10,22,28,29,30,40},x=54;
	int n=6;
	printclose(arr,n,x);
	return 0;
}
