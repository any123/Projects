# include<bits/stdc++.h>

using namespace std;
int play(int A[],int B[],int n)
{	int c[8];
	int count=0,q=0,w=0;
	
	for(int i=0;i<n;i++)
	{
		if(A[q]>B[w])
		{
			c[i]=B[w]; w++;
		}
		else
		{
			c[i]=A[q]; q++;
		}
		count++;
			if(count==4)
			break;
	}
	return c[count-1];
	
	//for(int i=0;i<8;i++) cout<<c[i]<<" ";
}
int main()
{
	int A[]={1,3,5,7};
	int B[]={2,4,6,8};
	int size=8; //of combine array
	
	cout<<"Mid element in the union of two arrays is: "<<play(A,B,size);
}
