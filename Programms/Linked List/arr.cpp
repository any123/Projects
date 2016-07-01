# include<iostream>
 using namespace std;
 
 int main()
 {
 	int a[100]={1,3,2,8,9,7,5};
 	for(int i=0;i<7;i++)
 	cout<<a[i];
 	
 	cout<<" inserting at position 3"<<endl;
 	for(int i=6;i>3;i--)
 {
 	a[i+1]=a[i];
 }
 	a[3-1]=24;
 	for(int i=0;i<8;i++)
 	{
 		cout<<a[i];
 	}
 	return 0;
 }
