
# include<bits/stdc++.h>
using namespace std;

int main()
{
	int hash_arr[256],pos,k,i;
	 for(int i=0 ; i<256 ; i++)
	         hash_arr[i]=0; 
	int n; cin>>n;
	char s[100];
	for(i=0;i<n;i++)
	{
		cin>>s[i];
	}
	for(i=0;i<n;i++)
	{
		pos=s[i];
		hash_arr[pos]=hash_arr[pos]+1;
	}k=0;
	int arr[100]; /* Using this array to store pos of all the non_repeted charcter 
					 and then find the min of them*/
	for(i=130;i>95;i--)
	{ 
		if(hash_arr[i]==1)
		{
			{
				for(int j=0;j<n;j++)
				{
					if(char(i)==s[j])
					  arr[k++]=j;
				}
			}
		}	 
	}
	int min=INT_MAX;
	for(i=0;i<k;i++)
	{ 
		if(arr[i]<min)
		min=arr[i];
		
	}
	
	cout<<"The first non repeting charcter is\n"<<s[min];
	


  	
}
